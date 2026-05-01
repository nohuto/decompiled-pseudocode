/*
 * XREFs of ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18043EF90
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCopyToViewValueSetBase@@@Details@23@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18043E4D8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18043E4D8.c)
 *     ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18043EEC0 (-QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall DelayedTileActivationCallSite::QueryService(
        DelayedTileActivationCallSite *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  __int64 v5; // rax
  void *v6; // r9
  _DWORD *v7; // r10
  int CanCastTo; // ebx

  *a4 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_23710692_92e0_4a33_a781_a81596a4cd7d.Data4;
  if ( v5 || !*((_BYTE *)this + 109) )
    return CopyToViewValueSetBase::QueryService(this, a2, a3, a4);
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a4 = v6;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CopyToViewValueSetBase>,IOleWindow,IShouldSwitchToDesktop>::CanCastTo(
                  (__int64)v6,
                  v7);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
  }
  return (unsigned int)CanCastTo;
}
