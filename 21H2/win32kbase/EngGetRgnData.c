/*
 * XREFs of EngGetRgnData @ 0x1C0009040
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F0C0 (GreGetObjectOwner.c)
 *     GreGetRegionData @ 0x1C008B460 (GreGetRegionData.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008EA90 (--0EngModeState@@QEAA@XZ.c)
 */

DWORD __stdcall EngGetRgnData(HANDLE hrgn, DWORD nCount, LPRGNDATA lpRgnData)
{
  DWORD result; // eax
  __int64 v5; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v5);
  if ( (unsigned int)GreGetObjectOwner(hrgn, 4LL) )
    result = 0;
  else
    result = GreGetRegionData((HRGN)hrgn);
  if ( v5 )
    *(_DWORD *)(v5 + 328) &= ~0x10u;
  return result;
}
