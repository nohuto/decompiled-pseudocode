/*
 * XREFs of ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C004E1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1C002DC3C (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C004E6D0 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     HMRemoveHandleForObject @ 0x1C0050440 (HMRemoveHandleForObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01F51D4 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x1C01F6520 (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  struct DEVICEINFO *v2; // rax
  struct DEVICEINFO **v3; // r8
  IVRootDeliver::PnP *v5; // rbx
  const struct tagDomLock *v7; // rcx
  const struct CONTAINER_ID *v9; // r9
  bool v10; // al
  void *v11; // rdx
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

  v2 = CBaseInput::_spDevList;
  v3 = &CBaseInput::_spDevList;
  v5 = (struct RawInputManagerDeviceObject *)((char *)a2 + 88);
  while ( v2 )
  {
    if ( v2 == v5 )
    {
      *v3 = (struct DEVICEINFO *)*((_QWORD *)a2 + 18);
      *((_QWORD *)a2 + 18) = 0LL;
      ObfDereferenceObject(a2);
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
        v12 = 0;
        IVRootDeliver::PnP::SendRootPnp(v5, (struct DEVICEINFO *)4, (unsigned int)&v12, v9);
      }
      if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, IVRootDeliver::PnP *))(*(_QWORD *)this + 104LL))(
             this,
             a2,
             v5) )
      {
        LockRefactorStagingAssertOwned(v7);
        if ( (unsigned int)HMMarkObjectDestroyWorker(v5) )
          HMRemoveHandleForObject();
      }
      return 0LL;
    }
    v3 = (struct DEVICEINFO **)((char *)v2 + 56);
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = &WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids;
    LOBYTE(v11) = v10;
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v11,
      (_DWORD)v3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      3,
      21,
      (__int64)&WPP_b99049c1e8dc304ebad6fe568d7717f2_Traceguids,
      (char)a2);
  }
  return 0LL;
}
