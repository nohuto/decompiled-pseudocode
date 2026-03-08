/*
 * XREFs of ?RemoveState@tagWND@@QEAAXW4WindowPrivateStates@@@Z @ 0x1C01A73F8
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall tagWND::RemoveState(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 320) &= ~a2;
}
