/*
 * XREFs of EngXorRgn @ 0x1C0197AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 */

INT __stdcall EngXorRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
{
  INT v6; // ecx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( (unsigned int)GreGetObjectOwner((__int64)hrgnResult, 4)
    || (unsigned int)GreGetObjectOwner((__int64)hRgnA, 4)
    || (unsigned int)GreGetObjectOwner((__int64)hRgnB, 4) )
  {
    v6 = 0;
  }
  else
  {
    v6 = GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 3);
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) &= ~0x10u;
  return v6;
}
