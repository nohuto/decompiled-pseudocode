/*
 * XREFs of ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@@Z @ 0x1C0200500
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 160) + 176LL) = 0LL;
  return a1;
}
