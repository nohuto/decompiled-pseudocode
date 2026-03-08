/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C018D290
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C00074C0 (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C01A5D74 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1C033F668 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rcx
  ULONG_PTR Count; // rbp
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  struct DXGPROCESS *v9; // r15
  struct DXGTHREAD *DxgThread; // rsi
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // r8d
  struct _EX_RUNDOWN_REF *v17; // rdi
  __int64 v19; // rdx
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  int v23; // r9d
  __int64 v24; // r9
  struct DXGPROCESS *v25; // rax
  unsigned int v26; // ecx
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rdi
  __int64 v30; // r9
  struct DXGTHREAD *v31; // [rsp+50h] [rbp-78h] BYREF
  char v32[8]; // [rsp+58h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v32);
  Count = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 168LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"nullptr != pReleaseHandle", 168LL, 0LL, 0LL, 0LL, 0LL);
  }
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v9 )
      goto LABEL_6;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v9 = v8;
    goto LABEL_6;
  }
  v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v9 )
    goto LABEL_5;
LABEL_6:
  v31 = 0LL;
  if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, &v31) < 0 )
  {
    DxgThread = 0LL;
  }
  else
  {
    DxgThread = v31;
    if ( !v31 )
    {
      DxgThread = DxgkThreadObjectCreateDxgThread(1);
      v31 = DxgThread;
    }
  }
  if ( v9 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v9 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 1453LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1453LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v9 + 248, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v23 = *((_DWORD *)v9 + 68);
      if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (const EVENT_DESCRIPTOR *)"g", v12, v23);
    }
    ExAcquirePushLockSharedEx((char *)v9 + 248, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)v9 + 66);
  v13 = a1[1];
  if ( v13 == 1 )
  {
    v14 = (*a1 >> 6) & 0xFFFFFF;
    if ( v14 >= *((_DWORD *)v9 + 74) )
      goto LABEL_32;
    v15 = *((_QWORD *)v9 + 35) + 16LL * v14;
    if ( ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v15 + 8) & 0x60) )
      goto LABEL_32;
    if ( (*(_DWORD *)(v15 + 8) & 0x2000) != 0 )
      goto LABEL_32;
    v16 = *(_DWORD *)(v15 + 8) & 0x1F;
    if ( !v16 )
      goto LABEL_32;
    if ( v16 == 5 )
    {
      v17 = *(struct _EX_RUNDOWN_REF **)v15;
      if ( v17 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(v17[1].Count + 16) + 16LL);
          if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
            WdLogSingleEntry5(0LL, 275LL, 20LL, v24, 0LL, 0LL);
        }
        if ( !ExAcquireRundownProtection(v17 + 11) )
          WdLogSingleEntry5(0LL, 275LL, 38LL, v17, 0LL, 0LL);
        if ( DxgThread )
          ++*((_DWORD *)DxgThread + 12);
        *a2 = v17;
        if ( (a1[2] & 1) != 0 )
          Count = v17[4].Count;
        else
          Count = *(_QWORD *)(v17[6].Count + 16);
        goto LABEL_27;
      }
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  if ( v13 != 2 )
  {
    v19 = (int)a1[1];
    goto LABEL_62;
  }
  v25 = DXGPROCESS::GetCurrent();
  v26 = (*a1 >> 6) & 0xFFFFFF;
  if ( v26 >= *((_DWORD *)v25 + 74)
    || (v27 = *((_QWORD *)v25 + 35) + 16LL * v26, ((*a1 >> 25) & 0x60) != (*(_BYTE *)(v27 + 8) & 0x60))
    || (*(_DWORD *)(v27 + 8) & 0x2000) != 0
    || (v28 = *(_DWORD *)(v27 + 8) & 0x1F) == 0 )
  {
LABEL_32:
    v19 = *a1;
LABEL_62:
    WdLogSingleEntry1(3LL, v19);
LABEL_27:
    _InterlockedDecrement((volatile signed __int32 *)v9 + 66);
    ExReleasePushLockSharedEx((char *)v9 + 248, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_28;
  }
  if ( v28 != 4 )
  {
LABEL_31:
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_32;
  }
  v29 = *(_QWORD *)v27;
  if ( !v29 )
    goto LABEL_32;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 8) + 16LL) + 16LL);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 216) + 64LL) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry5(0LL, 275LL, 20LL, v30, 0LL, 0LL);
  }
  DxgkReferenceDxgResource((struct DXGRESOURCE *)v29);
  if ( DxgThread )
    ++*((_DWORD *)DxgThread + 12);
  _InterlockedDecrement((volatile signed __int32 *)v9 + 66);
  ExReleasePushLockSharedEx((char *)v9 + 248, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v29 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v29;
  Count = *(_QWORD *)(v29 + 56);
  if ( (*(_DWORD *)(v29 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
LABEL_28:
  if ( v32[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
