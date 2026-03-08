/*
 * XREFs of ?what@exception@stdext@@UEBAPEBDXZ @ 0x14000D9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const char *__fastcall stdext::exception::what(stdext::exception *this)
{
  const char *result; // rax

  result = "unknown exception";
  if ( *((_QWORD *)this + 1) )
    return (const char *)*((_QWORD *)this + 1);
  return result;
}
