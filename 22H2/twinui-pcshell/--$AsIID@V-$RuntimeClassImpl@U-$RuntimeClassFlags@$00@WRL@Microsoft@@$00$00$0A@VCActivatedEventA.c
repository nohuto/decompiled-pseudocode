/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VCActivatedEventArgsWithPrelaunchAndViewIdBase@@UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@678@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180047240
 * Callers:
 *     ?QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008BE50 (-QueryInterface@CLaunchActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800431B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UILaunchActivatedEventArgs@Activation@ApplicationModel@Windows@@UILaunchActivatedEventArgs2@567@U?$CloakedIid@UIValueMarshalByPropertySet@Internal@Marshaling@Foundation@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800825F8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UILaunchActivatedEventA.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIApplicationViewActivatedEventArgs@Activation@ApplicationModel@Windows@@UIViewSwitcherProvider@567@U?$CloakedIid@UIMultiviewActivationProperties@Activation@ApplicationModel@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180083848 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIApplicationViewActiva.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,CActivatedEventArgsWithPrelaunchAndViewIdBase,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>>(
        char *a1,
        struct _GUID *a2,
        _QWORD *a3)
{
  _DWORD *v5; // rcx
  char **v6; // r8
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  void **v9; // r8
  _DWORD *v10; // rcx
  __int64 v11; // r9
  _DWORD *v12; // rcx
  int CanCastTo; // ebx
  _DWORD *v14; // rcx
  char *v15; // rsi

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v5, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v7, &GUID_cf651713_cd08_4fd8_b697_a281b6544e2e) )
    {
      *v9 = a1;
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v8, &GUID_1cf09b9e_9962_4936_80ff_afc8e8ae5c8c)
        || InlineIsEqualGUID(v10, &GUID_99fc44e3_ce9a_4284_bf04_76331d1b1788)
        || InlineIsEqualGUID(v12, &GUID_eb97821f_f2b3_4129_a736_1cbadda865e8) )
      {
        *v9 = (void *)v11;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v11 + 8), a2, v9);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo != -2147467262 )
        goto LABEL_15;
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,Microsoft::WRL::CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties>>::CanCastTo(
                    a1 + 128,
                    a2);
    }
    if ( CanCastTo == -2147467262 )
    {
      if ( InlineIsEqualGUID(a2, &GUID_0c44717b_19f7_48d6_b046_cf22826eaa74) )
      {
        CanCastTo = 0;
        *v9 = a1 + 192;
      }
      else
      {
        v15 = a1 + 208;
        if ( InlineIsEqualGUID(v14, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          *v9 = v15;
          CanCastTo = 0;
          goto LABEL_16;
        }
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs2,Microsoft::WRL::CloakedIid<Windows::Foundation::Marshaling::Internal::IValueMarshalByPropertySet>>::CanCastTo(
                      v15 + 8,
                      a2);
      }
    }
LABEL_15:
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_16:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)CanCastTo;
  }
  *v6 = a1;
  (*(void (__fastcall **)(char *))(*(_QWORD *)a1 + 8LL))(a1);
  return 0LL;
}
