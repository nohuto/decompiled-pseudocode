/*
 * XREFs of ?AdjustInputTypeForInteraction@CHitTestContext@@AEBA?AW4InputType@@W42@PEBVCInteraction@@@Z @ 0x180032130
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHitTestContext::AdjustInputTypeForInteraction(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a2 == 6
    && !(*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 64) + 88LL))(
          a3 + 64,
          6LL,
          *(unsigned int *)(a1 + 100),
          0LL) )
  {
    return 5;
  }
  return v3;
}
