/*
 * XREFs of ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C0033198
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::HasState(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 320)) == a2;
}
