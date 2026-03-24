/*
 * XREFs of EngRectInRgn @ 0x1C014BAD0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectOwner @ 0x1C0031450 (GreGetObjectOwner.c)
 *     GreRectInRegion @ 0x1C0080BB0 (GreRectInRegion.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00CB6DC (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngRectInRgn(HANDLE hrgn, LPRECT prcl)
{
  BOOL result; // eax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v5);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
    result = 0;
  else
    result = GreRectInRegion((HRGN)hrgn, (struct _RECTL *)prcl);
  if ( v5 )
    *(_DWORD *)(v5 + 328) &= ~0x20u;
  return result;
}
