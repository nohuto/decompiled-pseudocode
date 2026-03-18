/*
 * XREFs of EngGetRgnBox @ 0x1C0177B40
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C001F0C0 (GreGetObjectOwner.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008EA90 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetRgnBox @ 0x1C0092B40 (GreGetRgnBox.c)
 */

INT __stdcall EngGetRgnBox(HANDLE hrgn, LPRECT prcl)
{
  INT result; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v5);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreGetRgnBox((HRGN)hrgn, (__int64)prcl);
  if ( v5 )
    *(_DWORD *)(v5 + 328) &= ~0x10u;
  return result;
}
