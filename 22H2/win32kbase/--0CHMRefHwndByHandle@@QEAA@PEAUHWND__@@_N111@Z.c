/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00061C0
 * Callers:
 *     <none>
 * Callees:
 *     IsGetDesktopViewSupported @ 0x1C00065F8 (IsGetDesktopViewSupported.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0006624 (WPP_RECORDER_SF_qqq.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0007EF4 (EtwTraceUIPIHandleValidationError.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0031520 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     HMIsHandleEntrySecureWorker @ 0x1C0114070 (HMIsHandleEntrySecureWorker.c)
 */

CHMRefHwndByHandle *__fastcall CHMRefHwndByHandle::CHMRefHwndByHandle(
        CHMRefHwndByHandle *this,
        HWND a2,
        char a3,
        char a4,
        bool a5,
        bool a6)
{
  HWND v8; // r14
  __int64 v10; // rdx
  char *v11; // rdi
  char *v12; // rsi
  __int64 v13; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r8d
  int v25; // r9d
  int v26; // r10d
  struct _KTHREAD *v27; // r15
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rax
  int v32; // edx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  __int64 v36; // rax
  int v37; // edi
  __int64 v38; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int128 v40; // [rsp+40h] [rbp-48h]
  __int64 v41; // [rsp+50h] [rbp-38h]

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v8 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      20,
      10,
      (__int64)&WPP_c65d177db17e30e449c827ae3d526d95_Traceguids);
  }
  *(_QWORD *)this = 0LL;
  LODWORD(v10) = (unsigned __int16)v8;
  if ( (unsigned __int64)(unsigned __int16)v8 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_18;
  v11 = (char *)qword_1C024FA38 + (unsigned int)(unsigned __int16)v8 * dword_1C024FA40;
  v12 = (char *)gpKernelHandleTable + 24 * ((__int64)((unsigned int)(unsigned __int16)v8 * dword_1C024FA40) >> 5);
  if ( WORD1(v8) != *((_WORD *)v11 + 13)
    && WORD1(v8) != 0xFFFF
    && (WORD1(v8) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    goto LABEL_18;
  }
  if ( v11[24] != 1 || (v11[25] & 1) != 0 )
    goto LABEL_18;
  v13 = *(_QWORD *)v12;
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v12 + 8LL));
  *(_QWORD *)this = v13;
  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v17, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
  }
  v19 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v20 = *(_QWORD *)(v19 + 424);
  v41 = *(_QWORD *)(v20 + 312);
  v40 = *(_OWORD *)(v20 + 296);
  if ( a3 )
  {
    if ( v19 != v15
      && *(_QWORD *)(*(_QWORD *)this + 24LL) != *(_QWORD *)(v15 + 456)
      && (*(_DWORD *)(v15 + 488) & 4) == 0 )
    {
      if ( (int)IsGetDesktopViewSupported() < 0
        || (v10 = *(_QWORD *)(*(_QWORD *)this + 24LL), !qword_1C0255D68)
        || !qword_1C0255D68(*(_QWORD *)(v15 + 424), v10) )
      {
LABEL_17:
        *((_QWORD *)this + 1) = *(_QWORD *)this;
        *(_QWORD *)this = 0LL;
        goto LABEL_18;
      }
    }
  }
  if ( a4 && *(_DWORD *)(*(_QWORD *)(v19 + 424) + 888LL) != 1 )
    a4 = 0;
  if ( !a6
    || (v22 = *(_QWORD *)(v19 + 424), v23 = *(_QWORD *)(v15 + 424), !UIPrivelegeIsolation::fEnforce)
    || (LODWORD(v10) = *(_DWORD *)(v23 + 880), v24 = *(_DWORD *)(v22 + 880), (unsigned int)v10 > v24)
    || (_DWORD)v10 == v24
    && ((v25 = *(_DWORD *)(v23 + 884), v26 = *(_DWORD *)(v22 + 884), v25 == v26) || v25 == -1 || v26 == -1)
    || a4
    && (_DWORD)v10 == v24
    && (unsigned __int8)SeIsParentOfChildAppContainer(
                          (unsigned int)gSessionId,
                          *(unsigned int *)(v23 + 884),
                          *(unsigned int *)(v22 + 884))
    || (v10 = *(_QWORD *)(v19 + 424), *(PVOID *)v10 == gpepCSRSS) )
  {
    if ( a5 )
    {
      v27 = KeGetCurrentThread();
      v28 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess()
        || (v36 = PsGetCurrentProcess(v30, v29),
            v37 = PsGetProcessSessionIdEx(v36),
            v38 = PsGetCurrentThreadProcess(),
            v37 == (unsigned int)PsGetProcessSessionIdEx(v38)) )
      {
        v31 = (__int64 *)PsGetThreadWin32Thread(v27);
        if ( v31 )
          v28 = *v31;
      }
      v10 = *(_QWORD *)this;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 456) + 8LL) + 24LL) != *(_QWORD *)this
        && (!UIPrivelegeIsolation::fEnforce || (*(_DWORD *)(*(_QWORD *)(v10 + 16) + 488LL) & 0xC) != 0) )
      {
        if ( *(_DWORD *)(PsGetCurrentProcessWin32Process() + 780) != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL)
                                                                                           + 424LL)
                                                                               + 780LL)
          || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(),
              LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL) + 784LL),
              *(_DWORD *)(CurrentProcessWin32Process + 784) != (_DWORD)v10) )
        {
          UserSetLastError(5LL);
          goto LABEL_18;
        }
      }
    }
    if ( (*(_DWORD *)(v15 + 488) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 424) + 768LL) + 24LL) & 1) != 0 )
    {
      GetDomainLockRef(14LL);
      GetDomainLockRef(17LL);
      if ( !(unsigned int)HMIsHandleEntrySecureWorker(v8) )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return this;
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_q(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v10,
          20,
          12,
          (__int64)&WPP_c65d177db17e30e449c827ae3d526d95_Traceguids,
          (char)v8);
        goto LABEL_18;
      }
    }
    goto LABEL_17;
  }
  EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v15 + 424));
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return this;
  LOBYTE(v32) = 2;
  WPP_RECORDER_SF_qqq(
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    v32,
    20,
    11,
    (__int64)&WPP_c65d177db17e30e449c827ae3d526d95_Traceguids,
    (char)v8,
    *(_QWORD *)(v19 + 424),
    *(_QWORD *)(v15 + 424),
    v40,
    v41);
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      20,
      13,
      (__int64)&WPP_c65d177db17e30e449c827ae3d526d95_Traceguids);
  }
  return this;
}
