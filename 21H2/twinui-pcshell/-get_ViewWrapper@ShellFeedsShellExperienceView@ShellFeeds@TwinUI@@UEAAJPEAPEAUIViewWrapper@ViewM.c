/*
 * XREFs of ?get_ViewWrapper@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180087480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::get_ViewWrapper(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v2; // rbx

  v2 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)((char *)this + 72);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)this + 9);
  *a2 = *v2;
  return 0LL;
}
