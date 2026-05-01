/*
 * XREFs of ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F770
 * Callers:
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180169640 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_180169640.c)
 *     ?QueryInterface@?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180169650 (-QueryInterface@-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationMode_ea_180169650.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r11
  _QWORD *v13; // r8
  _DWORD *v14; // r10
  int v15; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3)
    || (unsigned int)InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v4) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_12741485_ca3b_5d37_b0e1_161f70753091, v4) )
  {
    *v8 = v9;
LABEL_15:
    v15 = 0;
LABEL_16:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    return (unsigned int)v15;
  }
  if ( (unsigned int)InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046, v8) )
  {
    *v11 = v12;
    goto LABEL_15;
  }
  if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v11)
    || *v14 == 3
    && v14[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && v14[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && v14[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *v13 = v9;
    v15 = 0;
  }
  else
  {
    v15 = -2147467262;
    v9 = 0LL;
  }
  if ( v15 >= 0 )
    goto LABEL_16;
  return (unsigned int)v15;
}
