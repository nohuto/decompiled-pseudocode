/*
 * XREFs of ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18007AE54
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006B454 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800280BC (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x18006B0DC (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18007A504 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::AttachProvider(__int64 **a1, __int64 *a2)
{
  __int64 *v4; // rsi
  __int64 *v5; // r12
  __int64 v6; // rbx
  bool v7; // di
  const char *v8; // r9
  __int64 *v9; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+68h] [rbp+10h]
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = a2;
  wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v12, *a2);
  v4 = a1[115];
  v5 = a1[116];
  if ( v4 != v5 )
  {
    v6 = v12;
    do
    {
      wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v14, *v4);
      v7 = v14 == v6;
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v14);
      if ( v7 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v12);
  v9 = a1[116];
  if ( v4 != v9 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      410LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v8);
    __debugbreak();
  }
  if ( a1[117] == v9 )
    std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
      a1 + 115,
      a1[116],
      a2);
  else
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(a1[116]++, *a2);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
