/*
 * XREFs of _lambda_0c539e07ad5eca11a9151d154bdea5da_::operator() @ 0x180029FD4
 * Callers:
 *     ?TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z @ 0x180029F80 (-TsSessionConsoleLockedNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001BC0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x1800210EC (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180039DDC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_0c539e07ad5eca11a9151d154bdea5da_::operator()(__int64 a1)
{
  DWORD v1; // r14d
  __int64 v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 v4; // rax
  unsigned int v5; // ebx
  unsigned int v6; // eax
  struct TSSession *v7; // rdi
  int v8; // r15d
  int v9; // ebp
  _DWORD *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  const char *v13; // rax
  struct TSSession *v14; // rax
  __int64 v15; // rcx
  struct TSSession *v16; // rdi
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct TSSession *v20; // [rsp+60h] [rbp+8h] BYREF
  __int64 v21; // [rsp+68h] [rbp+10h] BYREF

  v1 = **(_DWORD **)a1;
  v2 = **(_QWORD **)(a1 + 8);
  v20 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v21 = (__int64)v3;
  if ( *(_DWORD *)(v2 + 16) != 4 )
    goto LABEL_5;
  v4 = *(_QWORD *)v2 - *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1;
  if ( *(_QWORD *)v2 == *(_QWORD *)&GUID_CONSOLE_LOCKED.Data1 )
    v4 = *(_QWORD *)(v2 + 8) - *(_QWORD *)GUID_CONSOLE_LOCKED.Data4;
  if ( !v4 )
  {
    v6 = TsSessionFromSessionId(v1, 0, 0LL, &v20);
    if ( v6 )
    {
      v5 = wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x95A,
             (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
             (const char *)v6);
    }
    else
    {
      v7 = v20;
      v8 = *((_DWORD *)v20 + 58);
      v9 = *(_BYTE *)(v2 + 20) != 0;
      *((_DWORD *)v20 + 58) = v9;
      v10 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
      if ( *v10 > 4u )
      {
        LODWORD(v20) = *((_DWORD *)v7 + 58);
        v13 = "Locked Unchanged";
        if ( v8 != v9 )
          v13 = "Locked Changed";
        v21 = (__int64)v13;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
          (__int64)v10,
          byte_18004648D,
          v11,
          v12,
          (const unsigned __int16 **)&v21,
          (__int64)&v20);
      }
      if ( v8 != v9
        && (*((_DWORD *)v7 + 57) || g_bLowPowerEpoch || !*((_DWORD *)v7 + 58) || g_bApmSuspended)
        && ((v14 = (struct TSSession *)operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow),
             v16 = v14,
             (v20 = v14) == 0LL)
          ? (v16 = 0LL)
          : (struct TSSession *)(*(_DWORD *)v14 = v1),
            v16
         && (v17 = QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v15, (__int64)v16),
             v5 = v17,
             v17 < 0)) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x95A,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v17);
        operator delete(v16, (const struct std::nothrow_t *)4);
      }
      else
      {
        v5 = 0;
      }
    }
  }
  else
  {
LABEL_5:
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x95A,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return v5;
}
