/*
 * XREFs of _lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator() @ 0x18018B758
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18018E604 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall lambda_73ee74375a7aa9a7d53c1e011ef1d674_::operator()(_QWORD *a1, float a2, float a3, const char *a4)
{
  char v4; // bl
  float v6; // xmm7_4
  __int64 v7; // rdx
  float v8; // xmm7_4
  __int64 v9; // rdx
  float v10; // xmm7_4
  __int64 v11; // rdx
  char v12; // r12
  float v13; // xmm7_4
  __int64 v14; // rdx
  float v15; // xmm7_4
  __int64 v16; // rdx
  float v17; // xmm7_4
  __int64 v18; // rdx
  char v19; // r15
  float v20; // xmm7_4
  __int64 v21; // rdx
  float v22; // xmm7_4
  __int64 v23; // rdx
  float v24; // xmm7_4
  __int64 v25; // rdx
  char v26; // r14
  float v27; // xmm7_4
  __int64 v28; // rdx
  const char *v29; // r9
  float v30; // xmm7_4
  __int64 v31; // rdx
  const char *v32; // r9
  float v33; // xmm7_4
  __int64 v34; // rdx
  char v35; // si
  __int64 v36; // rcx
  float v37; // xmm7_4
  __int64 v38; // rcx
  float v39; // xmm7_4
  __int64 v40; // rcx
  float v41; // xmm7_4
  char v42; // al
  __int128 v44[3]; // [rsp+20h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = 0;
  if ( !*(_BYTE *)(*a1 + 101LL) )
    goto LABEL_12;
  LODWORD(v6) = *(_DWORD *)(*a1 + 76LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v7 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumAngularVelocity_X";
  *((_QWORD *)&v44[0] + 1) = 28LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v7 + 24) & -(__int64)(v7 != 0)),
    v44);
  if ( v6 > (float)(COERCE_FLOAT(L"HomeMaximumAngularVelocity_X") * a3) )
    goto LABEL_11;
  LODWORD(v8) = *(_DWORD *)(*a1 + 80LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumAngularVelocity_Y";
  *((_QWORD *)&v44[0] + 1) = 28LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v9 + 24) & -(__int64)(v9 != 0)),
    v44);
  if ( v8 > (float)(COERCE_FLOAT(L"HomeMaximumAngularVelocity_Y") * a3) )
    goto LABEL_11;
  LODWORD(v10) = *(_DWORD *)(*a1 + 84LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v11 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumAngularVelocity_Z";
  *((_QWORD *)&v44[0] + 1) = 28LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v11 + 24) & -(__int64)(v11 != 0)),
    v44);
  if ( v10 > (float)(COERCE_FLOAT(L"HomeMaximumAngularVelocity_Z") * a3) )
LABEL_11:
    v12 = 1;
  else
LABEL_12:
    v12 = 0;
  if ( !*(_BYTE *)(*a1 + 100LL) )
    goto LABEL_24;
  LODWORD(v13) = *(_DWORD *)(*a1 + 64LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v14 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumLinearVelocity_X";
  *((_QWORD *)&v44[0] + 1) = 27LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v14 + 24) & -(__int64)(v14 != 0)),
    v44);
  if ( v13 > (float)(COERCE_FLOAT(L"HomeMaximumLinearVelocity_X") * a2) )
    goto LABEL_23;
  LODWORD(v15) = *(_DWORD *)(*a1 + 68LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v16 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumLinearVelocity_Y";
  *((_QWORD *)&v44[0] + 1) = 27LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v16 + 24) & -(__int64)(v16 != 0)),
    v44);
  if ( v15 > (float)(COERCE_FLOAT(L"HomeMaximumLinearVelocity_Y") * a2) )
    goto LABEL_23;
  LODWORD(v17) = *(_DWORD *)(*a1 + 72LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v18 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumLinearVelocity_Z";
  *((_QWORD *)&v44[0] + 1) = 27LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v18 + 24) & -(__int64)(v18 != 0)),
    v44);
  if ( v17 > (float)(COERCE_FLOAT(L"HomeMaximumLinearVelocity_Z") * a2) )
LABEL_23:
    v19 = 1;
  else
LABEL_24:
    v19 = 0;
  if ( !*(_BYTE *)(*a1 + 101LL) )
    goto LABEL_36;
  LODWORD(v20) = *(_DWORD *)a1[2] & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v21 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumAngularAcceleration_X";
  *((_QWORD *)&v44[0] + 1) = 32LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v21 + 24) & -(__int64)(v21 != 0)),
    v44);
  if ( v20 > (float)(COERCE_FLOAT(L"HomeMaximumAngularAcceleration_X") * a3) )
    goto LABEL_35;
  LODWORD(v22) = *(_DWORD *)(a1[2] + 4LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v23 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumAngularAcceleration_Y";
  *((_QWORD *)&v44[0] + 1) = 32LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v23 + 24) & -(__int64)(v23 != 0)),
    v44);
  if ( v22 > (float)(COERCE_FLOAT(L"HomeMaximumAngularAcceleration_Y") * a3) )
    goto LABEL_35;
  LODWORD(v24) = *(_DWORD *)(a1[2] + 8LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v25 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumAngularAcceleration_Z";
  *((_QWORD *)&v44[0] + 1) = 32LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v25 + 24) & -(__int64)(v25 != 0)),
    v44);
  if ( v24 > (float)(COERCE_FLOAT(L"HomeMaximumAngularAcceleration_Z") * a3) )
LABEL_35:
    v26 = 1;
  else
LABEL_36:
    v26 = 0;
  if ( !*(_BYTE *)(*a1 + 100LL) )
    goto LABEL_48;
  LODWORD(v27) = *(_DWORD *)a1[3] & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
    __debugbreak();
  }
  v28 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumLinearAcceleration_X";
  *((_QWORD *)&v44[0] + 1) = 31LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v28 + 24) & -(__int64)(v28 != 0)),
    v44);
  if ( v27 > (float)(COERCE_FLOAT(L"HomeMaximumLinearAcceleration_X") * a2) )
    goto LABEL_47;
  LODWORD(v30) = *(_DWORD *)(a1[3] + 4LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v29);
    __debugbreak();
  }
  v31 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumLinearAcceleration_Y";
  *((_QWORD *)&v44[0] + 1) = 31LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v31 + 24) & -(__int64)(v31 != 0)),
    v44);
  if ( v30 > (float)(COERCE_FLOAT(L"HomeMaximumLinearAcceleration_Y") * a2) )
    goto LABEL_47;
  LODWORD(v33) = *(_DWORD *)(a1[3] + 8LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v32);
    __debugbreak();
  }
  v34 = a1[1];
  *(_QWORD *)&v44[0] = L"HomeMaximumLinearAcceleration_Z";
  *((_QWORD *)&v44[0] + 1) = 31LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v34 + 24) & -(__int64)(v34 != 0)),
    v44);
  if ( v33 > (float)(COERCE_FLOAT(L"HomeMaximumLinearAcceleration_Z") * a2) )
LABEL_47:
    v35 = 1;
  else
LABEL_48:
    v35 = 0;
  v36 = a1[1];
  if ( !*(_BYTE *)(v36 + 7609) )
    goto LABEL_60;
  LODWORD(v37) = *(_DWORD *)(v36 + 5236) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
    __debugbreak();
  }
  *(_QWORD *)&v44[0] = L"HomeMaximumWeightedDistance_X";
  *((_QWORD *)&v44[0] + 1) = 29LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v36 + 24) & -(__int64)(v36 != 0)),
    v44);
  if ( v37 > COERCE_FLOAT(L"HomeMaximumWeightedDistance_X") )
    goto LABEL_59;
  v38 = a1[1];
  LODWORD(v39) = *(_DWORD *)(v38 + 5240) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
    __debugbreak();
  }
  *((_QWORD *)&v44[0] + 1) = 29LL;
  *(_QWORD *)&v44[0] = L"HomeMaximumWeightedDistance_Y";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v38 + 24) & -(__int64)(v38 != 0)),
    v44);
  if ( v39 > COERCE_FLOAT(L"HomeMaximumWeightedDistance_Y") )
    goto LABEL_59;
  v40 = a1[1];
  LODWORD(v41) = *(_DWORD *)(v40 + 5244) & _xmm;
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
    __debugbreak();
  }
  *((_QWORD *)&v44[0] + 1) = 29LL;
  *(_QWORD *)&v44[0] = L"HomeMaximumWeightedDistance_Z";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)((v40 + 24) & -(__int64)(v40 != 0)),
    v44);
  if ( v41 > COERCE_FLOAT(L"HomeMaximumWeightedDistance_Z") )
LABEL_59:
    v42 = 1;
  else
LABEL_60:
    v42 = 0;
  if ( v12 || v19 || v26 || v35 || v42 )
    return 1;
  return v4;
}
