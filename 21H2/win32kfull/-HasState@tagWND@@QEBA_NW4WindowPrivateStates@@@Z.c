/*
 * XREFs of ?HasState@tagWND@@QEBA_NW4WindowPrivateStates@@@Z @ 0x1C005F8D8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::HasState(__int64 a1, int a2)
{
  return (a2 & *(_DWORD *)(a1 + 320)) == a2;
}
