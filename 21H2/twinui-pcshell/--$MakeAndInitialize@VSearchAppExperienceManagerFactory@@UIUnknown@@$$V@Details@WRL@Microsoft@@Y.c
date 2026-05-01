/*
 * XREFs of ??$MakeAndInitialize@VSearchAppExperienceManagerFactory@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180264A8C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VSearchAppExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1802656C0 (-CreateInstance@-$SimpleClassFactory@VSearchAppExperienceManagerFactory@@$0A@@WRL@Microsoft@@UEA.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800431B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800646D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18021D318 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIndividualExperienceManagerFactory@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SearchAppExperienceManagerFactory,IUnknown,>(void **a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int CanCastTo; // edi
  _DWORD *v5; // rcx
  const struct _GUID *v6; // rcx
  volatile int *v7; // rdx

  *a1 = 0LL;
  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IIndividualExperienceManagerFactory,Microsoft::WRL::FtmBase>((__int64)v2);
    *v3 = &SearchAppExperienceManagerFactory::`vftable'{for `IIndividualExperienceManagerFactory'};
    v3[1] = &ScreenClippingExperienceManagerFactory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v3;
      (*(void (__fastcall **)(_QWORD *))(*v3 + 8LL))(v3);
      CanCastTo = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v5, &GUID_18368aef_0ed2_4f7a_94a5_20e6988c5224) )
      {
        *a1 = v3;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 1), v6, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
        if ( CanCastTo < 0 )
          goto LABEL_11;
      }
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
LABEL_11:
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
      (__int64)v3,
      v7);
    return (unsigned int)CanCastTo;
  }
  return (unsigned int)-2147024882;
}
