/*
 * XREFs of ?InitializeCursor3D@MPCHolographicInputManager@@AEAAXXZ @ 0x18007616C
 * Callers:
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x180078AF4 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCHolographicInputManager::InitializeCursor3D(MPCHolographicInputManager *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _BYTE *, __int64, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)); // rdi
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v9)(_QWORD, GUID *, char *); // rsi
  int v10; // eax
  __int64 v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+44h] [rbp-BCh]
  int v15; // [rsp+48h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+678h] [rbp+578h]

  v12 = 0LL;
  v11 = 0LL;
  memset_0(v13, 0, 0x60CuLL);
  v15 = 1548;
  v14 = 514;
  v2 = *((_QWORD *)this + 286);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
  v4 = v3(v2, &v11);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1018LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = v11;
  v6 = *(__int64 (__fastcall **)(__int64, _BYTE *, __int64, __int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD)))(*(_QWORD *)v11 + 24LL);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v12);
  v7 = v6(v5, v13, 1LL, (__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))&v12);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1019LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  v9 = **v12;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 292);
  v10 = v9(v8, &GUID_a906d320_9167_4955_a961_8a982929b899, (char *)this + 2336);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1020LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v10);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(&v11);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v12);
}
