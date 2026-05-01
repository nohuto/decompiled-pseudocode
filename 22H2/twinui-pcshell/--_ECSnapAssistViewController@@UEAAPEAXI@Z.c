/*
 * XREFs of ??_ECSnapAssistViewController@@UEAAPEAXI@Z @ 0x18040C310
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800906B4 (--3@YAXPEAX@Z.c)
 *     ??1CMultitaskingViewControllerBase@@QEAA@XZ @ 0x180405E08 (--1CMultitaskingViewControllerBase@@QEAA@XZ.c)
 */

CSnapAssistViewController *__fastcall CSnapAssistViewController::`vector deleting destructor'(
        CSnapAssistViewController *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  CMultitaskingViewControllerBase::~CMultitaskingViewControllerBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
