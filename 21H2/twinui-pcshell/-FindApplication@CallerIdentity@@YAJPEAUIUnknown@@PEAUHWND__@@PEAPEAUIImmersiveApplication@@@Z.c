/*
 * XREFs of ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1804D9A60
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18043AED0 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18043B020 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CallerIdentity::FindApplication(
        CallerIdentity *this,
        struct IUnknown *a2,
        _QWORD *a3,
        struct IImmersiveApplication **a4)
{
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  v7 = (**(__int64 (__fastcall ***)(CallerIdentity *, GUID *, __int64 *))this)(
         this,
         &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
         &v11);
  if ( v7 >= 0 )
  {
    v10 = 0LL;
    v8 = v11;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v7 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v8 + 24LL))(
           v8,
           &SID_ImmersiveApplicationArrayService,
           &GUID_a3c23ab7_6be2_4778_8eb0_1adb7977f76a,
           &v10);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD *))(*(_QWORD *)v10 + 48LL))(v10, a2, a3);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return (unsigned int)v7;
}
