/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@UIImmersiveWindowMessageNotification@@UIClosable@Foundation@9@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180242678
 * Callers:
 *     ??$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802412C4 (--$As@UIExperienceManagerPriorityManipulator@Experience@Shell@Internal@Windows@@@-$ComPtr@VPrior.c)
 *     ??$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@VPriorityBoostHelper@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180241374 (--$As@UIHostExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@VPriorityBoostHelper@.c)
 *     ?QueryInterface@PriorityBoostHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180243F20 (-QueryInterface@PriorityBoostHelper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18021E504 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIClosable@Foundation@W.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::Shell::Experience::IExperienceManagerPriorityManipulator,IImmersiveWindowMessageNotification,Windows::Foundation::IClosable>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_fdae1e57_9570_4461_bab5_532c0f899149)
      || InlineIsEqualGUID(v6, &GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>::CanCastTo(
                             v9 + 8,
                             v10);
    }
    return v8;
  }
}
