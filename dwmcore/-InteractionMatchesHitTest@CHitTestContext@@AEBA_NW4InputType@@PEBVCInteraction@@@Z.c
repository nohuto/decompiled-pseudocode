/*
 * XREFs of ?InteractionMatchesHitTest@CHitTestContext@@AEBA_NW4InputType@@PEBVCInteraction@@@Z @ 0x180032178
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180031CF4 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CHitTestContext::InteractionMatchesHitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  char v6; // bl

  if ( (_DWORD)a2 != 4 )
    return (unsigned int)(a2 - 5) > 1
        || (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 64) + 88LL))(
             a3 + 64,
             a2,
             *(unsigned int *)(a1 + 100),
             0LL) != 0;
  v5 = *(unsigned int *)(a1 + 104);
  v6 = 0;
  if ( !(_DWORD)v5
    || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(a3 + 64) + 88LL))(
         a3 + 64,
         4LL,
         v5,
         0LL) )
  {
    return 1;
  }
  return v6;
}
