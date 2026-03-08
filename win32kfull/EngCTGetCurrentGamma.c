/*
 * XREFs of EngCTGetCurrentGamma @ 0x1C0013630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall EngCTGetCurrentGamma(HDEV hdev)
{
  ULONG result; // eax

  result = *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(hdev) + 32) + 8584LL);
  if ( result == 1200 )
  {
    result = *((_DWORD *)hdev + 604);
    if ( !result )
      return 1200;
  }
  return result;
}
