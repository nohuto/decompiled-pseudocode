/*
 * XREFs of ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x1802B6E6C
 * Callers:
 *     ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x1802B7060 (-PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ.c)
 *     ?IsDesktopInputContext@@YA_NXZ @ 0x1803F63E4 (-IsDesktopInputContext@@YA_NXZ.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801B34FC (--$GetActivationFactory@V-$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::GetUserInputContext(
        Windows::Internal::Shell::Holographic *this,
        enum Windows::Internal::Shell::Holographic::UserInputContext *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v7 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v8,
    L"Windows.Internal.Shell.Holographic.ContextIdentifier",
    0x35u,
    0x34u);
  v3 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
         v9,
         &v7);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 97LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\internal\\shell\\inc\\HolographicSession.h",
      (const char *)(unsigned int)v3);
    goto LABEL_6;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::Shell::Holographic *))(*(_QWORD *)v7 + 64LL))(v7, this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 99LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
  return v4;
}
