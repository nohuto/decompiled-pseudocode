/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIObjectArray@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800471A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIObjectArray@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165EB0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180165EB0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IObjectArray>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // r10
  __int64 v14; // r9

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90) )
    goto LABEL_8;
  if ( InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046) )
  {
    *v10 = v11;
    v12 = 0;
    v13 = v11;
  }
  else
  {
    v12 = -2147467262;
    v13 = 0LL;
  }
  if ( v12 != -2147467262 )
  {
LABEL_11:
    v8 = v13;
    if ( v12 < 0 )
      return (unsigned int)v12;
    goto LABEL_9;
  }
  if ( !InlineIsEqualGUID(v9, &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9) )
  {
    v12 = -2147467262;
    goto LABEL_11;
  }
  v8 = v14 + 32;
LABEL_8:
  *v7 = v8;
  v12 = 0;
LABEL_9:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  return (unsigned int)v12;
}
