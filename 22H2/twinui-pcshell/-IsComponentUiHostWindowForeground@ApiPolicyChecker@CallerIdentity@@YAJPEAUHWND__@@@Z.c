/*
 * XREFs of ?IsComponentUiHostWindowForeground@ApiPolicyChecker@CallerIdentity@@YAJPEAUHWND__@@@Z @ 0x1804DAA80
 * Callers:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18002B280 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::IsComponentUiHostWindowForeground(
        CallerIdentity::ApiPolicyChecker *this,
        HWND a2)
{
  HWND Ancestor; // rdi
  unsigned int v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-50h] BYREF
  __int64 v8; // [rsp+28h] [rbp-48h] BYREF
  _BYTE v9[4]; // [rsp+30h] [rbp-40h] BYREF
  HWND hwnd; // [rsp+34h] [rbp-3Ch]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h]

  Ancestor = 0LL;
  v3 = (unsigned int)this;
  v8 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.Shell.Popups.PopupClient",
    0x2Au,
    0x29u);
  v4 = v12;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  if ( (int)RoGetActivationFactory(v4, &GUID_b2571928_3f1d_4f6d_8930_fd9f7d5a69fc, &v8) >= 0 )
  {
    v5 = v8;
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 56LL))(v5, v3, &v7) >= 0
      && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v7 + 72LL))(v7, v9) >= 0 )
    {
      if ( (_DWORD)hwnd )
        Ancestor = GetAncestor((HWND)(unsigned int)hwnd, 2u);
      LOBYTE(Ancestor) = GetForegroundWindow() == Ancestor;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return (_BYTE)Ancestor == 0 ? 0x80070005 : 0;
}
