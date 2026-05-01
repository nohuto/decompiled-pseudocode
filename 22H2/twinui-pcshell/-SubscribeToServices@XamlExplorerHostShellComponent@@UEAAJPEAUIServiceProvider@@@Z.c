/*
 * XREFs of ?SubscribeToServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x18035B2C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180051738 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x180051970 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::SubscribeToServices(
        XamlExplorerHostShellComponent *this,
        struct IServiceProvider *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rdx
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 22);
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v11, (RTL_SRWLOCK *)(v2 + 104));
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(v2 + 64), (__int64)a2);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v11);
  v5 = *((_QWORD *)this + 17);
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v5 + 48LL))(v5, a2);
    if ( v6 < 0 )
    {
      v7 = 99LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 18);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 144);
  if ( v6 < 0 )
  {
    v7 = 102LL;
    goto LABEL_4;
  }
  return 0LL;
}
