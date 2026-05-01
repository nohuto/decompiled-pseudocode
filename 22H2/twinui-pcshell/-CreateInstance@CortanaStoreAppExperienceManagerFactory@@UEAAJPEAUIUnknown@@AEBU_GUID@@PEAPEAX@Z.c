/*
 * XREFs of ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180261EF0
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x180260AC4 (--$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802616A0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1802616A0.c)
 *     ?InternalRelease@?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180262DB4 (-InternalRelease@-$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManagerFactory::CreateInstance(
        CortanaStoreAppExperienceManagerFactory *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v7; // eax
  int CanCastTo; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rcx
  volatile signed __int64 *v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  volatile signed __int64 *v16; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
    return 2147746064LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(&v16);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<CortanaStoreAppExperienceManager,CortanaStoreAppExperienceManager,>(&v16);
  CanCastTo = v7;
  if ( v7 < 0 )
  {
    v9 = (unsigned int)v7;
    v10 = 1395LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)v9);
    goto LABEL_15;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v11, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    v14 = v16;
    *a4 = (void *)v16;
    (*(void (__fastcall **)(volatile signed __int64 *))(*v14 + 8))(v14);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v13, v12) )
    {
      *a4 = (void *)v16;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::CanCastTo(
                    (__int64)(v16 + 1),
                    a3,
                    a4);
      if ( CanCastTo < 0 )
        goto LABEL_12;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
  }
LABEL_12:
  if ( CanCastTo < 0 )
  {
    v9 = (unsigned int)CanCastTo;
    v10 = 1396LL;
    goto LABEL_14;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(&v16);
  return (unsigned int)CanCastTo;
}
