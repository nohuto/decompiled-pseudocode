/*
 * XREFs of EngCTGetCurrentGamma @ 0x1C0101110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall EngCTGetCurrentGamma(HDEV hdev)
{
  ULONG result; // eax

  result = gulGamma;
  if ( gulGamma == 1200 )
  {
    result = *((_DWORD *)hdev + 604);
    if ( !result )
      return 1200;
  }
  return result;
}
