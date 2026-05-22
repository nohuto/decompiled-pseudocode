/*
 * XREFs of ?Initialize3DComponents@MPCHandProcessor@@UEAAXXZ @ 0x18007DFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18007ACD0 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007CB88 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     std::call_once__lambda_b16aee874608ec8ce55934157fa7dff9___ @ 0x18007D138 (std--call_once__lambda_b16aee874608ec8ce55934157fa7dff9___.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x18007D1EC (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA?AV?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@0@$$QEAM0@Z @ 0x18007D230 (--$make_unique@VMPCSlateDeadzoneHelper@@MM$0A@@std@@YA-AV-$unique_ptr@VMPCSlateDeadzoneHelper@@U.c)
 *     ??4?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D654 (--4-$unique_ptr@VMPCButtonHoldHelper@@U-$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAE.c)
 *     ??4?$unique_ptr@VMPCSlateDeadzoneHelper@@U?$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18007D68C (--4-$unique_ptr@VMPCSlateDeadzoneHelper@@U-$default_delete@VMPCSlateDeadzoneHelper@@@std@@@std@@.c)
 */

void __fastcall MPCHandProcessor::Initialize3DComponents(__int64 this)
{
  char *v1; // rdi
  const char *v3; // r9
  __int64 *v4; // rdi
  const char *v5; // r9
  _QWORD *v6; // rax
  const char *v7; // r9
  void *v8; // rsi
  std::_Ref_count_base *v9; // rcx
  const char *v10; // r9
  _QWORD *v11; // rax
  void *v12; // rdi
  std::_Ref_count_base *v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  char *v18; // [rsp+60h] [rbp+28h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, __int64); // [rsp+68h] [rbp+30h] BYREF
  void *v20; // [rsp+70h] [rbp+38h] BYREF
  void *v21; // [rsp+78h] [rbp+40h] BYREF

  v1 = (char *)(this - 24);
  v18 = (char *)(this - 24);
  std::call_once__lambda_b16aee874608ec8ce55934157fa7dff9___(this, (__int64)&v18);
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v3);
    __debugbreak();
  }
  *((_QWORD *)&v16 + 1) = 31LL;
  *(_QWORD *)&v16 = L"RayInjectionTemporalDeadzoneSec";
  v4 = (__int64 *)(this & -(__int64)(v1 != 0LL));
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v4, &v16);
  LODWORD(v18) = (unsigned int)L"RayInjectionTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
    __debugbreak();
  }
  *((_QWORD *)&v16 + 1) = 24LL;
  *(_QWORD *)&v16 = L"RayInjectionXYDeadzone1M";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v4, &v16);
  LODWORD(v19) = (unsigned int)L"RayInjectionXYDeadzone1M";
  v6 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v20, (float *)&v19, (float *)&v18);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)(this + 4616), v6);
  v8 = v20;
  if ( v20 )
  {
    v9 = (std::_Ref_count_base *)*((_QWORD *)v20 + 3);
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    operator delete(v8, (const struct std::nothrow_t *)0x20);
  }
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
    JUMPOUT(0x18007E1DFLL);
  }
  *((_QWORD *)&v16 + 1) = 24LL;
  *(_QWORD *)&v16 = L"TouchTemporalDeadzoneSec";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v4, &v16);
  LODWORD(v18) = (unsigned int)L"TouchTemporalDeadzoneSec";
  if ( !MPCConstantManager::s_instance )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
    __debugbreak();
  }
  *((_QWORD *)&v16 + 1) = 17LL;
  *(_QWORD *)&v16 = L"TouchXYDeadzone1M";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v4, &v16);
  LODWORD(v19) = (unsigned int)L"TouchXYDeadzone1M";
  v11 = std::make_unique<MPCSlateDeadzoneHelper,float,float,0>(&v21, (float *)&v19, (float *)&v18);
  std::unique_ptr<MPCSlateDeadzoneHelper>::operator=((_QWORD **)(this + 4624), v11);
  v12 = v21;
  if ( v21 )
  {
    v13 = (std::_Ref_count_base *)*((_QWORD *)v21 + 3);
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    operator delete(v12, (const struct std::nothrow_t *)0x20);
  }
  LODWORD(v18) = 0;
  v14 = std::make_unique<MPCButtonHoldHelper,float,0>(&v19, (float *)&v18);
  std::unique_ptr<MPCButtonHoldHelper>::operator=((__int64 *)(this + 4632), v14);
  if ( v19 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v15, v19);
  *(_BYTE *)(this + 4515) = 1;
}
