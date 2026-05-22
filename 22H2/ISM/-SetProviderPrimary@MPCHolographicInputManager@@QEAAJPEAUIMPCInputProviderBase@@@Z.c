/*
 * XREFs of ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180078BAC
 * Callers:
 *     ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180075A50 (-DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800785C0 (-RemoveInputProvider@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180197F8C (-RuntimeClassInitialize@MPCHeadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001FAE4 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?clear@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x180079658 (-clear@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

__int64 __fastcall MPCHolographicInputManager::SetProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4)
{
  __int64 *v4; // r14
  __int64 *i; // rbx
  struct IMPCInputProviderBase *v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IMPCInputProviderBase *v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 *)*((_QWORD *)this + 290);
  for ( i = (__int64 *)*((_QWORD *)this + 289); i != v4; ++i )
  {
    v11 = (struct IMPCInputProviderBase *)*i;
    v8 = v11;
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v11);
    if ( v8 )
      (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v8 + 16LL))(v8);
    if ( a2 == v8 )
      break;
  }
  if ( i == *((__int64 **)this + 290) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      282LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::clear((char *)this + 2576);
  MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  return 0LL;
}
