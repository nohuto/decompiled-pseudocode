/*
 * XREFs of ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C007FC9C
 * Callers:
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 *     NtGdiSetPixel @ 0x1C02D8C50 (NtGdiSetPixel.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008215C (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DestSurfaceAccessCheck(struct SURFACE *a1)
{
  if ( ((*((_DWORD *)a1 + 29) & 8) != 0 || *((_QWORD *)a1 + 28)) && _bittest16((const signed __int16 *)a1 + 51, 9u) )
    return 0LL;
  else
    return _SurfaceAccessCheck(a1);
}
