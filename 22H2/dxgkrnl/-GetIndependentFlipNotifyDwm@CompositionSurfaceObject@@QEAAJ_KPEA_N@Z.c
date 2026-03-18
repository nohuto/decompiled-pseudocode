/*
 * XREFs of ?GetIndependentFlipNotifyDwm@CompositionSurfaceObject@@QEAAJ_KPEA_N@Z @ 0x1C0079974
 * Callers:
 *     ?CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00797CC (-CreateCompleted@CFlipToken@@SAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHIS.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0086C44 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?NotifyDwm@CFlipContentToken@@UEBA_NXZ @ 0x1C008A0C0 (-NotifyDwm@CFlipContentToken@@UEBA_NXZ.c)
 * Callees:
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000AEB4 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C00103F0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CompositionSurfaceObject::GetIndependentFlipNotifyDwm(
        CompositionSurfaceObject *this,
        __int64 a2,
        bool *a3)
{
  int v6; // ebx
  char v7; // r11
  struct CCompositionBuffer *v9; // [rsp+40h] [rbp+8h] BYREF

  v6 = CPushLock::AcquireLockShared((CompositionSurfaceObject *)((char *)this + 48));
  if ( v6 >= 0 )
  {
    v9 = 0LL;
    if ( (int)CCompositionSurface::FindBuffer((CompositionSurfaceObject *)((char *)this + 40), a2, &v9) >= 0 )
      v7 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v9 + 200LL))(v9);
    *a3 = v7;
    CPushLock::ReleaseLock((CompositionSurfaceObject *)((char *)this + 48));
  }
  return (unsigned int)v6;
}
