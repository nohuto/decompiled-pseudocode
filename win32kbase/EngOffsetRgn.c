/*
 * XREFs of EngOffsetRgn @ 0x1C01978C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     GreOffsetRgn @ 0x1C0042C20 (GreOffsetRgn.c)
 */

INT __stdcall EngOffsetRgn(HANDLE hrgn, INT x, INT y)
{
  INT result; // eax
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v7);
  if ( (unsigned int)GreGetObjectOwner((__int64)hrgn, 4) )
    result = 0;
  else
    result = GreOffsetRgn((HRGN)hrgn, x, y);
  if ( v7 )
    *(_DWORD *)(v7 + 328) &= ~0x10u;
  return result;
}
