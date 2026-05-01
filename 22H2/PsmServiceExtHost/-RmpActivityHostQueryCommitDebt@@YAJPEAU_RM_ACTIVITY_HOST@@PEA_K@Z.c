/*
 * XREFs of ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180021ECC
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180015D90 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180021CD8 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180021FF0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180033704 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180064294 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(struct _RM_ACTIVITY_HOST *a1, unsigned __int64 *a2)
{
  struct _RM_ACTIVITY_HOST *v3; // r12
  int ProcessesInfo; // eax
  __int64 v5; // rdi
  int v6; // ebx
  PVOID v7; // r15
  void **v8; // rbx
  unsigned int *v9; // rsi
  __int64 v10; // r12
  HANDLE *v11; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  PVOID P[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  int v19; // [rsp+98h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF

  *a2 = 0LL;
  v17 = 0LL;
  v3 = a1;
  *(_OWORD *)P = 0LL;
  ProcessesInfo = RmHamHostGetProcessesInfo(a1, 0x1000u, 1u, (struct _HAM_PROCESS_SNAPSHOT *)P);
  LODWORD(v5) = v17;
  v6 = ProcessesInfo;
  v7 = P[1];
  if ( ProcessesInfo >= 0 )
  {
    if ( (_DWORD)v17 )
    {
      v8 = (void **)P[0];
      v9 = (unsigned int *)P[1];
      v10 = (unsigned int)v17;
      do
      {
        RmpActivityHostCommitDebtCallback(a1, *v8++, *v9++, a2);
        --v10;
      }
      while ( v10 );
      v7 = P[1];
      v3 = a1;
    }
    v6 = 0;
  }
  if ( (_DWORD)v5 )
  {
    v11 = (HANDLE *)P[0];
    v5 = (unsigned int)v5;
    do
    {
      NtClose(*v11++);
      --v5;
    }
    while ( v5 );
  }
  if ( P[0] )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[0]);
    v7 = P[1];
  }
  if ( v7 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P[1]);
  if ( v6 < 0 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 1LL) )
    {
      v20 = *((_QWORD *)v3 + 4);
      v19 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v13,
        (unsigned int)&unk_18009EFAE,
        v14,
        v15,
        (__int64)&v19,
        (__int64)&v20);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v6;
}
