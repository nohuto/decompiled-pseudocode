/*
 * XREFs of ?what@filesystem_error@filesystem@std@@UEBAPEBDXZ @ 0x180129540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const char *__fastcall std::filesystem::filesystem_error::what(std::filesystem::filesystem_error *this)
{
  const char *result; // rax

  result = (char *)this + 104;
  if ( *((_QWORD *)this + 16) >= 0x10uLL )
    return *(const char **)result;
  return result;
}
