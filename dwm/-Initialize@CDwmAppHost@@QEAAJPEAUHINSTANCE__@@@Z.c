/*
 * XREFs of ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4
 * Callers:
 *     wWinMain @ 0x140003430 (wWinMain.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x140003E08 (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     ?ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z @ 0x140003FF8 (-ReportEventW@CDwmAppHost@@AEAAXGKPEBG0@Z.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140004228 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     IsRegisterHotKeyPresent @ 0x140006508 (IsRegisterHotKeyPresent.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400067D0 (IsDWMGhostHandleGhostMsgPresent.c)
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000A694 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000AE00 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHot_ea_14000AE00.c)
 *     ?ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z @ 0x14000AF0C (-ReportEventWithDword@CDwmAppHost@@AEAAXGKK@Z.c)
 */

__int64 __fastcall CDwmAppHost::Initialize(CDwmAppHost *this, HINSTANCE a2)
{
  CDwmAppHost *v2; // rcx
  int v3; // eax
  int v4; // ebx
  CDwmAppHost *v5; // rcx
  __int64 v6; // rcx
  signed int v8; // eax
  CDwmAppHost *v9; // rcx
  signed int LastError; // eax
  CDwmAppHost *v11; // rcx
  __int64 v12; // rcx
  signed int v13; // eax
  CDwmAppHost *v14; // rcx
  const unsigned __int16 *v15; // [rsp+20h] [rbp-18h]
  unsigned int v16; // [rsp+20h] [rbp-18h]
  CDwmAppHost *v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = this;
  hInstance = a2;
  HIDWORD(qword_140016B00) = GetCurrentThreadId();
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)qword_140016B18);
  v3 = CDwmAppHost::InitializeWindow(v2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 41;
    goto LABEL_25;
  }
  v3 = DwmInitializePort(CDwmAppHost::s_LpcCommandHandler, &hInstance + 1, &dword_140016B08);
  v4 = v3;
  if ( v3 < 0 )
  {
    v16 = 44;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010A40, 2LL, v3, v16);
    return (unsigned int)v4;
  }
  SetLastError(0);
  if ( (unsigned int)RegisterSessionPort(*(&hInstance + 1)) )
  {
    CDwmAppHost::ReportEventW(v5, 4u, 0x40002343u, 0LL, v15);
    if ( (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
    {
      DWMGhostInitialize();
      *(&uExitCode + 1) = 1;
    }
    v4 = 0;
    LODWORD(v17) = 0;
    RtlGetDeviceFamilyInfoEnum(0LL, &v17, 0LL);
    if ( (unsigned __int8)IsRegisterHotKeyPresent(v6) && (_DWORD)v17 == 3 && !RegisterHotKey(hwnd, 0, 0x400Eu, 0x42u) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      CDwmAppHost::ReportEventWithDword(v11, 2u, 0x8000234B, LastError);
    }
    if ( (_DWORD)v17 == 16 )
    {
      v12 = g_spHotkeyCallback;
      g_spHotkeyCallback = 0LL;
      if ( v12 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::UI::Internal::Text::IHotKeyClientOwner>::Release();
      v13 = Microsoft::WRL::Details::MakeAndInitialize<HotKeyCallback,HotKeyCallback,>(&g_spHotkeyCallback);
      if ( v13 < 0 )
        CDwmAppHost::ReportEventWithDword(v14, 2u, 0x8000234B, v13);
    }
  }
  else
  {
    v8 = GetLastError();
    v4 = v8;
    if ( v8 > 0 )
      v4 = (unsigned __int16)v8 | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010A40, 2LL, v4, 0x2Fu);
    CDwmAppHost::ReportEventWithDword(v9, 1u, 0xC0002344, v4);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_140010A40, 2LL, v4, 0x3Bu);
  }
  return (unsigned int)v4;
}
