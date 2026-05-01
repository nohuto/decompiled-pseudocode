/*
 * XREFs of ??1CIAMSpecialWindowBase@@UEAA@XZ @ 0x1801CCAE8
 * Callers:
 *     ??_GCIAMSpecialWindow@@UEAAPEAXI@Z @ 0x1801CCB40 (--_GCIAMSpecialWindow@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCIAMSpecialWindowBase@@UIFallbackWindow@@UIImmersiveMonitorNotification@@UIRawElementProviderSimple@@UIInvokeProvider@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801CCB84 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithSite@@VCI_ea_1801CCB84.c)
 *     ??_GCFallbackWindow@@UEAAPEAXI@Z @ 0x1801CCBD4 (--_GCFallbackWindow@@UEAAPEAXI@Z.c)
 *     ??_GCIAMSpecialWindowBase@@UEAAPEAXI@Z @ 0x1801CCC40 (--_GCIAMSpecialWindowBase@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CIAMSpecialWindowBase::~CIAMSpecialWindowBase(CIAMSpecialWindowBase *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CIAMSpecialWindowBase::`vftable';
  DestroyWindow(*((HWND *)this + 2));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
