/*
 * XREFs of ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800281E0
 * Callers:
 *     ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F3A4 (-RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180021BF0 (-Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 *     ?RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180193EFC (-RuntimeClassInitialize@MPCGamepadProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180199C4C (-RuntimeClassInitialize@PTPProcessor@@QEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180027D50 (-CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputT.c)
 *     ?ValidateParams@@YAJPEBUInputProcessorCreateParams@@_N@Z @ 0x180028AA0 (-ValidateParams@@YAJPEBUInputProcessorCreateParams@@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsSingleBit@@YAHJ@Z @ 0x18003AC28 (-IsSingleBit@@YAHJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateChildInputProcessor(int a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // r9d
  int InputProcessorWorker; // eax
  unsigned int v13; // ebx
  int v15[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(GUID *)v15 = GUID_NULL;
  if ( !(unsigned int)IsSingleBit(a1) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAA,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      v15[0]);
    __debugbreak();
  }
  v6 = ValidateParams((const struct InputProcessorCreateParams *)a2, 1);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)(unsigned int)v6,
      v15[0]);
    __debugbreak();
  }
  if ( (*(int (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a2 + 16) + 24LL))(*(_QWORD *)(a2 + 16), v15) < 0 )
    goto LABEL_20;
  v7 = *(_QWORD *)&GUID_NULL.Data1 - *(_QWORD *)v15;
  if ( *(_QWORD *)&GUID_NULL.Data1 == *(_QWORD *)v15 )
    v7 = *(_QWORD *)GUID_NULL.Data4 - *(_QWORD *)&v15[2];
  if ( !v7 )
  {
LABEL_20:
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070490LL,
      v15[0]);
    JUMPOUT(0x18005D778LL);
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = 48LL * v8;
    v10 = *(_QWORD *)v15 - *(_QWORD *)((char *)&unk_180206000 + v9);
    if ( *(_QWORD *)v15 == *(_QWORD *)((char *)&unk_180206000 + v9) )
      v10 = *(_QWORD *)&v15[2] - *(_QWORD *)((char *)&unk_180206000 + v9 + 8);
    if ( !v10 )
      break;
    if ( (unsigned int)++v8 >= 0x13 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD3,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
        (const char *)0x80070490LL,
        v15[0]);
      __debugbreak();
    }
  }
  v11 = v8 + 1;
  if ( *(_DWORD *)((char *)&unk_180206000 + v9 + 16) != a1 )
    v11 = 0;
  InputProcessorWorker = CreateInputProcessorWorker((_QWORD *)a2, a3, a1, v11);
  v13 = InputProcessorWorker;
  if ( InputProcessorWorker >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCF,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
    (const char *)(unsigned int)InputProcessorWorker,
    v15[0]);
  return v13;
}
