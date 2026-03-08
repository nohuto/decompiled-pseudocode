/*
 * XREFs of ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00803BC
 * Callers:
 *     NtGdiGetPixel @ 0x1C00054A0 (NtGdiGetPixel.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C008215C (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall SrcSurfaceAccessCheck(struct SURFACE *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*((_DWORD *)a1 + 164) || ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) == *((_DWORD *)a1 + 164) )
    return (unsigned int)_SurfaceAccessCheck(a1);
  return v1;
}
