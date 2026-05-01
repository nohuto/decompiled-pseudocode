/*
 * XREFs of ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18001640C
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18000A1C0 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _lambda_ad7bd321257e919ed278c75d322da1b6_::operator() @ 0x18001CF7C (_lambda_ad7bd321257e919ed278c75d322da1b6_--operator().c)
 *     _lambda_95a85cc3153b2a32da5e8f8bf20a59f3_::operator() @ 0x18001D938 (_lambda_95a85cc3153b2a32da5e8f8bf20a59f3_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore____lambda_363be69ce98476e89105dd3a93d8d574___ @ 0x18001AD5C (std--shared_ptr_ExecutionModel--IGameConfigStore_--_Setpd_ExecutionModel--IGameConfigStore____la.c)
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateGameConfigStoreClientIfNeeded(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  volatile signed __int32 *v5; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( !*(_QWORD *)a1 )
  {
    v8 = 0LL;
    v2 = CreateGameConfigStoreClient(&v8);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    v6 = 0LL;
    std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore____lambda_363be69ce98476e89105dd3a93d8d574___(
      &v6,
      v8,
      0LL);
    v5 = *(volatile signed __int32 **)(a1 + 8);
    *(_OWORD *)a1 = v6;
    if ( v5 && _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return 0LL;
}
