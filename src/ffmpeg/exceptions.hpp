#pragma once

#include <exception>
#include <string>

namespace OUMP {
/**
 * @brief Exception indicating that a file couldn't be read.
 */
class UnreadableFileException : public std::exception {
   private:
    std::string m_what;

   public:
    UnreadableFileException() noexcept;
    UnreadableFileException(std::string t_what) noexcept;
    ~UnreadableFileException() noexcept = default;

    UnreadableFileException(UnreadableFileException& other) noexcept;

    const char* what() const noexcept override;
};
}  // namespace OUMP
