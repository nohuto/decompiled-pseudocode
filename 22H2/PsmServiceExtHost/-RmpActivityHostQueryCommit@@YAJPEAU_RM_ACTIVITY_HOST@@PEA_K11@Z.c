/*
 * XREFs of ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021CD8
 * Callers:
 *     ?HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180002F40 (-HampHostCanDonate@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007920 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001F7C0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     RmpTracingControlCallback @ 0x180044190 (RmpTracingControlCallback.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006B7F8 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ?RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@@@Z @ 0x18006BC10 (-RmpActivityHostPopulateMetrics@@YAXPEAU_RM_POLICY_WORK_BUFFER@@GW4Enum@Priority@ExecutionModel@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006C084 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x180021DF8 (-QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180021ECC (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x18006B17C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgW.c)
 */

__int64 __fastcall RmpActivityHostQueryCommit(
        struct _RM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4)
{
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdx
  bool v12; // sf
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int64 v18[13]; // [rsp+68h] [rbp-11h] BYREF
  unsigned __int64 v19; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 *v20; // [rsp+E8h] [rbp+6Fh]

  v20 = a2;
  result = ModernResourceEnforcer::QueryCurrentMemoryUsage(
             *(ModernResourceEnforcer **)(*((_QWORD *)a1 + 6) + 40LL),
             (const unsigned __int16 *)a1 + 44,
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 552),
             *((_DWORD *)a1 + 155),
             *((_DWORD *)a1 + 156),
             *((_QWORD *)a1 + 4),
             &v19,
             v18);
  if ( (int)result >= 0 )
  {
    v8 = RmpActivityHostQueryCommitDebt(a1, &v17);
    v10 = v19;
    v11 = v17;
    v12 = v8 < 0;
    v13 = v19;
    if ( v12 )
      v11 = 0LL;
    v17 = v11;
    if ( v11 < v19 )
      v13 = v11;
    v14 = v19 - v13;
    if ( v19 && v14 <= 1 )
      v14 = 1LL;
    v15 = v18[0];
    v16 = v14 + v18[0];
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      LODWORD(v19) = *((_DWORD *)a1 + 156);
      v18[4] = (unsigned __int64)a1 + 88;
      v18[5] = *((_QWORD *)a1 + 4);
      v18[0] = v11;
      v18[1] = v15;
      v18[2] = v10;
      v18[3] = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v9,
        &unk_18009C441);
    }
    if ( v20 )
      *v20 = v14;
    if ( a3 )
      *a3 = v10 + v15;
    if ( a4 )
      *a4 = v16;
    return 0LL;
  }
  return result;
}
