/*
 * XREFs of ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B46D4
 * Callers:
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00B42C0 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B493C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C0109D50 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = *((_DWORD *)a1 + 28);
  if ( (v4 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81), a2, a3, a4);
  if ( (v4 & 0x10000000) != 0 )
    return UserScreenAccessCheck(a1, a2, a3, a4);
  return 1LL;
}
