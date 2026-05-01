/*
 * XREFs of ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x1800B6370
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x1800B0544 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ??$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@PEBGHHAEA_NAEA_NAEA_NAEA_N@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@$$QEAPEBG$$QEAH3AEA_N444@Z @ 0x1800B06A8 (--$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Expe.c)
 *     ??$ShellFeedsExperienceManagerImpl_PokeOnMouseMove@AEAH@ShellFeedsTelemetry@@SAXAEAH@Z @ 0x1800B08B8 (--$ShellFeedsExperienceManagerImpl_PokeOnMouseMove@AEAH@ShellFeedsTelemetry@@SAXAEAH@Z.c)
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x1800B1DC4 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 *     ?OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B674C (-OpenFlyoutOnHover@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B67A0 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8830 (-_IsViewCloaked@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ @ 0x1800B8870 (-_IsViewVisible@ShellFeedsExperienceManagerImpl@@AEAA_NXZ.c)
 *     ?_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z @ 0x1800B88B0 (-_NotifyViewTaskbarButtonHoverStateChanged@ShellFeedsExperienceManagerImpl@@AEAAJ_N@Z.c)
 *     ?_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experience@Shell@Internal@Windows@@@Z @ 0x1800B9864 (-_Show@ShellFeedsExperienceManagerImpl@@AEAAJPEAUHSTRING__@@W4ShellFeedsButtonInteraction@Experi.c)
 *     ?__private_GetVariant@?$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@wil@@QEAA?AW4Variant_FeedsTaskbarHeadline@@W4VariantReportingKind@3@_N@Z @ 0x1800B9E88 (-__private_GetVariant@-$FeatureImpl@U__WilFeatureTraits_Feature_FeedsTaskbarHeadline@@@details@w.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::NotifyTaskbarButtonInteraction(
        __int64 a1,
        int a2,
        int a3,
        HSTRING a4)
{
  char *v7; // r12
  char *v8; // rsi
  char *v9; // r15
  int IsViewVisible; // r14d
  int IsViewCloaked; // eax
  char v12; // cl
  __int64 v13; // rdx
  ShellFeedsExperienceManagerImpl *v14; // rcx
  bool v16; // al
  unsigned __int8 Variant; // cl
  int v19; // [rsp+50h] [rbp-10h] BYREF
  PCWSTR StringRawBuffer; // [rsp+58h] [rbp-8h] BYREF
  int v21; // [rsp+A0h] [rbp+40h] BYREF
  int v22; // [rsp+A8h] [rbp+48h] BYREF
  int v23; // [rsp+B0h] [rbp+50h] BYREF

  v23 = a3;
  v22 = a2;
  v7 = (char *)(a1 + 219);
  v8 = (char *)(a1 + 218);
  v9 = (char *)(a1 + 217);
  IsViewVisible = -1;
  if ( *(_BYTE *)(a1 + 219) )
  {
    IsViewCloaked = ShellFeedsExperienceManagerImpl::_IsViewCloaked((ShellFeedsExperienceManagerImpl *)a1);
    v12 = *v7;
  }
  else
  {
    IsViewCloaked = -1;
    v12 = 0;
  }
  v21 = IsViewCloaked;
  if ( v12 )
    IsViewVisible = ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1);
  v19 = IsViewVisible;
  StringRawBuffer = WindowsGetStringRawBuffer(a4, 0LL);
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &,unsigned short const *,int,int,bool &,bool &,bool &,bool &>(
    &v22,
    &v23,
    (__int64 *)&StringRawBuffer,
    &v19,
    &v21,
    v9,
    (char *)(a1 + 216),
    v8,
    v7);
  if ( a3 > 0 )
  {
    if ( a3 > 2 )
    {
      if ( a3 == 3 )
      {
        *v8 = 0;
        ShellFeedsExperienceManagerImpl::_NotifyViewTaskbarButtonHoverStateChanged(
          (ShellFeedsExperienceManagerImpl *)a1,
          0);
        return 0LL;
      }
      if ( a3 == 4 )
      {
        if ( ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1) && *v9 )
          *v8 = 1;
        ShellFeedsExperienceManagerImpl::_NotifyViewTaskbarButtonHoverStateChanged(
          (ShellFeedsExperienceManagerImpl *)a1,
          1);
        if ( ShellFeedsExperienceManagerImpl::CanPokeNow((ShellFeedsExperienceManagerImpl *)a1) )
        {
          ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_PokeOnMouseMove<int &>((int *)(a1 + 156));
          ShellFeedsExperienceManagerImpl::Poke((ShellFeedsExperienceManagerImpl *)a1, a4);
          ++*(_DWORD *)(a1 + 156);
        }
        if ( *(__int64 *)(a1 + 176) > 30 && (*(_QWORD *)(a1 + 168))++ == -1LL )
          *(_QWORD *)(a1 + 160) = 0LL;
        return 0LL;
      }
      if ( a3 != 5 )
        return 0LL;
    }
    if ( a3 == 1 )
    {
      if ( ShellFeedsExperienceManagerImpl::_IsViewVisible((ShellFeedsExperienceManagerImpl *)a1)
        || !ShellFeedsExperienceManagerImpl::OpenFlyoutOnHover(v14) )
      {
        return 0LL;
      }
    }
    else
    {
      v16 = a3 == 5;
      if ( a3 == 2 )
      {
        Variant = wil::details::FeatureImpl<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::__private_GetVariant(&`wil::Feature<__WilFeatureTraits_Feature_FeedsTaskbarHeadline>::GetImpl'::`2'::impl);
        v16 = 0;
        if ( Variant >= 2u && (Variant <= 4u || Variant == 6) )
          v16 = 1;
      }
      if ( v16 )
      {
        if ( *v8 )
        {
          *v8 = 0;
          return 0LL;
        }
        if ( !*v9 )
        {
          *v9 = 1;
          LOBYTE(v13) = 1;
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), v13);
          *v8 = 1;
        }
      }
    }
    if ( (int)ShellFeedsExperienceManagerImpl::_Show(a1, a4, (unsigned int)a3) < 0 )
    {
      v23 = ShellFeedsExperienceManagerImpl::_Show(a1, a4, (unsigned int)a3);
      v21 = 1;
      ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
        &v21,
        &v23);
    }
    *(_QWORD *)(a1 + 200) = _Xtime_get_ticks();
    *(_DWORD *)(a1 + 156) = 0;
    ++*(_QWORD *)(a1 + 160);
  }
  return 0LL;
}
