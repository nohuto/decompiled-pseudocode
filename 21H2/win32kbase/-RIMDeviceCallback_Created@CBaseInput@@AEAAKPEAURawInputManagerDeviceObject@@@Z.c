/*
 * XREFs of ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004DD80
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     HMCreateHandleForObject @ 0x1C004DE50 (HMCreateHandleForObject.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C004DFA0 (RawInputManagerDeviceObjectReference.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01F5528 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Created(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct RawInputManagerDeviceObject *v3; // rdi
  char *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  const struct tagDomLock *v8; // rcx
  const struct CONTAINER_ID *v10; // r8
  int v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v4 = (char *)a2 + 88;
  v5 = 0;
  LOBYTE(a2) = 19;
  v6 = HMCreateHandleForObject(v4, a2);
  v7 = v6;
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, __int64))(*(_QWORD *)this + 80LL))(
           this,
           v3,
           v6) )
    {
      *(_QWORD *)(v7 + 56) = CBaseInput::_spDevList;
      CBaseInput::_spDevList = (struct DEVICEINFO *)v7;
      RawInputManagerDeviceObjectReference(v3);
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_InputVirtualization__private_reporting,
        16291462LL,
        0LL,
        0LL,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
        1,
        3);
      if ( isRootPartition() && CIVChannel::ContainerConnected(*((_DWORD *)this + 318)) )
      {
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*((_QWORD *)v3 + 53) + 40LL) )
        {
          v11 = 0;
          IVRootDeliver::PnP::SendRootPnpCreated(v3, (struct RawInputManagerDeviceObject *)&v11, v10);
        }
        else
        {
          *((_DWORD *)v3 + 68) |= 0x80000000;
        }
      }
      return 1;
    }
    else
    {
      LockRefactorStagingAssertOwned(v8);
      HMMarkObjectDestroyWorker((void *)v7);
      HMRemoveHandleForObject();
    }
  }
  return v5;
}
