/*
 * XREFs of EngUnionRgn @ 0x1C014BF50
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C00328C0 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C003ACD0 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB83C (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngUnionRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
{
  INT v6; // ecx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgnResult, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hRgnA, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hRgnB, 4) )
  {
    v6 = 0;
  }
  else
  {
    v6 = GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 2);
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) &= ~0x20u;
  return v6;
}
