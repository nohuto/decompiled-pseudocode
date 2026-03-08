/*
 * XREFs of ?what@exception@std@@UEBAPEBDXZ @ 0x1400061D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const char *__fastcall std::exception::what(std::exception *this)
{
  const char *result; // rax

  result = "Unknown exception";
  if ( *((_QWORD *)this + 1) )
    return (const char *)*((_QWORD *)this + 1);
  return result;
}
