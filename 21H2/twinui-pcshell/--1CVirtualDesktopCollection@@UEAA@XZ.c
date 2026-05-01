/*
 * XREFs of ??1CVirtualDesktopCollection@@UEAA@XZ @ 0x1804A63EC
 * Callers:
 *     ??_GCVirtualDesktopCollection@@UEAAPEAXI@Z @ 0x1804A6490 (--_GCVirtualDesktopCollection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVirtualDesktopCollection::~CVirtualDesktopCollection(CVirtualDesktopCollection *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx

  v2 = (void *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 7) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 6) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 7) );
      v2 = (void *)*((_QWORD *)this + 6);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
}
