/*
 * XREFs of ??1CFullScreenManager@@UEAA@XZ @ 0x180218CD8
 * Callers:
 *     ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x180219114 (--_ECFullScreenManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801AFB8C (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CFullScreenManager::~CFullScreenManager(CFullScreenManager *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 21) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 20) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 21) );
      v2 = (void *)*((_QWORD *)this + 20);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 20) = 0LL;
  }
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  *((_DWORD *)this + 35) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((CFullScreenManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 2);
}
