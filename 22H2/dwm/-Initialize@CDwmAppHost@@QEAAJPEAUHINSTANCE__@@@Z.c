/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140002118
 * Callers:
 *     WinMain @ 0x1400018F0 (WinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x14000229C (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000236C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002588 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     _Init_thread_footer @ 0x1400037D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x140003838 (_Init_thread_header.c)
 *     IsRegisterHotKeyPresent @ 0x140004404 (IsRegisterHotKeyPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400046E4 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x140005674 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwner@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140006F20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIHotKeyClientOwn.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x140006FA8 (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2, __int64 a3, __int64 a4)
{
  CDwmAppHost *v5; // rcx
  int v6; // eax
  int v7; // ebx
  CDwmAppHost *v8; // rcx
  __int64 v9; // rcx
  signed int LastError; // eax
  signed int v12; // eax
  CDwmAppHost *v13; // rcx
  __int64 v14; // rcx
  signed int v15; // eax
  CDwmAppHost *v16; // rcx
  const unsigned __int16 *v17; // [rsp+20h] [rbp-18h]
  unsigned int v18; // [rsp+20h] [rbp-18h]
  CDwmAppHost *v19; // [rsp+40h] [rbp+8h] BYREF

  v19 = this;
  if ( dword_140015BC0 > *(_DWORD *)(*(_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + 4LL) )
  {
    Init_thread_header(&dword_140015BC0, 4LL, a3, a4);
    if ( dword_140015BC0 == -1 )
    {
      dword_1400152DC = -2147024348;
      Init_thread_footer(&dword_140015BC0);
    }
  }
  g_dwmAppHost = a2;
  HIDWORD(qword_140015B20) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)&qword_140015B48);
  v6 = CDwmAppHost::InitializeWindow(v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    v18 = 40;
    goto LABEL_30;
  }
  v6 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &g_dwmAppHost + 1, &dword_140015B28);
  v7 = v6;
  if ( v6 < 0 )
  {
    v18 = 43;
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1400152D8, 2LL, v6, v18);
    return (unsigned int)v7;
  }
  SetLastError(0);
  if ( !(unsigned int)RegisterSessionPort(*(&g_dwmAppHost + 1)) )
  {
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    if ( v7 >= 0 )
      v7 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1400152D8, 2LL, v7, 0x2Eu);
  }
  if ( v7 < 0 )
  {
    CDwmAppHost::ReportEventWithDword(v8, 1u, 0xC0002344, v7);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1400152D8, 2LL, v7, 0x3Au);
  }
  else
  {
    CDwmAppHost::ReportEventW(v8, 4u, 0x40002343u, 0LL, v17);
    if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
    {
      DWMGhostInitialize();
      *(&uExitCode + 1) = 1;
    }
    v7 = 0;
    LODWORD(v19) = 0;
    RtlGetDeviceFamilyInfoEnum(0LL, &v19, 0LL);
    if ( (unsigned __int8)IsRegisterHotKeyPresent(v9) && (_DWORD)v19 == 3 && !RegisterHotKey(hwnd, 0, 0x400Eu, 0x42u) )
    {
      v12 = GetLastError();
      if ( v12 > 0 )
        v12 = (unsigned __int16)v12 | 0x80070000;
      CDwmAppHost::ReportEventWithDword(v13, 2u, 0x8000234B, v12);
    }
    if ( (_DWORD)v19 == 16 )
    {
      v14 = g_spHotkeyCallback;
      g_spHotkeyCallback = 0LL;
      if ( v14 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IHotKeyClientOwner>::Release();
      v15 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyCallback,HotKeyCallback,>(&g_spHotkeyCallback);
      if ( v15 < 0 )
        CDwmAppHost::ReportEventWithDword(v16, 2u, 0x8000234B, v15);
    }
  }
  return (unsigned int)v7;
}
