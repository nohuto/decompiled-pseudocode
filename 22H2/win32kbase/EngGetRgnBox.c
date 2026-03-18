/*
 * XREFs of EngGetRgnBox @ 0x1C016A9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008A354 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C008A450 (GreGetObjectOwner.c)
 *     GreGetRgnBox @ 0x1C0099280 (GreGetRgnBox.c)
 */

INT __stdcall EngGetRgnBox(HANDLE hrgn, LPRECT prcl)
{
  INT result; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v5);
  if ( (unsigned int)GreGetObjectOwner((__int64)hrgn, 4) )
    result = 0;
  else
    result = GreGetRgnBox((HRGN)hrgn, (__int64)prcl);
  if ( v5 )
    *(_DWORD *)(v5 + 328) &= ~0x10u;
  return result;
}
