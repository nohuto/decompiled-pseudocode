/*
 * XREFs of ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802411C4
 * Callers:
 *     ?RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18024402C (-RuntimeClassInitialize@CStartExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802424C8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1802424C8.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PriorityBoostHelper>::As<Windows::Internal::Shell::Experience::IHostExperienceManager>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rdi
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  _DWORD *v6; // r9
  __int64 v7; // rdx
  int CanCastTo; // edi

  v2 = *a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_2410129c_64a0_4b85_9e61_12caec38d6ef, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a2 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    return 0;
  }
  if ( InlineIsEqualGUID(v5, v6) )
  {
    *a2 = v2;
    CanCastTo = 0;
LABEL_6:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 8LL))(*a2);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::CanCastTo(
                v2 + 8,
                v7,
                a2);
  if ( CanCastTo >= 0 )
    goto LABEL_6;
  return (unsigned int)CanCastTo;
}
