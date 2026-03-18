/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C007F760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C003D540 (EtwTraceUIPIHandleValidationError.c)
 *     IsGetDesktopViewSupported @ 0x1C007FB98 (IsGetDesktopViewSupported.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C007FBC4 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     HMIsHandleEntrySecure @ 0x1C00E4C84 (HMIsHandleEntrySecure.c)
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
  bool v10; // r8
  __int64 v11; // rdx
  char *v12; // rdi
  char *v13; // rsi
  __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rsi
  bool v19; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // r8d
  int v24; // r9d
  int v25; // r10d
  __int64 v26; // rsi
  __int64 *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // r8d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r8d

  v8 = a2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)a2 || v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      20,
      10,
      (__int64)&WPP_c35a1e812a963c24997159dbfe5b40a9_Traceguids);
  *(_QWORD *)this = 0LL;
  LODWORD(v11) = (unsigned __int16)v8;
  if ( (unsigned __int64)(unsigned __int16)v8 < *((_QWORD *)gpsi + 1) )
  {
    v12 = (char *)qword_1C0294B68 + (unsigned int)(unsigned __int16)v8 * dword_1C0294B70;
    v13 = (char *)gpKernelHandleTable + 24 * ((__int64)((unsigned int)(unsigned __int16)v8 * dword_1C0294B70) >> 5);
    v14 = WORD1(v8) & 0x7FFF;
    if ( ((WORD1(v8) & 0x7FFF) == *((_WORD *)v12 + 13) || v14 == 0x7FFF || !v14 && PsGetCurrentProcessWow64Process())
      && v12[24] == 1
      && (v12[25] & 1) == 0 )
    {
      v15 = *(_QWORD *)v13;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v13 + 8LL));
      *(_QWORD *)this = v15;
      v16 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v16 = *ThreadWin32Thread;
      v18 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      if ( a3 )
      {
        if ( v18 != v16
          && *(_QWORD *)(*(_QWORD *)this + 24LL) != *(_QWORD *)(v16 + 456)
          && (*(_DWORD *)(v16 + 488) & 4) == 0 )
        {
          if ( (int)IsGetDesktopViewSupported() < 0
            || (v11 = *(_QWORD *)(*(_QWORD *)this + 24LL), !qword_1C029BAB8)
            || !qword_1C029BAB8(*(_QWORD *)(v16 + 424), v11) )
          {
LABEL_21:
            *((_QWORD *)this + 1) = *(_QWORD *)this;
            *(_QWORD *)this = 0LL;
            goto LABEL_22;
          }
        }
      }
      if ( a4 && *(_DWORD *)(*(_QWORD *)(v18 + 424) + 888LL) != 1 )
        a4 = 0;
      if ( !a6
        || !v18
        || (v21 = *(_QWORD *)(v18 + 424), v22 = *(_QWORD *)(v16 + 424), !UIPrivelegeIsolation::fEnforce)
        || (LODWORD(v11) = *(_DWORD *)(v22 + 880), v23 = *(_DWORD *)(v21 + 880), (unsigned int)v11 > v23)
        || (_DWORD)v11 == v23
        && ((v24 = *(_DWORD *)(v22 + 884), v25 = *(_DWORD *)(v21 + 884), v24 == v25) || v24 == -1 || v25 == -1)
        || a4
        && (_DWORD)v11 == v23
        && (unsigned __int8)SeIsParentOfChildAppContainer(
                              (unsigned int)gSessionId,
                              *(unsigned int *)(v22 + 884),
                              *(unsigned int *)(v21 + 884))
        || (v11 = *(_QWORD *)(v18 + 424), *(PVOID *)v11 == gpepCSRSS) )
      {
        if ( a5 )
        {
          v26 = 0LL;
          v27 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v27 )
            v26 = *v27;
          v11 = *(_QWORD *)this;
          v30 = *(_QWORD *)(*(_QWORD *)(v26 + 456) + 8LL);
          if ( *(_QWORD *)(v30 + 24) != *(_QWORD *)this )
          {
            if ( !UIPrivelegeIsolation::fEnforce
              || (v30 = *(unsigned int *)(*(_QWORD *)(v11 + 16) + 488LL), (v30 & 0xC) != 0) )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30, v11, v28, v29);
              v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL);
              v11 = *(unsigned int *)(v35 + 780);
              if ( *(_DWORD *)(CurrentProcessWin32Process + 780) != (_DWORD)v11
                || (v36 = PsGetCurrentProcessWin32Process(v35, v11, v33, v34),
                    v11 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL) + 784LL),
                    *(_DWORD *)(v36 + 784) != (_DWORD)v11) )
              {
                UserSetLastError(5LL, v11, v33, v34);
                goto LABEL_22;
              }
            }
          }
        }
        if ( (*(_DWORD *)(v16 + 488) & 0x20000000) == 0
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 424) + 768LL) + 24LL) & 1) == 0
          || (unsigned int)HMIsHandleEntrySecure(v8) )
        {
          goto LABEL_21;
        }
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v37,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            20,
            12,
            (__int64)&WPP_c35a1e812a963c24997159dbfe5b40a9_Traceguids,
            (char)v8);
        }
      }
      else
      {
        EtwTraceUIPIHandleValidationError(*(PEPROCESS **)(v16 + 424), (PEPROCESS *)v11, (char)v8, 1);
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            v11,
            v31,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            20,
            11,
            (__int64)&WPP_c35a1e812a963c24997159dbfe5b40a9_Traceguids,
            (char)v8,
            *(_QWORD *)(v18 + 424),
            *(_QWORD *)(v16 + 424));
        }
      }
    }
  }
LABEL_22:
  LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v11 || v19 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v19,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      20,
      13,
      (__int64)&WPP_c35a1e812a963c24997159dbfe5b40a9_Traceguids);
  return this;
}
