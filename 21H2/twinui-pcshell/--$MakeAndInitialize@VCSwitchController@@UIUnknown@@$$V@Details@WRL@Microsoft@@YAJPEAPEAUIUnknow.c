/*
 * XREFs of ??$MakeAndInitialize@VCSwitchController@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18043A77C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18043AC50 (-CreateInstance@-$SimpleClassFactory@VCSwitchController@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006CFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellC.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF384 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCWRLObjectWithSite@@@Details@23@VCImmersiveShellComponent@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180214968 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_180214968.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UISwitchController@@@WRL@Microsoft@@QEAA@XZ @ 0x18043A9B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CSwitchController,IUnknown,>(__int64 *a1)
{
  void *v2; // rax
  __int64 v3; // rbx
  int CanCastTo; // edi
  volatile int *v5; // rdx
  _DWORD *v6; // rdx
  _DWORD *v7; // r10
  int v8; // r8d
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = (__int64)v2;
  if ( !v2 )
    return (unsigned int)-2147024882;
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>(v2);
  *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>::`vftable'{for `Microsoft::WRL::Details::Selector<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,ISwitchController>>'};
  *(_QWORD *)(v3 + 24) = &CSwitchController::`vftable'{for `IImmersiveShellComponent'};
  *(_QWORD *)(v3 + 32) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,ISwitchController>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *(_QWORD *)(v3 + 88) = &CSwitchController::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ISwitchController>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithSite>,ISwitchController>>'};
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 108) = 0;
  v10[0] = xmmword_1805641C8;
  v10[1] = 0LL;
  CanCastTo = CImmersiveShellComponent::RegisterServiceInformation(
                (CImmersiveShellComponent *)(v3 + 24),
                (const struct CImmersiveShellComponent::ISC_SERVICE *)v10,
                1LL);
  if ( CanCastTo >= 0 )
  {
    *a1 = 0LL;
    if ( !InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithSite>,CImmersiveShellComponent>::CanCastTo(
                    v3,
                    v6,
                    a1);
      if ( CanCastTo == -2147467262 )
      {
        if ( InlineIsEqualGUID(v7, &GUID_53b23e1b_25e2_4886_9fb6_744b8f15571c) )
        {
          *a1 = v3 + 88;
          CanCastTo = 0;
LABEL_10:
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
          goto LABEL_12;
        }
        CanCastTo = v8;
      }
      if ( CanCastTo < 0 )
        goto LABEL_12;
      goto LABEL_10;
    }
    *a1 = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    CanCastTo = 0;
  }
LABEL_12:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::Release(
      v3,
      v5);
  return (unsigned int)CanCastTo;
}
