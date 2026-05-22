/*
 * XREFs of ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180193EFC
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180191840 (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F7C0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800281E0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIInputFocusListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEBAPEAPEAXXZ @ 0x180064CA4 (--B-$ComPtrRef@V-$ComPtr@UIInputFocusListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEBAPEAPE.c)
 *     std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___ @ 0x1801919D8 (std--call_once__lambda_c78139b4692b055c43ac45a1104373ed___.c)
 */

__int64 __fastcall MPCGamepadProcessor::RuntimeClassInitialize(
        MPCGamepadProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  unsigned __int64 v2; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // rcx
  int ChildInputProcessor; // eax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, GUID *, char *); // rbp
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rbx
  __int64 *v17; // rax
  int v18; // eax
  int v20[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = (unsigned __int64)this + 8;
  v5 = MPCInputProviderBase::RuntimeClassInitialize((MPCGamepadProcessor *)((char *)this + 8), a2);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      31LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v23 = (__int64 *)this;
  std::call_once__lambda_c78139b4692b055c43ac45a1104373ed___(v6, (__int64)&v23);
  *(_OWORD *)v20 = *(_OWORD *)a2;
  v7 = v2 & -(__int64)(this != 0LL);
  v8 = (char *)this + 4640;
  v21 = v7;
  v9 = *((_QWORD *)this + 580);
  if ( v9 )
  {
    *(_QWORD *)v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ChildInputProcessor = CreateChildInputProcessor(64, (__int64)v20, (__int64)this + 4640);
  if ( ChildInputProcessor < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)ChildInputProcessor);
    __debugbreak();
  }
  v11 = *(_QWORD *)v8;
  v12 = *((_QWORD *)this + 581);
  v13 = ***(__int64 (__fastcall ****)(__int64, GUID *, char *))v8;
  if ( v12 )
  {
    *((_QWORD *)this + 581) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v14 = v13(v11, &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8, (char *)this + 4648);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      45LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v8;
  v23 = (__int64 *)((char *)this + 4656);
  v16 = **v15;
  v17 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInputFocusListener>>::operator void * *(&v23);
  v18 = v16(v15, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, v17);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      49LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
      (const char *)(unsigned int)v18);
    JUMPOUT(0x180194087LL);
  }
  return 0LL;
}
