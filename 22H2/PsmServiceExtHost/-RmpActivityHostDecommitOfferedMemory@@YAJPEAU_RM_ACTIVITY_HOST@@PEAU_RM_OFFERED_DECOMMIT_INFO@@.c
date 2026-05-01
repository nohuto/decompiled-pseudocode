/*
 * XREFs of ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x18006B7F8
 * Callers:
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180029EA0 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x1800725E4 (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 *     ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180073A90 (-RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E250 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021CD8 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x18002A360 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18006B060 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 */

__int64 __fastcall RmpActivityHostDecommitOfferedMemory(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_OFFERED_DECOMMIT_INFO *a2)
{
  unsigned __int64 v2; // rsi
  int v3; // ebx
  int (*v6)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *); // r9
  unsigned int v7; // edx
  int v8; // r15d
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // al
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+38h] BYREF
  int v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0LL;
  v3 = *((_DWORD *)a2 + 4) & 2;
  v16 = 0LL;
  if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
  {
    if ( v3 )
      RmpAcquireGlobalLock();
    RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v16);
    if ( v3 )
      RmpReleaseGlobalLock();
    v2 = v16;
    v6 = RmpActivityHostDecommitOfferedMemoryCommitSaveCallback;
    v7 = 8193;
  }
  else
  {
    v7 = 0x2000;
    v6 = (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))RmpActivityHostDecommitOfferedMemoryDxgCallback;
  }
  v8 = RmHamHostActOnProcesses(a1, v7, 0, v6, a2);
  if ( v8 >= 0 )
  {
    if ( (*((_BYTE *)a2 + 16) & 1) != 0 )
    {
      if ( v3 )
        RmpAcquireGlobalLock();
      v8 = RmpActivityHostQueryCommit(a1, 0LL, 0LL, &v16);
      if ( v3 )
        RmpReleaseGlobalLock();
      if ( v8 >= 0 && v2 >= v16 )
      {
        v9 = (*((_BYTE *)a2 + 16) & 4) == 0;
        *((_QWORD *)a2 + 1) = v2 - v16;
        if ( !v9 )
          *((_DWORD *)a1 + 310) |= 8u;
      }
    }
    if ( v3 )
      RmpAcquireGlobalLock();
    *((_QWORD *)a1 + 151) += *((_QWORD *)a2 + 1);
    if ( v3 )
      RmpReleaseGlobalLock();
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 25LL) )
  {
    v13 = (*((_DWORD *)a2 + 4) & 2) != 0;
    v17 = v8;
    LOBYTE(v16) = v13;
    v18 = *((_QWORD *)a2 + 1);
    v15 = *((_QWORD *)a1 + 4);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v10,
      byte_18009BE78,
      v11,
      v12,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v18,
      (__int64)&v16);
  }
  return (unsigned int)v8;
}
