/*
 * XREFs of ?_GetCortanaEntryPointAndArgs@SearchAppExperienceManager@@AEAAJPEBGIPEAPEAUHSTRING__@@1@Z @ 0x180011404
 * Callers:
 *     ?Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180073C10 (-Show@SearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shel.c)
 * Callees:
 *     ?_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z @ 0x180011540 (-_GetLaunchArgsSubstring@SearchAppExperienceManager@@CAJPEBG0IPEAPEBGPEA_K@Z.c)
 *     ??1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ @ 0x18001193C (--1CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@QEAAXXZ @ 0x180011E48 (-StartActivity@CortanaExperienceManager_GetCortanaEntryPointAndArgs@CortanaProactiveTelemetry@@Q.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180017624 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsPro.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180019DB0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 */

__int64 __fastcall SearchAppExperienceManager::_GetCortanaEntryPointAndArgs(
        SearchAppExperienceManager *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        HSTRING *a4,
        HSTRING *string)
{
  wchar_t *v8; // rcx
  UINT32 v9; // ebx
  HRESULT v10; // eax
  unsigned int v11; // ebx
  HRESULT v13; // eax
  int v14; // [rsp+20h] [rbp-E0h]
  int v15; // [rsp+20h] [rbp-E0h]
  wchar_t *Str; // [rsp+30h] [rbp-D0h] BYREF
  UINT32 length[2]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[40]; // [rsp+40h] [rbp-C0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v18);
  v18[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v18);
  v8 = (wchar_t *)L"Unknown";
  v9 = 7;
  Str = (wchar_t *)L"Unknown";
  *(_QWORD *)length = 7LL;
  if ( a2 )
  {
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"Positioner=",
      a3,
      (const unsigned __int16 **)&Str,
      (unsigned __int64 *)length);
    v13 = WindowsCreateString(Str, length[0], string);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5B5,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        v15);
    SearchAppExperienceManager::_GetLaunchArgsSubstring(
      a2,
      L"StartMode=",
      a3,
      (const unsigned __int16 **)&Str,
      (unsigned __int64 *)length);
    if ( Str && wcsstr(Str, L"AppTransition") )
    {
      v8 = (wchar_t *)L"StartButton";
      v9 = 11;
    }
    else
    {
      SearchAppExperienceManager::_GetLaunchArgsSubstring(
        a2,
        L"QuerySource=",
        a3,
        (const unsigned __int16 **)&Str,
        (unsigned __int64 *)length);
      v8 = Str;
      if ( Str )
        v9 = length[0];
      else
        v8 = (wchar_t *)L"Unknown";
    }
  }
  v10 = WindowsCreateString(v8, v9, a4);
  v11 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CB,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      v14);
  }
  else
  {
    wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v18);
    v11 = 0;
  }
  CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs::~CortanaExperienceManager_GetCortanaEntryPointAndArgs((CortanaProactiveTelemetry::CortanaExperienceManager_GetCortanaEntryPointAndArgs *)v18);
  return v11;
}
