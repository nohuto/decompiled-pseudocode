/*
 * XREFs of ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EE9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 *     RIMShouldVirtualDeviceBeClosed @ 0x1C01A102C (RIMShouldVirtualDeviceBeClosed.c)
 *     RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01AB718 (RIMVirtQueueRootPnpEndSyncAsyncWorkItem.c)
 *     IsRimObjectUnregistered @ 0x1C01F0D9C (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpSyncPacket(__int64 a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 j; // rax
  __int64 v8; // rcx
  __int64 i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      35,
      (__int64)&WPP_4c82548882e434c25d4dd8d26e311b60_Traceguids);
  }
  if ( *v4 != 1 )
  {
    if ( *v4 != 2 || *(_BYTE *)(v3 + 81) )
      return 1LL;
    RIMLockExclusive(v3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(v3) )
    {
      *(_QWORD *)(v3 + 112) = 0LL;
      v5 = v3 + 104;
      goto LABEL_13;
    }
    for ( i = *(_QWORD *)(v3 + 424); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)RIMShouldVirtualDeviceBeClosed(i) )
      {
        if ( (*(_DWORD *)(i + 184) & 0x2000) != 0 )
        {
          RIMIDERemoveInjectionDevice(*(_QWORD *)(i + 32), v10, v11);
        }
        else
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_RIMVirtPnpQuickRelease__private_reporting,
            30688442LL,
            0LL,
            0LL,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_Vail_logged_traits,
            1,
            3);
          v12 = *(_OWORD *)(i + 208);
          RIMVirtQueueRootPnpEndSyncAsyncWorkItem((struct RawInputManagerObject *)v3, (__int64)&v12);
        }
      }
    }
    *(_QWORD *)(v3 + 112) = 0LL;
    v8 = v3 + 104;
    goto LABEL_30;
  }
  if ( !*(_BYTE *)(v3 + 81) )
  {
    RIMLockExclusive(v3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(v3) )
    {
      *(_QWORD *)(v3 + 112) = 0LL;
      v5 = v3 + 104;
LABEL_13:
      ExReleasePushLockExclusiveEx(v5, 0LL);
      KeLeaveCriticalRegion();
      return 2LL;
    }
    for ( j = *(_QWORD *)(v3 + 424); j; j = *(_QWORD *)(j + 40) )
      *(_DWORD *)(j + 188) &= ~1u;
    *(_QWORD *)(v3 + 112) = 0LL;
    v8 = v3 + 104;
LABEL_30:
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  return 1LL;
}
