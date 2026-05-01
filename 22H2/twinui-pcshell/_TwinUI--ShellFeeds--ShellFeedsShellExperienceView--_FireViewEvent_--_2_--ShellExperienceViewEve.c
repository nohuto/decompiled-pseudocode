/*
 * XREFs of _TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_ @ 0x180083F30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180083B8C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEve.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewEvent_::_2_::ShellExperienceViewEventArg::_scalar_deleting_destructor_(
        __int64 a1,
        char a2)
{
  volatile int *v4; // rdx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
  WindowsDeleteString(*(HSTRING *)(a1 + 32));
  *(_QWORD *)(a1 + 32) = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>(
    a1,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
