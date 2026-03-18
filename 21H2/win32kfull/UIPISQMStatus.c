/*
 * XREFs of UIPISQMStatus @ 0x1C0121B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UIPISQMStatus(int a1, int a2)
{
  unsigned int v2; // ebx

  v2 = (a2 != 0 ? 2 : 0) | (a1 != 0);
  FastGetProfileDword(0LL, 50LL, L"EnableMessageSQM", 0LL, &gfWinMsgSQMIsOptedIn);
  if ( gfWinMsgSQMIsOptedIn )
    gfWinMsgSQMIsOptedIn = WinSqmIsOptedIn();
  return WinSqmSetDWORD(gSqmSession, 5715LL, v2);
}
