/*
 * XREFs of ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180022278
 * Callers:
 *     ??0TestCommandHost@@AEAA@XZ @ 0x1800223C0 (--0TestCommandHost@@AEAA@XZ.c)
 * Callees:
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x180029D84 (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18002C5DC (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F94C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall TestCommandHost::CreateEndpointToReceiveMessages(TestCommandHost *this, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64, const wchar_t *, char *); // rbx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64 *); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  int v13; // [rsp+20h] [rbp-38h]
  int v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  char v16; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0LL;
  v16 = 0;
  v3 = InputSecurityDescriptor::QueryDescriptor(&v15, a2, c_wszMessagePortNames);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v3,
      v13);
    __debugbreak();
  }
  v4 = *(_QWORD *)this;
  v5 = *(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(**(_QWORD **)this + 56LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 16);
  v6 = v5(v4, v15, L"System\\Input\\TestCommandsPort", (char *)this + 16);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x6D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v6,
      v13);
    __debugbreak();
  }
  v14 = (_DWORD)this + 24;
  v7 = (*(__int64 (__fastcall **)(_QWORD, int (*)(void *, const void *, int), TestCommandHost *, _QWORD))(**(_QWORD **)this + 96LL))(
         *(_QWORD *)this,
         TestCommandHost::OnCoreMessageStatic,
         this,
         *((_QWORD *)this + 2));
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x73,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v7,
      v14);
LABEL_10:
    wil::details::in1diag3::_Throw_Hr(
      v11,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v10,
      v14);
    __debugbreak();
  }
  v18 = 0LL;
  v8 = *(_QWORD *)this;
  v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(**(_QWORD **)this + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
  v10 = v9(v8, &v18);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_10;
  v12 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, __int64))(*(_QWORD *)v18 + 40LL))(
          v18,
          L"System\\Input\\TestCommandsEndpoint",
          *((_QWORD *)this + 3),
          1LL);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v12,
      v14);
    JUMPOUT(0x180058A42LL);
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v18);
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v15);
}
