/*
 * XREFs of ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10
 * Callers:
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@Z @ 0x180004204 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KK@.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x1800180F0 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A290 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18001B1D0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026BCC (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18002A6D4 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002A980 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x18003B7B4 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006C084 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x18007BAC8 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007C170 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8F8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007E84C (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E954 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18008004C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 * Callees:
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180002794 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004C98 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180005DC8 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006008 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180006054 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006460 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800065A0 (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x180008E3C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E0D0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E158 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002234C (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@544@Z @ 0x18002ABAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U3@U-$_tlgWrapperByV.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x18003BD94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v6; // r13d
  int v7; // r15d
  unsigned __int64 v8; // rbx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // r12
  unsigned int v15; // edx
  struct _HAM_ACTIVITY *FirstActivity; // r14
  unsigned int IsSuspendWaiter; // eax
  unsigned int v18; // ebx
  int v19; // r14d
  unsigned int v20; // edx
  int v21; // r12d
  unsigned int v22; // ebx
  __int64 v23; // rcx
  __int64 v25; // rcx
  unsigned __int8 v26; // bl
  __int64 v27; // rax
  unsigned __int8 v28; // [rsp+60h] [rbp-59h] BYREF
  char v29[3]; // [rsp+61h] [rbp-58h] BYREF
  int v30; // [rsp+64h] [rbp-55h]
  int v31; // [rsp+68h] [rbp-51h]
  __int64 v32; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 v33; // [rsp+78h] [rbp-41h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v34; // [rsp+80h] [rbp-39h]
  __int64 v35; // [rsp+88h] [rbp-31h]
  char *v36; // [rsp+90h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+98h] [rbp-21h] BYREF
  __int64 *v38; // [rsp+B8h] [rbp-1h]
  int v39; // [rsp+C0h] [rbp+7h]
  int v40; // [rsp+C4h] [rbp+Bh]

  v6 = a5;
  v7 = 0;
  v8 = a2;
  v9 = a1;
  v32 = a4;
  v30 = a3;
  v31 = a2;
  v34 = a1;
  if ( !a5 )
  {
    v7 = 1;
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  v10 = *((_QWORD *)v9 + 81);
  v11 = *((_QWORD *)v9 + 86);
  v12 = v10 >> 16;
  v33 = v11;
  v13 = BYTE2(v10) & 3;
  if ( v13 >= v8 )
  {
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v32 = *((_QWORD *)v9 - 4);
      v29[0] = BYTE2(v10) & 3;
      v28 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v13,
        (unsigned int)&unk_1800A121C,
        v10,
        a4,
        (__int64)&v32,
        (__int64)&v28,
        (__int64)v29);
    }
    goto LABEL_32;
  }
  if ( (v10 & 0x800000000LL) != 0 )
  {
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v27 = *((_QWORD *)v9 - 4);
      v40 = 0;
      v32 = v27;
      v39 = 8;
      v38 = &v32;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0A63, 0, 0, 3u, &v37);
    }
    goto LABEL_32;
  }
  v14 = 80;
  FirstActivity = HampHostGetFirstActivity(v9);
  if ( FirstActivity )
  {
    do
    {
      v28 = v14;
      if ( HampActCanBeInvalidated(FirstActivity) && *((_BYTE *)FirstActivity + 548) == 3 )
      {
        v26 = *((_BYTE *)FirstActivity + 427);
        HampActRequestStopForTerminate(v25, v31);
        v14 = v26;
        if ( v28 < v26 )
          v14 = v28;
      }
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    while ( FirstActivity );
    v9 = v34;
    v11 = v33;
    v6 = a5;
  }
  IsSuspendWaiter = HampHostIsSuspendWaiter(v9, v15);
  *((_QWORD *)v9 + 81) &= 0xFFFFFFFFFFFCFFFFuLL;
  v18 = IsSuspendWaiter;
  LOWORD(IsSuspendWaiter) = v30;
  v19 = v31;
  *((_QWORD *)v9 + 81) |= (unsigned __int64)(v31 & 3) << 16;
  *((_WORD *)v9 + 324) = IsSuspendWaiter;
  *((_QWORD *)v9 + 81) &= 0xFFFFFFFFFC03FFFFuLL;
  *((_QWORD *)v9 + 81) |= (unsigned __int64)v14 << 18;
  RtlQueryUnbiasedInterruptTime(&v33);
  *((_DWORD *)v9 + 209) = v33 / 0x2710;
  *((_DWORD *)v9 + 210) = a6;
  HampHostCheckUpdateSuspendWaitState(v9, v18);
  if ( v19 == 2 )
  {
    *((_QWORD *)v9 + 81) |= 0x10000000000000uLL;
    if ( *((_DWORD *)v9 + 160) != GetCurrentThreadId() )
      HampHostCheckQueueStateWorker(v9, 0);
  }
  else
  {
    HampHostCheckQueueTerminateWorker(v9, 0);
  }
  if ( v32 )
    v21 = *(_DWORD *)(v32 + 140);
  else
    v21 = 0;
  if ( v11 )
  {
    if ( v6 == 2 )
    {
      ++*(_QWORD *)(v11 + 112);
      v22 = 0;
      goto LABEL_14;
    }
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v11);
    if ( v6 == 3 )
    {
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v11);
      v22 = 0;
    }
    else
    {
      v22 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v11, (unsigned __int64 *)v9 + 77);
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v11);
  }
  else
  {
    v22 = 0;
  }
  if ( v6 != 2 )
    HampHostCheckQueueStateWorker(v9, 0);
LABEL_14:
  if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 0x400000000008LL) )
  {
    v34 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v9 + 100);
    v31 = v30;
    LODWORD(v32) = *((_DWORD *)v9 + 140);
    v35 = *((_QWORD *)v9 - 4);
    v36 = (char *)v9 + 24;
    v33 = 0x1000000LL;
    v28 = v19;
    v30 = v21;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v23,
      &unk_1800A13F5);
  }
  if ( v7 )
  {
    HampHostReleaseLockExclusiveEx(v9, v20);
    v7 = 0;
    if ( v22 )
    {
      HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v11);
LABEL_32:
      v22 = 0;
      if ( v7 )
        HampHostReleaseLockExclusiveEx(v9, v12);
    }
  }
  return v22;
}
