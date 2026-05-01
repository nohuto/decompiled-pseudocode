/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180436CCC
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIAppTransitionTargetManager@@UITaggableTarget@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VCWRLObjectWithSite@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180437D50 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180437D50.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IAppTransitionTargetManager,ITaggableTarget,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,CWRLObjectWithSite>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r10
  _DWORD *v9; // r9
  __int64 v10; // r10
  int v11; // ebx

  *a3 = 0LL;
  if ( !InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    if ( InlineIsEqualGUID(v3, &GUID_60f78ac1_5edd_4b6d_9d29_b2300ef43343)
      || InlineIsEqualGUID(v6, &GUID_42b028e4_80cd_42b1_b817_0191712101d7) )
    {
      *v7 = v8;
      v11 = 0;
    }
    else
    {
      v10 = v8 + 8;
      if ( *v9 == -62389853
        && v9[1] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && v9[2] == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && v9[3] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4] )
      {
        *v7 = v10;
        v11 = 0;
      }
      else
      {
        v11 = -2147467262;
      }
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)v11;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
