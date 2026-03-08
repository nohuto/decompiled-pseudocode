/*
 * XREFs of ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C007BB00
 * Callers:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007BB6C (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C007C144 (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

struct CCompositionBuffer *__fastcall CCompositionSurface::GetRenderingBuffer(CCompositionSurface *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  char *v3; // rsi
  __int64 v4; // r14

  v1 = 0LL;
  if ( *((_DWORD *)this + 22) )
  {
    v2 = *((_QWORD *)this + 10);
    v3 = (char *)this + 72;
    while ( (char *)v2 != v3 )
    {
      v4 = v2 - 24;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v2 - 24) + 24LL))(v2 - 24) )
        break;
      v2 = *(_QWORD *)(v2 + 8);
      v1 = v4;
    }
  }
  return (struct CCompositionBuffer *)v1;
}
