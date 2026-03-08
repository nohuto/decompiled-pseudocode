/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008215C
 * Callers:
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007FC9C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00803BC (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C0081D78 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a1 + 28);
  if ( (v3 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81), a2, a3);
  if ( (v3 & 0x10000000) != 0 )
    return UserScreenAccessCheck(a1, a2, a3);
  return 1LL;
}
