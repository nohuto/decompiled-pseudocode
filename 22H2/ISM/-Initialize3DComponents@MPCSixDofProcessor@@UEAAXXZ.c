/*
 * XREFs of ?Initialize3DComponents@MPCSixDofProcessor@@UEAAXXZ @ 0x18018CFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007ACD0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18007D1EC (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18007D230 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D654 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D68C (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 *     std::call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___ @ 0x18018B22C (std--call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___.c)
 */

void __fastcall MPCSixDofProcessor::Initialize3DComponents(MPCSixDofProcessor *this)
{
  char *v1; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rcx
  const char *v7; // r9
  __int64 *v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // rax
  __int64 v12; // rcx
  const char *v13; // r9
  __int64 *v14; // rax
  __int64 v15; // rcx
  const char *v16; // r9
  __int64 *v17; // rax
  __int64 v18; // rcx
  const char *v19; // r9
  __int64 *v20; // rax
  __int64 v21; // rcx
  const char *v22; // r9
  const char *v23; // r9
  _QWORD *v24; // rax
  const char *v25; // r9
  void *v26; // rsi
  std::_Ref_count_base *v27; // rcx
  const char *v28; // r9
  _QWORD *v29; // rax
  void *v30; // rdi
  std::_Ref_count_base *v31; // rcx
  __int128 v32; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 (__fastcall ***v34)(_QWORD, __int64); // [rsp+60h] [rbp+30h] BYREF
  __int64 (__fastcall ***v35)(_QWORD, __int64); // [rsp+68h] [rbp+38h] BYREF
  void *v36; // [rsp+70h] [rbp+40h] BYREF
  void *v37; // [rsp+78h] [rbp+48h] BYREF

  v1 = (char *)this - 24;
  v34 = (__int64 (__fastcall ***)(_QWORD, __int64))((char *)this - 24);
  std::call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___((__int64)this, (__int64)&v34);
  LODWORD(v34) = 0;
  v3 = std::make_unique<MPCButtonHoldHelper,float,0>(&v35, (float *)&v34);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 619, v3);
  if ( v35 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v4, v35);
  v5 = std::make_unique<MPCButtonHoldHelper,float,0>(&v34, &flt_1801C6F64);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 620, v5);
  if ( v34 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v6, v34);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    __debugbreak();
  }
  *((_QWORD *)&v32 + 1) = 24LL;
  *(_QWORD *)&v32 = L"DragModeTriggerTimeInSec";
  v8 = (__int64 *)((unsigned __int64)this & -(__int64)(v1 != 0LL));
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v34) = (unsigned int)L"DragModeTriggerTimeInSec";
  v9 = std::make_unique<MPCButtonHoldHelper,float,0>(&v35, (float *)&v34);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 621, v9);
  if ( v35 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v10, v35);
  LODWORD(v34) = 0;
  v11 = std::make_unique<MPCButtonHoldHelper,float,0>(&v35, (float *)&v34);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 622, v11);
  if ( v35 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v12, v35);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
    __debugbreak();
  }
  *((_QWORD *)&v32 + 1) = 30LL;
  *(_QWORD *)&v32 = L"TouchpadReleasedTimeoutSeconds";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v34) = (unsigned int)L"TouchpadReleasedTimeoutSeconds";
  v14 = std::make_unique<MPCButtonHoldHelper,float,0>(&v36, (float *)&v34);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 623, v14);
  if ( v36 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(
      v15,
      (__int64 (__fastcall ***)(_QWORD, __int64))v36);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v16);
    __debugbreak();
  }
  *((_QWORD *)&v32 + 1) = 29LL;
  *(_QWORD *)&v32 = L"TouchpadTouchedTimeoutSeconds";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v34) = (unsigned int)L"TouchpadTouchedTimeoutSeconds";
  v17 = std::make_unique<MPCButtonHoldHelper,float,0>(&v35, (float *)&v34);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 624, v17);
  if ( v35 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v18, v35);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v19);
    __debugbreak();
  }
  *(_QWORD *)&v32 = L"TouchpadDeltaSmoothingTimeoutSec";
  *((_QWORD *)&v32 + 1) = 32LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v34) = (unsigned int)L"TouchpadDeltaSmoothingTimeoutSec";
  v20 = std::make_unique<MPCButtonHoldHelper,float,0>(&v36, (float *)&v34);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)this + 625, v20);
  if ( v36 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(
      v21,
      (__int64 (__fastcall ***)(_QWORD, __int64))v36);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v22);
    __debugbreak();
  }
  *((_QWORD *)&v32 + 1) = 27LL;
  *(_QWORD *)&v32 = L"TouchpadTemporalDeadzoneSec";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v34) = (unsigned int)L"TouchpadTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v23);
    __debugbreak();
  }
  *((_QWORD *)&v32 + 1) = 20LL;
  *(_QWORD *)&v32 = L"TouchpadXYDeadzone1M";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v35) = (unsigned int)L"TouchpadXYDeadzone1M";
  v24 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v37, (float *)&v35, (float *)&v34);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 626, v24);
  v26 = v37;
  if ( v37 )
  {
    v27 = (std::_Ref_count_base *)*((_QWORD *)v37 + 3);
    if ( v27 )
      std::_Ref_count_base::_Decref(v27);
    operator delete(v26, (const struct std::nothrow_t *)0x20);
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v25);
    JUMPOUT(0x18018D46CLL);
  }
  *((_QWORD *)&v32 + 1) = 26LL;
  *(_QWORD *)&v32 = L"TriggerTemporalDeadzoneSec";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v34) = (unsigned int)L"TriggerTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v28);
    __debugbreak();
  }
  *((_QWORD *)&v32 + 1) = 19LL;
  *(_QWORD *)&v32 = L"TriggerXYDeadzone1M";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v8, &v32);
  LODWORD(v35) = (unsigned int)L"TriggerXYDeadzone1M";
  v29 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v36, (float *)&v35, (float *)&v34);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)this + 627, v29);
  v30 = v36;
  if ( v36 )
  {
    v31 = (std::_Ref_count_base *)*((_QWORD *)v36 + 3);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
    operator delete(v30, (const struct std::nothrow_t *)0x20);
  }
  *((_BYTE *)this + 4515) = 1;
}
