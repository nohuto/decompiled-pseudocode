/*
 * XREFs of ?AcquireLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E09A8
 * Callers:
 *     ?AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z @ 0x1C0180D4C (-AcquireCoreSync@DXGADAPTER@@QEAAXW4DXGADAPTERCORESYNC_LEVEL@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C017F7AC (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C0195A00 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ @ 0x1C01E0968 (-ReleaseLocksForPowerStateD3transition@DXGADAPTER@@QEAAXXZ.c)
 *     ?TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z @ 0x1C01E0C74 (-TryAcquireDeviceLockForAllDevices@ADAPTER_RENDER@@QEAAEW4DXGADAPTER_DEVICELISTTYPE@@@Z.c)
 */

void __fastcall DXGADAPTER::AcquireLocksForPowerStateD3transition(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  char *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = *((_QWORD *)this + 366);
  if ( !v2
    || (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(v2, 2LL)
    && (unsigned __int8)ADAPTER_RENDER::TryAcquireDeviceLockForAllDevices(*((_QWORD *)this + 366), 1LL) )
  {
    DXGADAPTER::AcquireCoreResourceExclusive((__int64)this, 2u, 1);
    if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    {
      v3 = *((_QWORD *)this + 366);
      if ( !v3 )
        goto LABEL_10;
      if ( DXGADAPTER::IsDxgmms2(this) )
        goto LABEL_25;
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(v3 + 16)) )
      {
        WdLogSingleEntry1(1LL, 4504LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"IsCoreResourceExclusiveOwner()",
          4504LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( !*(_QWORD *)(v3 + 1376) )
      {
LABEL_25:
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 760LL) + 8LL)
                                                        + 1072LL))(*(_QWORD *)(*((_QWORD *)this + 366) + 768LL))
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 366) + 736LL) + 8LL)
                                                        + 928LL))(*(_QWORD *)(*((_QWORD *)this + 366) + 744LL))
          && !*((_BYTE *)this + 2870) )
        {
LABEL_10:
          KeEnterCriticalRegion();
          if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 104, 0LL) )
          {
            *((_QWORD *)this + 14) = KeGetCurrentThread();
            v4 = (char *)this + 104;
            if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 4104LL) )
            {
              *((_DWORD *)this + 40) = 1;
              *((_QWORD *)this + 14) = 0LL;
              ExReleasePushLockExclusiveEx(v4, 0LL);
              KeLeaveCriticalRegion();
              v5 = *((_QWORD *)this + 366);
              if ( v5 )
              {
                *(_QWORD *)(v5 + 32) = 0LL;
                ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
                KeLeaveCriticalRegion();
                v6 = *((_QWORD *)this + 366);
                *(_QWORD *)(v6 + 56) = 0LL;
                ExReleasePushLockExclusiveEx(v6 + 48, 0LL);
                KeLeaveCriticalRegion();
              }
              return;
            }
            *((_QWORD *)this + 14) = 0LL;
            ExReleasePushLockExclusiveEx(v4, 0LL);
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
    DXGADAPTER::ReleaseCoreResource((PERESOURCE *)this, 0LL);
  DXGADAPTER::ReleaseLocksForPowerStateD3transition(this);
}
