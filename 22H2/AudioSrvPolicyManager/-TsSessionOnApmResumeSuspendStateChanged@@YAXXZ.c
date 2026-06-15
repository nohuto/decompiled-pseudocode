/*
 * XREFs of ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002A698
 * Callers:
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x180008510 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F8F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x1800210EC (--$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager.c)
 *     ?TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z @ 0x1800288C8 (-TsSessionGetPrimaryConsoleAudioSession@@YAJPEAPEAVTSSession@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180039DDC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void TsSessionOnApmResumeSuspendStateChanged(void)
{
  struct _RTL_CRITICAL_SECTION *v0; // rdi
  int PrimaryConsoleAudioSession; // eax
  signed int v2; // ebx
  struct TSSession *v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rsi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v8; // [rsp+30h] [rbp+8h] BYREF

  v0 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  PrimaryConsoleAudioSession = TsSessionGetPrimaryConsoleAudioSession(&v8);
  v2 = (unsigned __int16)PrimaryConsoleAudioSession | 0x80070000;
  if ( PrimaryConsoleAudioSession <= 0 )
    v2 = PrimaryConsoleAudioSession;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA81,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_5;
  }
  v3 = v8;
  if ( *((_DWORD *)v8 + 57) || g_bLowPowerEpoch || !*((_DWORD *)v8 + 58) || g_bApmSuspended )
  {
    v5 = operator new(4uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
      *v5 = *(_DWORD *)v3;
    else
      v5 = 0LL;
    if ( v5 )
    {
      v6 = QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(v4, (__int64)v5);
      v2 = v6;
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA81,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v6);
        operator delete(v5, (const struct std::nothrow_t *)4);
LABEL_5:
        if ( v0 )
          LeaveCriticalSection(v0);
        goto LABEL_20;
      }
    }
  }
  if ( v0 )
    LeaveCriticalSection(v0);
  v2 = 0;
LABEL_20:
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA81,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)v2);
}
