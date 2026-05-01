/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z @ 0x1803FB060
 * Callers:
 *     <none>
 * Callees:
 *     ?_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ @ 0x1803FB184 (-_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualDesktopThumbnailWindowFilter::ViewVirtualDesktopChanged(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IApplicationView *a2)
{
  *((_BYTE *)this + 36) = 1;
  VirtualDesktopThumbnailWindowFilter::_MaybeDoUpdates((VirtualDesktopThumbnailWindowFilter *)((char *)this - 8));
  return 0LL;
}
