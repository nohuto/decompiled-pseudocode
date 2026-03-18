/*
 * XREFs of RIMOnAsyncPnpWorkNotification @ 0x1C0185330
 * Callers:
 *     NtRIMOnAsyncPnpWorkNotification @ 0x1C0180580 (NtRIMOnAsyncPnpWorkNotification.c)
 *     ?OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ @ 0x1C01DC420 (-OnAsyncPnpWorkNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00384DC (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMDeviceClassNotifyAsyncWorkItem @ 0x1C00454B0 (RIMDeviceClassNotifyAsyncWorkItem.c)
 *     ApiSetIsRemoteConnection @ 0x1C0047B78 (ApiSetIsRemoteConnection.c)
 *     ?RimAsyncPnpWorkPickedup@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEAX@Z @ 0x1C017FA18 (-RimAsyncPnpWorkPickedup@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDdS @ 0x1C0186618 (WPP_RECORDER_AND_TRACE_SF_qqDdS.c)
 *     RIMDeviceNotifyAsyncWorkItem @ 0x1C01AA314 (RIMDeviceNotifyAsyncWorkItem.c)
 *     RIMFreeAsyncPnpWorkItem @ 0x1C01AA66C (RIMFreeAsyncPnpWorkItem.c)
 *     RIMVirtDeviceClassNotifyAsyncWorkItem @ 0x1C01AAA30 (RIMVirtDeviceClassNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceNotifyAsyncWorkItem @ 0x1C01AAF0C (RIMVirtDeviceNotifyAsyncWorkItem.c)
 *     RIMVirtDeviceRootPnpEndSyncAsyncWorkItem @ 0x1C01AB2B0 (RIMVirtDeviceRootPnpEndSyncAsyncWorkItem.c)
 */

__int64 __fastcall RIMOnAsyncPnpWorkNotification(char *a1)
{
  int v2; // ebp
  _QWORD *v3; // rdi
  char *v4; // rsi
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  int v23; // [rsp+20h] [rbp-78h]
  int v24; // [rsp+28h] [rbp-70h]
  int v25; // [rsp+30h] [rbp-68h]
  int v26; // [rsp+38h] [rbp-60h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_RIMPnpThreadQuickRelease__private_reporting,
    26503761LL,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_KeyboardInputVirtualization_logged_traits,
    1,
    3);
  Object = 0LL;
  v2 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v2 < 0 )
  {
    DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 356LL, a1, Object, 0LL, 0LL, 0LL, 0LL, 0);
  }
  else
  {
    v3 = Object;
    v4 = (char *)Object + 352;
    RIMLockExclusive((__int64)Object + 352);
    v5 = v3 + 47;
    v6 = (_QWORD *)v3[47];
    if ( (_QWORD *)v6[1] != v3 + 47 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
      __fastfail(3u);
    *v5 = v7;
    *(_QWORD *)(v7 + 8) = v5;
    *((_QWORD *)v4 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    InputTraceLogging::RIM::RimAsyncPnpWorkPickedup((const struct RawInputManagerObject *)v3, v6);
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        4,
        1,
        70,
        (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
        (char)v3);
    }
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = v6[7];
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 304);
      else
        v12 = v6[6];
      LOBYTE(v11) = v10;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qqDdS(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v9,
        v10,
        v23,
        v24,
        v25,
        v26,
        v6[3],
        v6[7],
        *((_DWORD *)v6 + 8),
        *((_DWORD *)v6 + 4),
        v12);
    }
    if ( !(unsigned int)ApiSetIsRemoteConnection() || isChildPartition() )
    {
      RIMLockExclusive((__int64)(v3 + 13));
      if ( *((_BYTE *)v3 + 80) || *((_BYTE *)v3 + 81) )
      {
        LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v16,
            (_DWORD)gRimLog,
            3,
            1,
            72,
            (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
            (char)v3);
        }
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
        v19 = *((_DWORD *)v6 + 4);
        if ( v19 )
        {
          switch ( v19 )
          {
            case 1:
              RIMDeviceNotifyAsyncWorkItem(v6);
              break;
            case 2:
              RIMVirtDeviceClassNotifyAsyncWorkItem(v6);
              break;
            case 3:
              RIMVirtDeviceNotifyAsyncWorkItem(v6);
              break;
            default:
              RIMVirtDeviceRootPnpEndSyncAsyncWorkItem(v6);
              break;
          }
        }
        else
        {
          RIMDeviceClassNotifyAsyncWorkItem((__int64)v6, v17, v18);
        }
      }
      v3[14] = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 13, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          (_DWORD)gRimLog,
          3,
          1,
          73,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      v2 = 0;
    }
    RIMFreeAsyncPnpWorkItem(v6);
    ObfDereferenceObject(v3);
  }
  LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v20,
      v21,
      (_DWORD)gRimLog,
      4,
      1,
      74,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
