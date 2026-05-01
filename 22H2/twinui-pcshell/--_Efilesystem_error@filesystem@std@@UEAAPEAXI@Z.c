/*
 * XREFs of ??_Efilesystem_error@filesystem@std@@UEAAPEAXI@Z @ 0x18011BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1filesystem_error@filesystem@std@@UEAA@XZ @ 0x18011B608 (--1filesystem_error@filesystem@std@@UEAA@XZ.c)
 */

std::filesystem::filesystem_error *__fastcall std::filesystem::filesystem_error::`vector deleting destructor'(
        std::filesystem::filesystem_error *this,
        char a2)
{
  std::filesystem::filesystem_error::~filesystem_error(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
