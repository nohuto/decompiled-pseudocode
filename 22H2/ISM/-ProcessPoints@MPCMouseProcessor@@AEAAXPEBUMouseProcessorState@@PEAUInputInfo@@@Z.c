/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x180196C9C
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801953B0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011A40 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x18004B25B (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079E78 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x180193558 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  const char *v5; // r9
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm6_4
  const char *v13; // r9
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  const char *v18; // r9
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm6_4
  const char *v24; // r9
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  float v28; // xmm1_4
  float v29; // xmm6_4
  const char *v30; // r9
  struct BamoMPCConstantManagerClientPrincipal *v31; // rcx
  float v32; // xmm0_4
  float v33; // xmm6_4
  const char *v34; // r9
  struct BamoMPCConstantManagerClientPrincipal *v35; // rcx
  float v36; // xmm0_4
  float v37; // xmm6_4
  struct MPCHolographicInputManager *v38; // rax
  struct MPCHolographicInputManager *v39; // rax
  float *v40; // rax
  __int128 v41; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+30h] [rbp-D8h]
  float v43[16]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v44[952]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v45; // [rsp+430h] [rbp+328h]
  __int128 v46; // [rsp+440h] [rbp+338h]
  __int128 v47; // [rsp+450h] [rbp+348h]
  __int128 v48; // [rsp+460h] [rbp+358h]
  __int128 v49; // [rsp+968h] [rbp+860h] BYREF
  __int128 v50; // [rsp+978h] [rbp+870h]
  __int128 v51; // [rsp+988h] [rbp+880h]
  __int128 v52; // [rsp+998h] [rbp+890h]
  wil::details::in1diag3 *retaddr; // [rsp+A50h] [rbp+948h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v44, Instance, 0x8F0uLL);
  v49 = v45;
  v50 = v46;
  v51 = v47;
  v52 = v48;
  MPCMath::OrientToGravity((__int64)v43, (__int64)&v49, 0.89999998);
  v6 = v43[4];
  v7 = v43[5];
  v8 = v43[6];
  v9 = v43[8];
  v10 = v43[9];
  v11 = v43[10];
  v12 = (float)*((int *)this + 1562);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
    __debugbreak();
  }
  *((_QWORD *)&v41 + 1) = L"MouseParams_PointScaleFactorXY";
  v42 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v41 + 8));
  v14 = COERCE_FLOAT(L"MouseParams_PointScaleFactorXY") * v12;
  v15 = (float)(v14 * v43[1]) + *((float *)this + 1572);
  v16 = (float)(v14 * v43[2]) + *((float *)this + 1573);
  *((float *)this + 1571) = (float)(v14 * v43[0]) + *((float *)this + 1571);
  *((float *)this + 1572) = v15;
  *((float *)this + 1573) = v16;
  v17 = (float)*((int *)this + 1563);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
    __debugbreak();
  }
  *((_QWORD *)&v41 + 1) = L"MouseParams_PointScaleFactorXY";
  v42 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v41 + 8));
  LODWORD(v19) = COERCE_UNSIGNED_INT(COERCE_FLOAT(L"MouseParams_PointScaleFactorXY") * v17) ^ _xmm;
  v20 = (float)(v19 * v6) + *((float *)this + 1571);
  v21 = (float)(v19 * v7) + *((float *)this + 1572);
  v22 = (float)(v19 * v8) + *((float *)this + 1573);
  *((float *)this + 1571) = v20;
  *((float *)this + 1572) = v21;
  *((float *)this + 1573) = v22;
  v23 = (float)*((int *)this + 1565);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
    __debugbreak();
  }
  v42 = 33LL;
  *((_QWORD *)&v41 + 1) = L"MouseParams_PointScaleFactorWheel";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v41 + 8));
  LODWORD(v25) = COERCE_UNSIGNED_INT(COERCE_FLOAT(L"MouseParams_PointScaleFactorWheel") * v23) ^ _xmm;
  v26 = (float)(v25 * v9) + *((float *)this + 1571);
  v27 = (float)(v25 * v10) + *((float *)this + 1572);
  v28 = (float)(v25 * v11) + *((float *)this + 1573);
  *((float *)this + 1571) = v26;
  *((float *)this + 1572) = v27;
  *((float *)this + 1573) = v28;
  v29 = (float)*((int *)this + 1562);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v24);
    __debugbreak();
  }
  *((_QWORD *)&v41 + 1) = L"MouseParams_PointScaleFactorXY";
  v42 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64 *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v41 + 8));
  v31 = MPCConstantManager::s_instance;
  v32 = COERCE_FLOAT(L"MouseParams_PointScaleFactorXY") * v29;
  v33 = (float)*((int *)this + 1563);
  *((float *)this + 1574) = v32 + *((float *)this + 1574);
  if ( !v31 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v30);
    __debugbreak();
  }
  *((_QWORD *)&v41 + 1) = L"MouseParams_PointScaleFactorXY";
  v42 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)v31,
    (__int64 *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v41 + 8));
  v35 = MPCConstantManager::s_instance;
  v36 = COERCE_FLOAT(L"MouseParams_PointScaleFactorXY") * v33;
  v37 = (float)*((int *)this + 1565);
  *((float *)this + 1575) = COERCE_FLOAT(LODWORD(v36) ^ _xmm) + *((float *)this + 1575);
  if ( !v35 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v34);
    __debugbreak();
  }
  *((_QWORD *)&v41 + 1) = L"MouseParams_PointScaleFactorWheel";
  v42 = 33LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)v35,
    (__int64 *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL)),
    (__int128 *)((char *)&v41 + 8));
  *((float *)this + 1576) = (float)(COERCE_FLOAT(L"MouseParams_PointScaleFactorWheel") * v37) + *((float *)this + 1576);
  if ( (*((_BYTE *)this + 6268) & 0x70) != 0 && !*((_QWORD *)this + 576) )
  {
    v38 = MPCHolographicInputManager::GetInstance();
    *((_QWORD *)this + 784) = *((_QWORD *)v38 + 28);
    *((_DWORD *)this + 1570) = *((_DWORD *)v38 + 58);
    v39 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v44, v39, 0x8F0uLL);
    v49 = v45;
    v50 = v46;
    v51 = v47;
    v52 = v48;
    v40 = Windows::Foundation::Numerics::transform((float *)&v41 + 2, (float *)this + 1568, (float *)&v49);
    *(_QWORD *)((char *)this + 6284) = *(_QWORD *)v40;
    *(float *)&v40 = v40[2];
    LODWORD(v42) = 0;
    *((_DWORD *)this + 1573) = (_DWORD)v40;
    LODWORD(v40) = v42;
    *((_QWORD *)this + 787) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1576) = (_DWORD)v40;
  }
}
