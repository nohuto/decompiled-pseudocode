/*
 * XREFs of EngSubtractRgn @ 0x1C014BBC0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0031450 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0039860 (GreCombineRgn.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB6DC (--0EngModeState@@QEAA@XZ.c)
 */

INT __stdcall EngSubtractRgn(HANDLE hrgnResult, HANDLE hRgnA, HANDLE hRgnB)
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
    v6 = GreCombineRgn((HRGN)hrgnResult, (HRGN)hRgnA, (HRGN)hRgnB, 4);
  }
  if ( v8 )
    *(_DWORD *)(v8 + 328) &= ~0x20u;
  return v6;
}
