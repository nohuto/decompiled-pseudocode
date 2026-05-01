/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAnimatableMultitaskingViewFrame@@UIMultitaskingViewFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIMultitaskingViewElementEvents@@UIFrameTestHooks@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAnimatableMultitaskingViewFrame@@UIMultitaskingViewFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIMultitaskingViewElementEvents@@UIFrameTestHooks@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180407D38
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAnimatableMultitaskingViewFrame@@UIMultitaskingViewFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIMultitaskingViewElementEvents@@UIFrameTestHooks@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18040A0A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18040A0A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAnimatableMultitaskingViewFrame,IMultitaskingViewFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IMultitaskingViewElementEvents,IFrameTestHooks>>(
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
  _DWORD *v10; // rcx
  __int64 v11; // r9
  int v12; // ebx

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_8abfc9d8_76e2_4753_b8a8_7992cf383c05)
      || InlineIsEqualGUID(v6, &GUID_1f7d53e9_6d19_4129_ba5f_8ffba25d6063)
      || InlineIsEqualGUID(v9, &GUID_4920b7d5_c627_4187_9272_17a3103303e5) )
    {
      v12 = 0;
      *v7 = v8;
    }
    else
    {
      if ( InlineIsEqualGUID(v10, &GUID_8b73c7e0_732a_4677_ae5e_8ea585fcf893) )
      {
        v12 = 0;
        *v7 = v11 + 8;
      }
      else
      {
        v12 = -2147467262;
      }
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)v12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
