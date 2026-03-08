/*
 * XREFs of ?UnlockPointer@@YAPEAPEAXPEAV?$SharedUserObjPointerFieldspwndProgman@UtagWND@@@tagKERNELDESKTOPINFO@@@Z @ 0x1C01BFA30
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockPointer(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 - 200) + 40LL) = 0LL;
  return a1;
}
