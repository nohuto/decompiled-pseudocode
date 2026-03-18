/*
 * XREFs of ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BE890
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 200) + 40LL) = 0LL;
  return a1;
}
