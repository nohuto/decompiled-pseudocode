/*
 * XREFs of ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x180075580
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18003DFB0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FFE0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180034D1C (-RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LI.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006B670 (-RmpActivityHostCleanupRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z.c)
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x1800723F8 (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180074958 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800753EC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18007661C (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 *     ?RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@@@Z @ 0x180076DC0 (-RmpMemoryMonitorWaitForEvents@@YAKPEAU_RM_MEMORY_MONITOR_DATA@@KKPEAW4_RM_MEMORY_MONITOR_EVENT@.c)
 */

void __fastcall RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_RESOURCE_USAGE_LIMITS *a2)
{
  struct _RM_PARTITION *v2; // r14
  __int64 v5; // rbx
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r10
  int v16; // r11d
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r10
  __int64 v21; // rcx
  unsigned int v22; // r9d
  int v23; // r10d
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  int v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v31[3]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v32[16]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v33; // [rsp+80h] [rbp-80h]
  _BYTE v34[16]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v35; // [rsp+D0h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(struct _RM_PARTITION **)a1;
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v31[1] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v31;
  v31[0] = (struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *)v31;
  v31[2] = *((struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1 + 4);
  RmpPolicyPrepareToCheckMetrics(v2, (struct _RM_POLICY *)(v5 + 400), a2, 0LL);
  RmpAcquireGlobalLock();
  v6 = *(struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP **)a1;
  v7 = 0LL;
  *((_WORD *)v6 + 94) = 0;
  RmpPolicyPopulateActivityHostMetrics(
    v2,
    *(_DWORD *)(v5 + 516),
    (__int64)v6 + 144,
    3,
    (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpMemoryMonitorActiveLowPriFilterCallback,
    0LL);
  if ( *((_DWORD *)v6 + 45) )
  {
    v10 = (_QWORD *)*((_QWORD *)v6 + 18);
    v11 = *((unsigned int *)v6 + 45);
    do
    {
      v7 += *v10;
      v10 += 8;
      --v11;
    }
    while ( v11 );
    if ( v7 >= *((_QWORD *)a2 + 12) )
    {
      v16 = dword_1800B31E0;
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        v28 = v19;
        v30 = v20;
        v29 = v7;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v17,
          byte_18009E521,
          v18,
          v19,
          (__int64)&v29,
          (__int64)&v30,
          (__int64)&v28);
        v16 = dword_1800B31E0;
      }
      if ( v16 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v34);
      RmpMemoryMonitorGenerateHostListAndRevoke(v2, v8, *((_QWORD *)a2 + 12) - v7, 1LL, 5, v31);
      RmpReleaseGlobalLock();
      RmpMemoryMonitorWaitForEvents(a1, 0xDu, *((_DWORD *)a1 + 18), (enum _RM_MEMORY_MONITOR_EVENT *)&v28);
      if ( dword_1800B31E0 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
      {
        if ( v23 )
        {
          if ( v22 > 4 && tlgKeywordOn(v21, 0x200000000001LL) )
            tlgWriteTransfer_EventWriteTransfer(v27, (unsigned __int8 *)dword_18009E050, 0LL, 0LL, 2u, &v36);
        }
        else
        {
          RmpSystemMemoryMetricsQuery(v2, (struct _RM_SYSTEM_MEMORY_METRICS *)v32);
          if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 0x200000000001LL) )
          {
            v30 = v33;
            v29 = v35;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
              v24,
              byte_18009E284,
              v25,
              v26,
              (__int64)&v28,
              (__int64)&v29,
              (__int64)&v30);
          }
        }
      }
      RmpAcquireGlobalLock();
    }
    else if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v28 = v14;
      v29 = v15;
      v30 = v7;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v12,
        byte_18009E387,
        v13,
        v14,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v28);
    }
  }
  else if ( (unsigned int)dword_1800B31E0 > 5 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
  {
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_18009E455, 0LL, 0LL, 2u, &v36);
  }
  RmpActivityHostCleanupRemediationGroup(v31);
  RmpReleaseGlobalLock();
}
