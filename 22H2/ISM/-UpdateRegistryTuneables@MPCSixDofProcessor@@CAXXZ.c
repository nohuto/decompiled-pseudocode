/*
 * XREFs of ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x18019013C
 * Callers:
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x18018AFD0 (--$_Callback_once@V-$tuple@$$QEAV_lambda_2ab80ba63dcc212dafbb4e4695138308_@@AEAVexception_ptr@st.c)
 *     wistd::__function::__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(enum_wil::RegistryChangeKind)_::operator() @ 0x18018C930 (wistd--__function--__func__lambda_8a62f5b69e88a23bdde8affb13e85828__void___cdecl(en_ea_18018C930.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@V?$variant@K_NM@4@@Z @ 0x18006E4B4 (-ChangeConstant@MPCConstantManager@@QEAAJW4InputType@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     ??$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CC08 (--$GetStaticConstant@K@MPCConstantManager@@QEAAKW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CD64 (--$GetStaticConstant@M@MPCConstantManager@@QEAAMW4InputType@@V-$basic_string_view@GU-$char_trait.c)
 *     ??$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000000000000000$$QEAK@Z @ 0x18018A5F8 (--$MPCSixDofProcessor_HomeEventTuneablesChanged@MMMMMMMMMMMMMMMMMMMK@ISMTracing@@SAX$$QEAM000000.c)
 *     _lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator() @ 0x18018B674 (_lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_--operator().c)
 */

void MPCSixDofProcessor::UpdateRegistryTuneables(void)
{
  const char *v0; // r9
  const char *v1; // r9
  const char *v2; // r9
  const char *v3; // r9
  const char *v4; // r9
  const char *v5; // r9
  const char *v6; // r9
  const char *v7; // r9
  const char *v8; // r9
  const char *v9; // r9
  const char *v10; // r9
  const char *v11; // r9
  const char *v12; // r9
  const char *v13; // r9
  const char *v14; // r9
  const char *v15; // r9
  const char *v16; // r9
  const char *v17; // r9
  const char *v18; // r9
  const char *v19; // r9
  __m128i v20; // [rsp+A0h] [rbp-39h] BYREF
  float v21; // [rsp+B0h] [rbp-29h] BYREF
  float v22; // [rsp+B4h] [rbp-25h] BYREF
  float v23; // [rsp+B8h] [rbp-21h] BYREF
  float v24; // [rsp+BCh] [rbp-1Dh] BYREF
  float v25; // [rsp+C0h] [rbp-19h] BYREF
  float v26; // [rsp+C4h] [rbp-15h] BYREF
  float v27; // [rsp+C8h] [rbp-11h] BYREF
  float v28; // [rsp+CCh] [rbp-Dh] BYREF
  float v29; // [rsp+D0h] [rbp-9h] BYREF
  float v30; // [rsp+D4h] [rbp-5h] BYREF
  float v31; // [rsp+D8h] [rbp-1h] BYREF
  float v32; // [rsp+DCh] [rbp+3h] BYREF
  float v33; // [rsp+E0h] [rbp+7h] BYREF
  float v34; // [rsp+E4h] [rbp+Bh] BYREF
  float v35; // [rsp+E8h] [rbp+Fh] BYREF
  float v36; // [rsp+ECh] [rbp+13h] BYREF
  float v37; // [rsp+F0h] [rbp+17h] BYREF
  float v38[15]; // [rsp+F4h] [rbp+1Bh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]
  int pvData; // [rsp+140h] [rbp+67h] BYREF
  DWORD pcbData; // [rsp+148h] [rbp+6Fh] BYREF
  __int64 v42; // [rsp+150h] [rbp+77h] BYREF
  float Static; // [rsp+158h] [rbp+7Fh] BYREF

  pvData = 0;
  v20.m128i_i64[0] = (__int64)&pvData;
  pcbData = 4;
  v20.m128i_i64[1] = (__int64)&pcbData;
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxLinearVelocity_X",
    (__int64)L"HomeMaximumLinearVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxLinearVelocity_Y",
    (__int64)L"HomeMaximumLinearVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxLinearVelocity_Z",
    (__int64)L"HomeMaximumLinearVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxAngularVelocity_X",
    (__int64)L"HomeMaximumAngularVelocity_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxAngularVelocity_Y",
    (__int64)L"HomeMaximumAngularVelocity_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxAngularVelocity_Z",
    (__int64)L"HomeMaximumAngularVelocity_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxLinearAcceleration_X",
    (__int64)L"HomeMaximumLinearAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxLinearAcceleration_Y",
    (__int64)L"HomeMaximumLinearAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxLinearAcceleration_Z",
    (__int64)L"HomeMaximumLinearAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxAngularAcceleration_X",
    (__int64)L"HomeMaximumAngularAcceleration_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxAngularAcceleration_Y",
    (__int64)L"HomeMaximumAngularAcceleration_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxAngularAcceleration_Z",
    (__int64)L"HomeMaximumAngularAcceleration_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxWeightedDistance_X",
    (__int64)L"HomeMaximumWeightedDistance_X");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxWeightedDistance_Y",
    (__int64)L"HomeMaximumWeightedDistance_Y");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeMaxWeightedDistance_Z",
    (__int64)L"HomeMaximumWeightedDistance_Z");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeDistanceWeight",
    (__int64)L"HomeDistanceWeight");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeAllowTimeBetweenClicksInMS",
    (__int64)L"HomeAllowTimeBetweenClicksInSec");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeSecondClickLinearMultiplier",
    (__int64)L"HomeSecondClickLinearMultiplier");
  lambda_6e3e67724bc2e0c3df7a3a6f491fcaa9_::operator()(
    (__int64)&v20,
    L"HomeSecondClickAngularMultiplier",
    (__int64)L"HomeSecondClickAngularMultiplier");
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\ISM\\6dof",
          L"HomeCancelExceedThresholdMaxCount",
          0x10u,
          0LL,
          &pvData,
          &pcbData) )
  {
    if ( !MPCConstantManager::s_instance )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v0);
      __debugbreak();
    }
    v20.m128i_i64[0] = (__int64)L"HomeCancelExceedThresholdMaxCount";
    v20.m128i_i64[1] = 33LL;
    LODWORD(v42) = pvData;
    BYTE4(v42) = 0;
    MPCConstantManager::ChangeConstant((__int64)MPCConstantManager::s_instance, 0x2000LL, &v20, v42);
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v0);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeCancelExceedThresholdMaxCount";
  v20.m128i_i64[1] = 33LL;
  LODWORD(v42) = MPCConstantManager::GetStaticConstant<unsigned long>(
                   (__int64)MPCConstantManager::s_instance,
                   0x2000,
                   &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v1);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeSecondClickAngularMultiplier";
  v20.m128i_i64[1] = 32LL;
  Static = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v2);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeSecondClickLinearMultiplier";
  v20.m128i_i64[1] = 31LL;
  v21 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v3);
    __debugbreak();
  }
  v20.m128i_i64[1] = 31LL;
  v20.m128i_i64[0] = (__int64)L"HomeAllowTimeBetweenClicksInSec";
  v22 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v4);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeDistanceWeight";
  v20.m128i_i64[1] = 18LL;
  v23 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_Z";
  v20.m128i_i64[1] = 29LL;
  v24 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v6);
    __debugbreak();
  }
  v20.m128i_i64[1] = 29LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_Y";
  v25 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  v20.m128i_i64[1] = 29LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumWeightedDistance_X";
  v26 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v8);
    __debugbreak();
  }
  v20.m128i_i64[1] = 31LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_Z";
  v27 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v9);
    __debugbreak();
  }
  v20.m128i_i64[1] = 31LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_Y";
  v28 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
    __debugbreak();
  }
  v20.m128i_i64[1] = 31LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumLinearAcceleration_X";
  v29 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
    __debugbreak();
  }
  v20.m128i_i64[1] = 32LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_Z";
  v30 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v12);
    __debugbreak();
  }
  v20.m128i_i64[1] = 32LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_Y";
  v31 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
    __debugbreak();
  }
  v20.m128i_i64[1] = 32LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumAngularAcceleration_X";
  v32 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v14);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_Z";
  v20.m128i_i64[1] = 27LL;
  v33 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
    __debugbreak();
  }
  v20.m128i_i64[1] = 27LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_Y";
  v34 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v16);
    __debugbreak();
  }
  v20.m128i_i64[1] = 27LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumLinearVelocity_X";
  v35 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v17);
    __debugbreak();
  }
  v20.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_Z";
  v20.m128i_i64[1] = 28LL;
  v36 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
    __debugbreak();
  }
  v20.m128i_i64[1] = 28LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_Y";
  v37 = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v19);
    __debugbreak();
  }
  v20.m128i_i64[1] = 28LL;
  v20.m128i_i64[0] = (__int64)L"HomeMaximumAngularVelocity_X";
  v38[0] = MPCConstantManager::GetStaticConstant<float>((__int64)MPCConstantManager::s_instance, 0x2000, &v20);
  ISMTracing::MPCSixDofProcessor_HomeEventTuneablesChanged<float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,float,unsigned long>(
    v38,
    &v37,
    &v36,
    &v35,
    &v34,
    &v33,
    &v32,
    &v31,
    &v30,
    &v29,
    &v28,
    &v27,
    &v26,
    &v25,
    &v24,
    &v23,
    &v22,
    &v21,
    &Static,
    (unsigned int *)&v42);
}
