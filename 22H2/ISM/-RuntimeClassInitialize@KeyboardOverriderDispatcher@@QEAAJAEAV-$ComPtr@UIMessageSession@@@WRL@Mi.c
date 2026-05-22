/*
 * XREFs of ?RuntimeClassInitialize@KeyboardOverriderDispatcher@@QEAAJAEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Z @ 0x18002C0B8
 * Callers:
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x18002C01C (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 * Callees:
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029D84 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C5DC (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ??4?$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002C644 (--4-$ComPtr@UIMessageSession@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardOverriderDispatcher::RuntimeClassInitialize(_QWORD *a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, const wchar_t *, _QWORD *); // rbx
  _QWORD *v8; // rdi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD *, _QWORD, _QWORD); // rbp
  __int64 v11; // rcx
  __int64 v13; // rdx
  const char *v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  char v16; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v18; // [rsp+70h] [rbp+8h] BYREF

  v18 = 0;
  v15 = 0LL;
  v16 = 0;
  v2 = a1 + 97;
  Microsoft::WRL::ComPtr<IMessageSession>::operator=(a1 + 97);
  v4 = InputSecurityDescriptor::QueryDescriptor(&v15, v3, L"KeyboardOverriderDispatcher");
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 69LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboard"
                    "overriderdispatcher.cpp",
      (const char *)(unsigned int)v4,
      (int)v14);
    goto LABEL_9;
  }
  v6 = *v2;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, _QWORD *))(*(_QWORD *)v6 + 56LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a1 + 99);
  v4 = v7(v6, v15, L"KeyboardOverriderDispatcher", a1 + 99);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 74LL;
    goto LABEL_15;
  }
  v8 = a1 + 98;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(a1 + 98);
  v4 = CoreUIFactoryCreate(a1 + 98);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 76LL;
    goto LABEL_15;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v8 + 24LL))(
         *v8,
         &GUID_2c657f91_d10a_486d_b793_25a3c5057719,
         &v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 80LL;
    goto LABEL_15;
  }
  v9 = *v8;
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD, _QWORD))(*(_QWORD *)v9 + 32LL);
  v11 = a1[100];
  if ( v11 )
  {
    a1[100] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v14 = L"System\\LowLevelKeyboardOverriderCallback";
  v4 = v10(v9, a1, 0LL, v18);
  v5 = v4;
  if ( v4 < 0 )
  {
    v13 = 88LL;
    goto LABEL_15;
  }
  v5 = 0;
LABEL_9:
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v15);
  return v5;
}
