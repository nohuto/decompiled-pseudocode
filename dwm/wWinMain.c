/*
 * XREFs of wWinMain @ 0x140003430
 * Callers:
 *     __scrt_common_main_seh @ 0x140005350 (__scrt_common_main_seh.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x140003170 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     McGenEventRegister_EtwEventRegister @ 0x1400035E4 (McGenEventRegister_EtwEventRegister.c)
 *     ?CheckForDwmGroupSid@@YAJXZ @ 0x140003610 (-CheckForDwmGroupSid@@YAJXZ.c)
 *     ?Run@CDwmAppHost@@QEAAJXZ @ 0x140003700 (-Run@CDwmAppHost@@QEAAJXZ.c)
 *     ?ModifyTokenPrivileges@@YAJXZ @ 0x140003BA4 (-ModifyTokenPrivileges@@YAJXZ.c)
 *     ?Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z @ 0x140003CD4 (-Initialize@CDwmAppHost@@QEAAJPEAUHINSTANCE__@@@Z.c)
 *     IsImmDisableIMEPresent @ 0x1400068E8 (IsImmDisableIMEPresent.c)
 */

int __stdcall wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
{
  HANDLE CurrentProcess; // rax
  HRESULT v6; // eax
  signed int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  CDwmAppHost *v10; // rcx
  CDwmAppHost *v11; // rcx
  CDwmAppHost *v12; // rcx
  int v13; // r9d
  signed int LastError; // eax
  signed int v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]
  int ProcessInformation[6]; // [rsp+30h] [rbp-18h] BYREF

  ProcessInformation[0] = 1;
  ModifyTokenPrivileges();
  CurrentProcess = GetCurrentProcess();
  SetPriorityClass(CurrentProcess, 0x80u);
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, ProcessInformation, 4u);
  if ( (unsigned __int8)IsImmDisableIMEPresent() )
  {
    SetLastError(0);
    if ( !ImmDisableIME(0xFFFFFFFF) )
    {
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v17 = 146;
      goto LABEL_20;
    }
  }
  SetErrorMode(0xC001u);
  v6 = WerSetFlags(0x20u);
  v7 = v6;
  if ( v6 != -2147467263 && v6 < 0 )
  {
    v17 = 162;
    goto LABEL_13;
  }
  v6 = WerSetMaxProcessHoldMilliseconds(5000LL);
  v7 = v6;
  if ( v6 != -2147467263 && v6 < 0 )
  {
    v17 = 166;
    goto LABEL_13;
  }
  SetLastError(0);
  if ( !HeapSetInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL) )
  {
    v16 = GetLastError();
    v7 = v16;
    if ( v16 > 0 )
      v7 = (unsigned __int16)v16 | 0x80070000;
    v17 = 176;
LABEL_20:
    if ( v7 >= 0 )
      v7 = -2003304445;
    v13 = v7;
    goto LABEL_14;
  }
  v6 = DXGIDeclareAdapterRemovalSupport();
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 179;
    goto LABEL_13;
  }
  McGenEventRegister_EtwEventRegister(
    &Microsoft_Windows_Dwm_Dwm_Provider,
    v8,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context,
    &Microsoft_Windows_Dwm_Dwm_Provider_Context);
  McGenEventRegister_EtwEventRegister(
    &WERSVC_TRIGGER_PROVIDER_GUID,
    v9,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context,
    &WERSVC_TRIGGER_PROVIDER_GUID_Context);
  v6 = CheckForDwmGroupSid();
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 185;
    goto LABEL_13;
  }
  v6 = CDwmAppHost::Initialize(v10, hInstance);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 187;
    goto LABEL_13;
  }
  v6 = CDwmAppHost::Run(v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    v17 = 189;
LABEL_13:
    v13 = v6;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1400101B8, 5LL, v13, v17);
  }
  CDwmAppHost::Shutdown(v12, v7);
  return v7;
}
