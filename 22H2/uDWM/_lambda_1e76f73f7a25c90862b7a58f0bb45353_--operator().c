/*
 * XREFs of _lambda_1e76f73f7a25c90862b7a58f0bb45353_::operator() @ 0x1800A9F44
 * Callers:
 *     CTransitionVisualController::ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___ @ 0x1800A9DD4 (CTransitionVisualController--ForEachOwnedWindow__lambda_1e76f73f7a25c90862b7a58f0bb45353___.c)
 * Callees:
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_1e76f73f7a25c90862b7a58f0bb45353_::operator()(const RECT ***a1, __int64 a2)
{
  struct tagRECT rcDst; // [rsp+20h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a2 + 608) & 1) != 0 && (*(_DWORD *)(a2 + 100) & 0x20000000) == 0 )
  {
    UnionRect(&rcDst, **a1, (const RECT *)(a2 + 48));
    ***a1 = rcDst;
  }
  return 0LL;
}
