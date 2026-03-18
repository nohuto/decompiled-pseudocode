/*
 * XREFs of ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndTaskman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE8C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 192) + 32LL) = 0LL;
  return a1;
}
