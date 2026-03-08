/*
 * XREFs of EngCopyRgn @ 0x1C0197690
 * Callers:
 *     <none>
 * Callees:
 *     ??0EngModeState@@QEAA@XZ @ 0x1C0019C74 (--0EngModeState@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0019E80 (GreGetObjectOwner.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 */

INT __stdcall EngCopyRgn(HANDLE hrgnDst, HANDLE hrgnSrc)
{
  INT v4; // ecx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v6);
  if ( (unsigned int)GreGetObjectOwner((__int64)hrgnDst, 4) || (unsigned int)GreGetObjectOwner((__int64)hrgnSrc, 4) )
    v4 = 0;
  else
    v4 = GreCombineRgn((HRGN)hrgnDst, (HRGN)hrgnSrc, 0LL, 5);
  if ( v6 )
    *(_DWORD *)(v6 + 328) &= ~0x10u;
  return v4;
}
