/*
 * XREFs of ?IsValidForHangTest@@YAHPEBUtagTHREADINFO@@@Z @ 0x1C0004F08
 * Callers:
 *     DoExplorerHangDetection @ 0x1C0004E74 (DoExplorerHangDetection.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidForHangTest(const struct tagTHREADINFO *a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 56) )
      return *((_QWORD *)a1 + 53) != 0LL;
  }
  return result;
}
