/*
 * XREFs of MulProcessChildRedirectionDfbSurfaces2 @ 0x1C02B58C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C014E342 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 */

__int64 __fastcall MulProcessChildRedirectionDfbSurfaces2(struct _SURFOBJ *a1, __int64 a2)
{
  PVOID *p_pvScan0; // rdi
  __int64 v3; // r9
  unsigned int v4; // ebx

  p_pvScan0 = &a1[-1].pvScan0;
  if ( !_bittest((const signed __int32 *)a1->hdev + 10, 0x11u) )
    return 0LL;
  if ( !_bittest((const signed __int32 *)(a2 + 40), 0x11u) )
    return 0LL;
  v4 = 0;
  if ( !IsMetaRedirectionBitmap(a1) )
    return 0LL;
  bDfbSurfacesMigrated(v3, p_pvScan0);
  LOBYTE(v4) = pProcessDfbSurfacesInternal(p_pvScan0, 0LL) != 0;
  return v4;
}
