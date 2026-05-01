/*
 * XREFs of ?TrySetWebSearchEnabledStateOnUpdate@SearchAppExperienceManager@@AEAAXXZ @ 0x1800AAAF4
 * Callers:
 *     ?Prelaunch@SearchAppExperienceManager@@UEAAJE@Z @ 0x180265B20 (-Prelaunch@SearchAppExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180074FE0 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___ @ 0x18009D8D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___.c)
 *     ??0?$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800A09C4 (--0-$ActivityBase@VCortanaProactiveLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef_ea_1800A09C4.c)
 *     ??1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAA@XZ @ 0x1800A1544 (--1SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEA.c)
 *     ?HasSetWebSearchEnabledStateOnUpdate@@YA_NXZ @ 0x1800A6F30 (-HasSetWebSearchEnabledStateOnUpdate@@YA_NXZ.c)
 *     ?IsWebSearchProviderInstalled@@YA_NXZ @ 0x1800A7E00 (-IsWebSearchProviderInstalled@@YA_NXZ.c)
 *     ?StartActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800A9CAC (-StartActivity@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTe.c)
 *     ?Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@QEAAX_N000@Z @ 0x1800AA0B8 (-Stop@SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate@CortanaProactiveTelemetry@@.c)
 *     ?SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z @ 0x180265FBC (-SHRegSetBOOL@@YAJPEAUHKEY__@@PEBG1H@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall SearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate(SearchAppExperienceManager *this)
{
  char v1; // bl
  HKEY v2; // rcx
  char v3; // di
  __int64 v4; // rcx
  int v5; // eax
  int v6; // eax
  const char *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  _QWORD v11[40]; // [rsp+30h] [rbp-298h] BYREF
  _QWORD v12[39]; // [rsp+170h] [rbp-158h] BYREF
  char v13; // [rsp+2A8h] [rbp-20h]
  char v14; // [rsp+2A9h] [rbp-1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate");
  v11[0] = &CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::StartActivity((CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v11);
  v1 = IsWebSearchProviderInstalled();
  v3 = HasSetWebSearchEnabledStateOnUpdate();
  if ( v3 )
  {
LABEL_7:
    CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::Stop(
      (CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v11,
      v1,
      v3,
      0);
    goto LABEL_8;
  }
  if ( !v1 )
  {
    v6 = SHRegSetBOOL(
           v2,
           L"Software\\Microsoft\\Windows\\CurrentVersion\\SearchSettings",
           L"HasSetWebSearchEnabledStateOnUpdate",
           1);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x9BC,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    goto LABEL_7;
  }
  wil::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CortanaProactiveLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v12,
    (__int64)v11);
  v12[0] = &CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::`vftable';
  v13 = v1;
  v14 = 0;
  v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_050fa47c6e91e469e941dbfe29c54c93___(v4, (__int64)v12);
  if ( v5 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2486LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
      SearchAppExperienceManager::TrySetWebSearchEnabledStateOnUpdate_::_1_::dtor_0(v9, v8, v10);
      return;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x9C1,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
        v7);
      return;
    }
  }
  CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate((CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v12);
LABEL_8:
  CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate::~SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate((CortanaProactiveTelemetry::SearchAppExperienceManager_TrySetWebSearchEnabledStateOnUpdate *)v11);
}
