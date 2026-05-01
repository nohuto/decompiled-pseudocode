/*
 * XREFs of _wcsicmp @ 0x1800908F4
 * Callers:
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x18041A09C (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  return _o__wcsicmp(String1, String2);
}
