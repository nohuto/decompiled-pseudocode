/*
 * XREFs of ??1CachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAA@XZ @ 0x180470C9C
 * Callers:
 *     ??_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z @ 0x180470E50 (--_ECachedWindowArrangementViewLifetime@TabletModeViewManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TabletModeViewManager::CachedWindowArrangementViewLifetime::~CachedWindowArrangementViewLifetime(
        TabletModeViewManager::CachedWindowArrangementViewLifetime *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &TabletModeViewManager::CachedWindowArrangementViewLifetime::`vftable';
  v2 = *((_QWORD *)this + 2);
  if ( (unsigned int)SHIsSameObject(*(struct IUnknown **)(v2 + 136), *((struct IUnknown **)this + 3)) )
  {
    IUnknown_SetSite(*(IUnknown **)(v2 + 136), 0LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v2 + 136));
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
