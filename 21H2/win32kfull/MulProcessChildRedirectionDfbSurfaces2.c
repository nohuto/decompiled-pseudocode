/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces2 @ 0x1C02A4F10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C029FEA0 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces2(struct _SURFOBJ *a1, __int64 a2)
{
  PVOID *p_pvScan0; // rdi
  unsigned int v3; // ebx
  __int64 v4; // r9

  p_pvScan0 = &a1[-1].pvScan0;
  v3 = 0;
  if ( _bittest((const signed __int32 *)a1->hdev + 10, 0x11u)
    && _bittest((const signed __int32 *)(a2 + 40), 0x11u)
    && IsMetaRedirectionBitmap(a1) )
  {
    bDfbSurfacesMigrated(v4, p_pvScan0);
    LOBYTE(v3) = pProcessDfbSurfacesInternal(p_pvScan0, 0LL) != 0;
  }
  return v3;
}
