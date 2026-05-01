/*
 * XREFs of ?QueryInterface@SearchAppExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008CC50
 * Callers:
 *     ?QueryInterface@SearchAppExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165600 (-QueryInterface@SearchAppExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@SearchAppExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165610 (-QueryInterface@SearchAppExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@SearchAppExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165620 (-QueryInterface@SearchAppExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIClosable@Foundation@Windows@@UIInitializeTrustedComponentForegroundControl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180227168 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_180227168.c)
 */

__int64 __fastcall SearchAppExperienceManager::QueryInterface(
        SearchAppExperienceManager *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  int CanCastTo; // ebx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && !InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    if ( InlineIsEqualGUID(v6, &GUID_3e90bc6d_f3d9_4e87_94ec_bb0819d7cdbf) )
    {
      *v9 = v10;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::CanCastTo(
                    v10 + 8,
                    v11);
      if ( CanCastTo < 0 )
        return (unsigned int)CanCastTo;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
    return (unsigned int)CanCastTo;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0;
}
