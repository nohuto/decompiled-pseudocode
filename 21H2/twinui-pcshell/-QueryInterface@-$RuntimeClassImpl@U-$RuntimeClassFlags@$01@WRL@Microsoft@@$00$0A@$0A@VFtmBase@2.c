/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180040530
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180170190 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180170190.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIShellPositionerPriority@@UIShellPositionerPriorityPersistence@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801701A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801701A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IShellPositionerPriority,IShellPositionerPriorityPersistence>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r8
  _DWORD *v11; // r10
  __int64 v12; // r11
  int v13; // ebx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v4) )
  {
    *v7 = v8;
    goto LABEL_6;
  }
  if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046, v7) )
    goto LABEL_13;
  if ( !(unsigned int)InlineIsEqualGUID(v9, &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb, v10) )
  {
    v8 = v12 + 8;
    if ( *v11 != 315156782
      || v11[1] != *(_DWORD *)&GUID_12c8e92e_f569_48ec_9d4d_56b96469e294.Data2
      || v11[2] != *(_DWORD *)GUID_12c8e92e_f569_48ec_9d4d_56b96469e294.Data4
      || v11[3] != *(_DWORD *)&GUID_12c8e92e_f569_48ec_9d4d_56b96469e294.Data4[4] )
    {
      v13 = -2147467262;
      v8 = 0LL;
LABEL_14:
      if ( v13 < 0 )
        return (unsigned int)v13;
      goto LABEL_7;
    }
LABEL_13:
    *v10 = v8;
    v13 = 0;
    goto LABEL_14;
  }
  *v10 = v12;
LABEL_6:
  v13 = 0;
LABEL_7:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return (unsigned int)v13;
}
