/*
 * XREFs of ??1CPerMonitorDesktopVisibilityService@@UEAA@XZ @ 0x18043C96C
 * Callers:
 *     ??_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z @ 0x18043CBBC (--_ECPerMonitorDesktopVisibilityService@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFB8C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1801AFBC8 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CPerMonitorDesktopVisibilityService::~CPerMonitorDesktopVisibilityService(
        CPerMonitorDesktopVisibilityService *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
  v2 = (void *)*((_QWORD *)this + 22);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 23) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 22) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 23) );
      v2 = (void *)*((_QWORD *)this + 22);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 22) = 0LL;
  }
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  CImmersiveShellComponent::~CImmersiveShellComponent((CPerMonitorDesktopVisibilityService *)((char *)this + 40));
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite(this);
}
