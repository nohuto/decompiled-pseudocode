/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040720
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801687F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_1801687F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180168800.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VViewEventArgsBase@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180168810 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180168810.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r10
  int IsEqualGUID; // eax
  __int64 v12; // r8
  _DWORD *v13; // r9
  __int64 v14; // r10
  _QWORD *v15; // r11
  int v16; // ebx
  __int64 v17; // rcx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v4) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, v4) )
  {
    *v9 = v10;
    v16 = 0;
    v12 = v10;
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(v8, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v10 + 8);
    v7 = 2147500034LL;
    if ( IsEqualGUID
      || *v13 == 3
      && v13[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
      && v13[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
      && v13[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
    {
      *v15 = v12;
      v16 = 0;
    }
    else
    {
      v16 = -2147467262;
      v12 = 0LL;
    }
    if ( v16 == -2147467262 )
    {
      v17 = v14 + 64;
      if ( *v13 == 56
        && v13[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        && v13[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        && v13[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        *v15 = v17;
        v16 = 0;
        goto LABEL_13;
      }
      if ( *v13 == 905982127
        && v13[1] == *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data2
        && v13[2] == *(_DWORD *)GUID_360030af_7930_47a7_a1dd_184464be39de.Data4
        && v13[3] == *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data4[4] )
      {
        *v15 = v14 + 72;
        v16 = 0;
        v12 = v14 + 72;
      }
      else
      {
        v16 = -2147467262;
      }
    }
  }
  v17 = v12;
  if ( v16 >= 0 )
LABEL_13:
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, v7);
  return (unsigned int)v16;
}
