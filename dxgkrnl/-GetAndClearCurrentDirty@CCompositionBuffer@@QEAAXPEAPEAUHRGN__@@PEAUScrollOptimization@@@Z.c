/*
 * XREFs of ?GetAndClearCurrentDirty@CCompositionBuffer@@QEAAXPEAPEAUHRGN__@@PEAUScrollOptimization@@@Z @ 0x1C007CAC4
 * Callers:
 *     ?GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x1C007BB6C (-GetSurfaceUpdate@CCompositionSurface@@QEBAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::GetAndClearCurrentDirty(
        CCompositionBuffer *this,
        HRGN *a2,
        struct ScrollOptimization *a3)
{
  (*(void (__fastcall **)(_QWORD, HRGN *))(**((_QWORD **)this + 35) + 56LL))(*((_QWORD *)this + 35), a2);
  *(_OWORD *)a3 = *((_OWORD *)this + 18);
  *((_QWORD *)a3 + 2) = *((_QWORD *)this + 38);
  *((_DWORD *)a3 + 6) = *((_DWORD *)this + 78);
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 43) = 0;
}
