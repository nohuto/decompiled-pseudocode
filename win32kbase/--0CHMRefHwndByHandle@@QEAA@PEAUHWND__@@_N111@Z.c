/*
 * XREFs of ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C008F460
 * Callers:
 *     <none>
 * Callees:
 *     IsGetDesktopViewSupported @ 0x1C003AA34 (IsGetDesktopViewSupported.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C003CC40 (EtwTraceUIPIHandleValidationError.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     HMIsHandleEntrySecure @ 0x1C00ED28E (HMIsHandleEntrySecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C0153AA4 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 */

CHMRefHwndByHandle *__fastcall CHMRefHwndByHandle::CHMRefHwndByHandle(
        CHMRefHwndByHandle *this,
        HWND a2,
        __int64 a3,
        char a4,
        bool a5,
        bool a6)
{
  __int64 v6; // rbp
  HWND v8; // r12
  char v10; // r15
  void *v11; // r9
  __int64 v12; // rdx
  char *v13; // rdi
  char *v14; // rsi
  __int64 v15; // rcx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v24; // rax
  int v25; // r10d
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 *v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int *v32; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rcx
  __int64 v35; // rax

  v6 = 0LL;
  v8 = a2;
  v10 = a3;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  v11 = &WPP_eb697e1f4d7d325e8a71fa1ea90ed0b4_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      20,
      10,
      (__int64)&WPP_eb697e1f4d7d325e8a71fa1ea90ed0b4_Traceguids);
  *(_QWORD *)this = 0LL;
  LODWORD(v12) = (unsigned __int16)v8;
  if ( (unsigned __int64)(unsigned __int16)v8 < *((_QWORD *)gpsi + 1) )
  {
    v12 = dword_1C02D0E10 * (unsigned int)(unsigned __int16)v8;
    v13 = (char *)qword_1C02D0E08 + (unsigned int)v12;
    v14 = (char *)gpKernelHandleTable + 24 * ((__int64)(unsigned int)v12 >> 5);
    v15 = 0x7FFFLL;
    v16 = WORD1(v8) & 0x7FFF;
    if ( ((WORD1(v8) & 0x7FFF) == *((_WORD *)v13 + 13)
       || v16 == 0x7FFF
       || !v16 && PsGetCurrentProcessWow64Process(0x7FFFLL, v12, a3, v11))
      && v13[24] == 1
      && (v13[25] & 1) == 0 )
    {
      v17 = *(_QWORD *)v14;
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v14 + 8LL));
      *(_QWORD *)this = v17;
      v18 = SGDGetUserSessionState(v15, v12, a3, v11);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v18 + 8)) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
        v6 = *ThreadWin32Thread;
      v21 = *(_QWORD *)this;
      v22 = *(_QWORD *)(*(_QWORD *)this + 16LL);
      if ( v10 )
      {
        if ( v22 != v6 && *(_QWORD *)(v21 + 24) != *(_QWORD *)(v6 + 456) && (*(_DWORD *)(v6 + 488) & 4) == 0 )
        {
          if ( (int)IsGetDesktopViewSupported() < 0
            || (v12 = *(_QWORD *)(*(_QWORD *)this + 24LL), !qword_1C02D6370)
            || !qword_1C02D6370(*(_QWORD *)(v6 + 424), v12) )
          {
LABEL_23:
            *((_QWORD *)this + 1) = *(_QWORD *)this;
            *(_QWORD *)this = 0LL;
            goto LABEL_24;
          }
        }
      }
      if ( a4 && *(_DWORD *)(*(_QWORD *)(v22 + 424) + 872LL) != 1 )
        a4 = 0;
      if ( !a6 )
        goto LABEL_102;
      if ( !v22 )
        goto LABEL_102;
      v24 = *(_QWORD *)(v22 + 424);
      v21 = *(_QWORD *)(v6 + 424);
      if ( !UIPrivelegeIsolation::fEnforce )
        goto LABEL_102;
      v12 = *(unsigned int *)(v21 + 864);
      a3 = *(unsigned int *)(v24 + 864);
      if ( (unsigned int)v12 > (unsigned int)a3 )
        goto LABEL_102;
      if ( (_DWORD)v12 == (_DWORD)a3 )
      {
        v20 = *(unsigned int *)(v21 + 868);
        v25 = *(_DWORD *)(v24 + 868);
        if ( (_DWORD)v20 == v25 || (_DWORD)v20 == -1 || v25 == -1 )
          goto LABEL_102;
      }
      if ( a4
        && (_DWORD)v12 == (_DWORD)a3
        && (v30 = *(_DWORD *)(v24 + 868),
            v31 = *(_DWORD *)(v21 + 868),
            v32 = (unsigned int *)SGDGetUserSessionState(v21, v12, a3, v20),
            (unsigned __int8)SeIsParentOfChildAppContainer(*v32, v31, v30))
        || (v12 = *(_QWORD *)(v22 + 424), *(PVOID *)v12 == gpepCSRSS) )
      {
LABEL_102:
        if ( a5 )
        {
          v26 = SGDGetUserSessionState(v21, v12, a3, v20);
          if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v26 + 8)) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
          v27 = 0LL;
          v28 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
          if ( v28 )
            v27 = *v28;
          v12 = *(_QWORD *)this;
          v29 = *(_QWORD *)(*(_QWORD *)(v27 + 456) + 8LL);
          if ( *(_QWORD *)(v29 + 24) != *(_QWORD *)this )
          {
            if ( !UIPrivelegeIsolation::fEnforce
              || (v29 = *(unsigned int *)(*(_QWORD *)(v12 + 16) + 488LL), (v29 & 0xC) != 0) )
            {
              CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
              if ( CurrentProcessWin32Process && !*(_QWORD *)CurrentProcessWin32Process )
                CurrentProcessWin32Process = 0LL;
              v34 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL);
              if ( *(_DWORD *)(CurrentProcessWin32Process + 772) != *(_DWORD *)(v34 + 772) )
                goto LABEL_86;
              v35 = PsGetCurrentProcessWin32Process(v34);
              if ( v35 && !*(_QWORD *)v35 )
                v35 = 0LL;
              LODWORD(v12) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 424LL) + 776LL);
              if ( *(_DWORD *)(v35 + 776) != (_DWORD)v12 )
              {
LABEL_86:
                UserSetLastError(5);
                goto LABEL_24;
              }
            }
          }
        }
        if ( (*(_DWORD *)(v6 + 488) & 0x20000000) == 0
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 424) + 760LL) + 24LL) & 1) == 0
          || (unsigned int)HMIsHandleEntrySecure(v8) )
        {
          goto LABEL_23;
        }
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            20,
            12,
            (__int64)&WPP_eb697e1f4d7d325e8a71fa1ea90ed0b4_Traceguids,
            (char)v8);
        }
      }
      else
      {
        EtwTraceUIPIHandleValidationError(
          *(struct tagPROCESSINFO **)(v6 + 424),
          (const struct tagPROCESSINFO *)v12,
          (char)v8,
          1);
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qqq(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            20,
            11,
            (__int64)&WPP_eb697e1f4d7d325e8a71fa1ea90ed0b4_Traceguids,
            (char)v8,
            *(_QWORD *)(v22 + 424),
            *(_QWORD *)(v6 + 424));
        }
      }
    }
  }
LABEL_24:
  LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType);
  if ( (_BYTE)v12 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      20,
      13,
      (__int64)&WPP_eb697e1f4d7d325e8a71fa1ea90ed0b4_Traceguids);
  return this;
}
