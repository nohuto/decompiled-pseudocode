/*
 * XREFs of ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007BB6C
 * Callers:
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C00774F4 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C007BB00 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?GetAndClearCurrentDirty@CCompositionBuffer@@QEAAXPEAPEAUHRGN__@@PEAUScrollOptimization@@@Z @ 0x1C007CAC4 (-GetAndClearCurrentDirty@CCompositionBuffer@@QEAAXPEAPEAUHRGN__@@PEAUScrollOptimization@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::GetSurfaceUpdate(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_SURFACE_UPDATE_ *a3)
{
  int v6; // esi
  struct CCompositionBuffer *RenderingBuffer; // rax
  struct CCompositionBuffer *v8; // r14
  __int64 v9; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = -1073741823;
  if ( (*((_QWORD *)this + 6) != a2 || !a2) && *((int *)this + 6) > 0 )
  {
    RenderingBuffer = CCompositionSurface::GetRenderingBuffer(this);
    v8 = RenderingBuffer;
    if ( !RenderingBuffer )
    {
      memset((char *)a3 + 4, 0, 0xDCuLL);
      *(_DWORD *)a3 = 2;
      v6 = 0;
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 2);
      goto LABEL_8;
    }
    v9 = *(_QWORD *)RenderingBuffer;
    v11 = 0LL;
    v6 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, __int64 *))(v9 + 232))(v8, &v11);
    if ( v6 >= 0 )
    {
      *(_DWORD *)a3 = 3
                    - ((*(unsigned __int8 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 168LL))(v8) != 0);
      *(_QWORD *)((char *)a3 + 4) = *((_QWORD *)this - 2);
      *((_QWORD *)a3 + 2) = *((_QWORD *)v8 + 2);
      *((_DWORD *)a3 + 6) = *(_DWORD *)(v11 + 28);
      *((_DWORD *)a3 + 7) = *((_DWORD *)v8 + 69);
      CCompositionBuffer::GetAndClearCurrentDirty(v8, (HRGN *)a3 + 4, (struct CSM_SURFACE_UPDATE_ *)((char *)a3 + 40));
      *(_OWORD *)((char *)a3 + 72) = *((_OWORD *)v8 + 3);
      *(_OWORD *)((char *)a3 + 88) = *((_OWORD *)v8 + 4);
      *(_OWORD *)((char *)a3 + 104) = *((_OWORD *)v8 + 5);
      *(_OWORD *)((char *)a3 + 120) = *((_OWORD *)v8 + 6);
      *(_OWORD *)((char *)a3 + 136) = *((_OWORD *)v8 + 7);
      *(_OWORD *)((char *)a3 + 152) = *((_OWORD *)v8 + 8);
      *(_OWORD *)((char *)a3 + 168) = *((_OWORD *)v8 + 9);
      *(_OWORD *)((char *)a3 + 184) = *((_OWORD *)v8 + 10);
      *(_OWORD *)((char *)a3 + 200) = *((_OWORD *)v8 + 11);
      *((_DWORD *)a3 + 54) = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 192LL))(v8);
      *((_DWORD *)a3 + 55) = *(_DWORD *)(v11 + 80);
LABEL_8:
      *((_QWORD *)this + 6) = a2;
    }
  }
  return (unsigned int)v6;
}
