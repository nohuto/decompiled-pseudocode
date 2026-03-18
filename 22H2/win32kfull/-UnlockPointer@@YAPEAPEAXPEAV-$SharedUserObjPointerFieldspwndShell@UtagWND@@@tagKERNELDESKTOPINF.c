/*
 * XREFs of ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndShell@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE8A8
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 168) + 24LL) = 0LL;
  return a1;
}
