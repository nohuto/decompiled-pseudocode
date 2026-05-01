/*
 * XREFs of ?RmpMemoryMonitorEmptyPolicyActOnHosts@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_ACTIVITY_HOST_METRICS@@K_KKPEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@PEAE4@Z @ 0x180075CC4
 * Callers:
 *     ?RmpMemoryMonitorEmptyWorkingSets@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1K@Z @ 0x180076378 (-RmpMemoryMonitorEmptyWorkingSets@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x180033C18 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800354C0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ?RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006B598 (-RmpActivityHostAddToRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_REMEDIATI.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006C084 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180071C40 (-RmpPolicyActivityHostIsValidEmptyTarget@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1800748BC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

void __fastcall RmpMemoryMonitorEmptyPolicyActOnHosts(
        struct _RM_MEMORY_MONITOR_DATA *a1,
        struct _RM_ACTIVITY_HOST_METRICS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 *v8; // rsi
  unsigned int v10; // r13d
  __int64 v11; // rax
  __int64 v12; // r14
  char *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rsi
  int v19; // eax
  int v20; // r8d
  int v21; // r11d
  __int64 v22; // rdx
  int v23; // eax
  int v24; // r8d
  char v25; // r8
  __int64 v26; // rdx
  unsigned int v27; // r11d
  char v28; // [rsp+40h] [rbp-99h]
  char v29; // [rsp+41h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-95h]
  __int64 v31; // [rsp+48h] [rbp-91h] BYREF
  __int64 v32; // [rsp+50h] [rbp-89h] BYREF
  struct _RM_ACTIVITY_HOST_REMEDIATION_GROUP *v33; // [rsp+58h] [rbp-81h]
  __int64 v34; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int8 *v35; // [rsp+68h] [rbp-71h]
  unsigned __int8 *v36; // [rsp+70h] [rbp-69h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+80h] [rbp-59h] BYREF
  __int64 *v38; // [rsp+A0h] [rbp-39h]
  __int64 v39; // [rsp+A8h] [rbp-31h]
  __int64 *v40; // [rsp+B0h] [rbp-29h]
  __int64 v41; // [rsp+B8h] [rbp-21h]
  char *v42; // [rsp+C0h] [rbp-19h]
  __int64 v43; // [rsp+C8h] [rbp-11h]

  v8 = a8;
  v10 = 0;
  v33 = a6;
  v11 = *(_QWORD *)a1;
  v30 = a3;
  v35 = a7;
  v36 = a8;
  v12 = *(_QWORD *)(v11 + 24) + 400LL;
  *a7 = 0;
  *a8 = 0;
  v28 = 0;
  if ( a3 )
  {
    v13 = (char *)a2 + 24;
    do
    {
      v14 = *((_QWORD *)v13 + 3);
      if ( *((__int16 *)v13 + 18) >= 0 )
      {
        if ( !RmpPolicyActivityHostIsValidEmptyTarget(*((struct _RM_ACTIVITY_HOST **)v13 + 3)) )
          return;
        if ( (a5 & 8) != 0 )
        {
          RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
          if ( (a5 & 4) == 0 )
            *v8 = 1;
          v19 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 48) + 400LL, v14, 1);
          v22 = (unsigned int)(v20 + 23);
          if ( (v19 & *(_DWORD *)(v14 + 1244)) == v19 )
            v22 = (unsigned int)(v20 + 31);
        }
        else
        {
          v23 = RmpPolicyComputeDesiredEmptyState(*(_QWORD *)(v14 + 48) + 400LL, v14, 1);
          if ( (v23 & *(_DWORD *)(v14 + 1244)) == v23 )
          {
            if ( v28 )
              return;
            v21 = RmpPolicyComputeDesiredEmptyState(v12, v14, 2);
            if ( (a5 & 4) == 0 )
              *v8 = 1;
            v22 = 32LL;
          }
          else
          {
            v21 = RmpPolicyComputeDesiredEmptyState(v12, v14, v24);
            v28 = v25;
            v22 = 24LL;
          }
        }
        *(_DWORD *)(v14 + 1468) |= v21;
        v18 = &v13[v22 - 24];
        if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        {
          v32 = *(_QWORD *)v18;
          v31 = *(_QWORD *)(v14 + 32);
          v42 = &v29;
          v40 = &v32;
          v38 = &v31;
          v43 = v26;
          v29 = v26 & (v27 >> 5);
          v41 = 8LL;
          v39 = 8LL;
          tlgWriteTransfer_EventWriteTransfer(
            (__int64)&dword_1800B31E0,
            (unsigned __int8 *)dword_18009E143,
            0LL,
            0LL,
            5u,
            &v37);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v33);
        RmpActivityHostCheckQueueWork(*((struct _RM_ACTIVITY_HOST **)v13 + 3));
      }
      else
      {
        if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
        {
          v34 = *((_QWORD *)v13 - 3);
          v31 = *(_QWORD *)v13;
          v32 = *(_QWORD *)(v14 + 32);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v15,
            byte_18009DDE3,
            v16,
            v17,
            (__int64)&v32,
            (__int64)&v31,
            (__int64)&v34);
        }
        RmpActivityHostAddToRemediationGroup((struct _RM_ACTIVITY_HOST *)v14, v33);
        RmpActivityHostRevokeResourceSets(v14, 3, 4u, 0LL);
        v18 = v13;
      }
      *v35 = 1;
      if ( (a5 & 2) != 0 )
        break;
      if ( *(_QWORD *)v18 > a4 )
        break;
      a4 -= *(_QWORD *)v18;
      ++v10;
      v8 = v36;
      v13 += 64;
    }
    while ( v10 < v30 );
  }
}
