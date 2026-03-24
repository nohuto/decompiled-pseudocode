/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C0119450
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003700 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0005848 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C001891C (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_1679598905__private_IsEnabledDeviceUsage @ 0x1C002615C (Feature_1679598905__private_IsEnabledDeviceUsage.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0115D70 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C015C100 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v15; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v17; // rax
  int CurrentProcessSessionId; // ebp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rbx
  void *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v34; // rdx
  struct DXGTHREAD *ThreadProperty; // rbx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // r9d
  unsigned int v42; // eax
  ULONG_PTR Count; // rsi
  unsigned int v44; // ebp
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdi
  struct _EX_RUNDOWN_REF *v50; // rdi
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned int v59; // edi
  struct DXGPROCESS *v60; // rbp
  int IsEnabledDeviceUsage; // eax
  __int64 v62; // rdi
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  char v67[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v68; // [rsp+28h] [rbp-80h]
  int v69; // [rsp+30h] [rbp-78h]
  char v70[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v70);
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v8 + 24) = 168LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v15 = *((_QWORD *)Current + 1)) == 0 )
  {
    v15 = v13;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v17 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v17);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11);
  v23 = PsGetCurrentProcess(v20, v19, v21, v22);
  v24 = PsGetProcessDxgProcess(v23);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && v24
    && (v25 = *(void **)(v24 + 88)) != 0LL
    && v25 != &gDxgkWin32kEngInterface
    && (!(unsigned __int8)KeIsAttachedProcess()
     || (v30 = PsGetCurrentProcess(v27, v26, v28, v29),
         ProcessSessionId = PsGetProcessSessionIdEx(v30),
         CurrentThreadProcess = PsGetCurrentThreadProcess(),
         ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    ThreadProperty = *(struct DXGTHREAD **)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( ThreadProperty || (ThreadProperty = DxgkThreadObjectCreateDxgThread()) != 0LL )
      ObfDereferenceObject(ThreadProperty);
    else
      ThreadProperty = 0LL;
  }
  v68 = v15 + 208;
  if ( v15 != -208 && *(struct _KTHREAD **)(v15 + 216) == KeGetCurrentThread() )
  {
    v36 = WdLogNewEntry5_WdAssertion(v15 + 208, v34);
    *(_QWORD *)(v36 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v36);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v68, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v41 = *(_DWORD *)(v68 + 24);
      if ( v41 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventBlockThread, v39, v41);
    }
    ExAcquirePushLockSharedEx(v68, 0LL);
  }
  v42 = a1[1];
  Count = 0LL;
  v69 = 1;
  if ( v42 == 1 )
  {
    v44 = *a1;
    v46 = (unsigned int)Feature_1679598905__private_IsEnabledDeviceUsage() != 0;
    v48 = (v44 >> 6) & 0xFFFFFF;
    if ( (_DWORD)v46 )
    {
      if ( (unsigned int)v48 < *(_DWORD *)(v15 + 256) )
      {
        v49 = *(_QWORD *)(v15 + 240);
        v45 = (unsigned int)v48;
        v46 = *(unsigned int *)(v49 + 16 * v48 + 8);
        if ( ((v44 >> 25) & 0x60) == (*(_BYTE *)(v49 + 16 * v48 + 8) & 0x60)
          && ((v46 & 0x2000) == 0 || (v46 & 0x4000) != 0)
          && (v46 & 0x1F) != 0 )
        {
          v45 = 2LL * (unsigned int)v48;
          v46 &= 0x1Fu;
          if ( (_BYTE)v46 == 5 )
          {
            v50 = *(struct _EX_RUNDOWN_REF **)(v49 + 16LL * (unsigned int)v48);
            goto LABEL_48;
          }
        }
      }
LABEL_60:
      v57 = WdLogNewEntry5_WdWarning(v46, v45, v47);
      v58 = *a1;
LABEL_85:
      *(_QWORD *)(v57 + 24) = v58;
      WdLogEvent5_WdWarning(v57);
      goto LABEL_86;
    }
    if ( (unsigned int)v48 >= *(_DWORD *)(v15 + 256) )
      goto LABEL_60;
    v47 = *(_QWORD *)(v15 + 240);
    v45 = (unsigned int)v48;
    v46 = *(unsigned int *)(v47 + 16 * v48 + 8);
    if ( ((v44 >> 25) & 0x60) != (*(_BYTE *)(v47 + 16 * v48 + 8) & 0x60) || (v46 & 0x2000) != 0 || (v46 & 0x1F) == 0 )
      goto LABEL_60;
    v45 = 2LL * (unsigned int)v48;
    v46 &= 0x1Fu;
    if ( (_BYTE)v46 == 5 )
    {
      v50 = *(struct _EX_RUNDOWN_REF **)(v47 + 16LL * (unsigned int)v48);
LABEL_48:
      if ( v50 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v51 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50[1].Count + 16) + 16LL) + 216LL) + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v51 + 28) >= 0x2003u )
          {
            v52 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v51, v45);
            v52[3] = 275LL;
            v52[4] = 20LL;
            v52[5] = *(_QWORD *)(*(_QWORD *)(v50[1].Count + 16) + 16LL);
            v52[6] = 0LL;
            v52[7] = 0LL;
            WdLogEvent5_WdCriticalError(v52);
          }
        }
        if ( !ExAcquireRundownProtection(v50 + 11) )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v54, v53);
          v55[3] = 275LL;
          v55[4] = 38LL;
          v55[5] = v50;
          v55[6] = 0LL;
          v55[7] = 0LL;
          WdLogEvent5_WdCriticalError(v55);
        }
        if ( ThreadProperty )
          ++*((_DWORD *)ThreadProperty + 8);
        *a2 = v50;
        if ( (a1[2] & 1) != 0 )
          Count = v50[4].Count;
        else
          Count = *(_QWORD *)(v50[6].Count + 16);
        goto LABEL_86;
      }
      goto LABEL_60;
    }
LABEL_59:
    v56 = WdLogNewEntry5_WdError(v46, v45);
    *(_QWORD *)(v56 + 24) = 316LL;
    WdLogEvent5_WdError(v56);
    goto LABEL_60;
  }
  if ( v42 != 2 )
  {
    v57 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    v58 = (int)a1[1];
    goto LABEL_85;
  }
  v59 = *a1;
  v60 = DXGPROCESS::GetCurrent(v38, v37, v39, v40);
  IsEnabledDeviceUsage = Feature_1679598905__private_IsEnabledDeviceUsage();
  v46 = IsEnabledDeviceUsage != 0;
  v45 = (v59 >> 6) & 0xFFFFFF;
  if ( IsEnabledDeviceUsage )
  {
    if ( (unsigned int)v45 >= *((_DWORD *)v60 + 64) )
      goto LABEL_60;
    v47 = (unsigned int)v45;
    v45 = *((_QWORD *)v60 + 30);
    v46 = *(unsigned int *)(v45 + 16LL * (unsigned int)v47 + 8);
    if ( ((v59 >> 25) & 0x60) != (*(_BYTE *)(v45 + 16LL * (unsigned int)v47 + 8) & 0x60)
      || (v46 & 0x2000) != 0 && (v46 & 0x4000) == 0 )
    {
      goto LABEL_60;
    }
    if ( (v46 & 0x1F) == 0 )
      goto LABEL_60;
    v47 *= 2LL;
    v46 &= 0x1Fu;
    if ( (_BYTE)v46 != 4 )
      goto LABEL_60;
    v62 = *(_QWORD *)(v45 + 8 * v47);
  }
  else
  {
    if ( (unsigned int)v45 >= *((_DWORD *)v60 + 64) )
      goto LABEL_60;
    v47 = (unsigned int)v45;
    v45 = *((_QWORD *)v60 + 30);
    v46 = *(unsigned int *)(v45 + 16LL * (unsigned int)v47 + 8);
    if ( ((v59 >> 25) & 0x60) != (*(_BYTE *)(v45 + 16LL * (unsigned int)v47 + 8) & 0x60)
      || (v46 & 0x2000) != 0
      || (v46 & 0x1F) == 0 )
    {
      goto LABEL_60;
    }
    v47 *= 2LL;
    v46 &= 0x1Fu;
    if ( (_BYTE)v46 != 4 )
      goto LABEL_59;
    v62 = *(_QWORD *)(v45 + 8 * v47);
  }
  if ( !v62 )
    goto LABEL_60;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 8) + 16LL) + 16LL) + 216LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v63 + 28) >= 0x2003u )
    {
      v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v63, v45);
      v64[3] = 275LL;
      v64[4] = 20LL;
      v64[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 8) + 16LL) + 16LL);
      v64[6] = 0LL;
      v64[7] = 0LL;
      WdLogEvent5_WdCriticalError(v64);
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v62);
  if ( ThreadProperty )
    ++*((_DWORD *)ThreadProperty + 8);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v67);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v62 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v62;
  Count = *(_QWORD *)(v62 + 56);
  if ( (*(_DWORD *)(v62 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_86:
  if ( v69 == 1 )
  {
    v69 = 0;
    ExReleasePushLockSharedEx(v68, 0LL);
  }
  else
  {
    if ( v69 != 2 )
      goto LABEL_91;
    v65 = v68;
    v69 = 0;
    *(_QWORD *)(v68 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v65, 0LL);
  }
  KeLeaveCriticalRegion();
LABEL_91:
  if ( v70[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
