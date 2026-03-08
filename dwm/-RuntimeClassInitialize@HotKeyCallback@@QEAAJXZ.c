/*
 * XREFs of ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000C0EC
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000A694 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000A084 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14000C0B4 (-InternalRelease@-$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKX.c)
 */

__int64 __fastcall HotKeyCallback::RuntimeClassInitialize(HotKeyCallback *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int v4; // edi
  HRESULT v5; // eax
  HSTRING v6; // rbx
  int ActivationFactory; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 (__fastcall *v13)(_QWORD *, HotKeyCallback *, _QWORD, char *); // r14
  char v15; // [rsp+20h] [rbp-58h]
  _QWORD *v16; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-40h] BYREF
  HSTRING string; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (_QWORD *)((char *)this + 40);
  v3 = *((_QWORD *)this + 5);
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = CoreUICreate(v1);
  if ( v4 >= 0 )
  {
    v16 = 0LL;
    string = 0LL;
    v5 = WindowsCreateStringReference(L"Windows.UI.Internal.Text.HotKeyClient", 0x25u, &hstringHeader, &string);
    if ( v5 < 0 )
    {
      RaiseException(v5, 1u, 0, 0LL);
      __debugbreak();
    }
    v6 = string;
    Microsoft::WRL::ComPtr<Windows::UI::Internal::Text::IHotKeyClientStatics>::InternalRelease((__int64 *)&v16);
    ActivationFactory = RoGetActivationFactory(v6, &GUID_85c277be_f4a0_4e27_b776_ebc75727e67a, &v16);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 23LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\dwm\\dwm\\apphost\\hotkeycallback.cpp",
        (const char *)(unsigned int)ActivationFactory);
      Microsoft::WRL::ComPtr<Windows::UI::Internal::Text::IHotKeyClientStatics>::InternalRelease((__int64 *)&v16);
      return v8;
    }
    v10 = v16;
    v11 = *((_QWORD *)this + 4);
    v12 = *v16;
    *((_QWORD *)this + 4) = 0LL;
    v13 = *(__int64 (__fastcall **)(_QWORD *, HotKeyCallback *, _QWORD, char *))(v12 + 48);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    ActivationFactory = v13(v10, this, 0LL, (char *)this + 32);
    v8 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      v9 = 24LL;
      goto LABEL_12;
    }
    v15 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, char))(**((_QWORD **)this + 4) + 48LL))(
      *((_QWORD *)this + 4),
      0LL,
      16398LL,
      66LL,
      v15);
    Microsoft::WRL::ComPtr<Windows::UI::Internal::Text::IHotKeyClientStatics>::InternalRelease((__int64 *)&v16);
  }
  return (unsigned int)v4;
}
