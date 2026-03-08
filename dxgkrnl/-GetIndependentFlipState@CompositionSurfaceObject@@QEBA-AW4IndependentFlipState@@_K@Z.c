/*
 * XREFs of ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C0078D5C
 * Callers:
 *     ?CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z @ 0x1C0078888 (-CanReleaseToFrame@CFlipToken@@IEAAJIPEA_N@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0051E98 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipState(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  struct CCompositionBuffer *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( (int)CPushLock::AcquireLockShared((CPushLock *)(a1 + 48)) >= 0 )
  {
    v6 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CCompositionSurface *)(a1 + 40), a2, &v6) >= 0 )
      v4 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v6 + 192LL))(v6);
    CPushLock::ReleaseLock((CPushLock *)(a1 + 48));
  }
  return v4;
}
