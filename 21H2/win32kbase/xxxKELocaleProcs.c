/*
 * XREFs of xxxKELocaleProcs @ 0x1C00AF9AC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1C01EA564 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1C01EA604 (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 */

__int64 __fastcall xxxKELocaleProcs(struct tagKE *a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(gpKbdTbl + 80) & 1) != 0 || gbAltGrDown )
    xxxAltGr(a1);
  if ( (gdwKeyboardAttributes & 2) == 0 && (*(_DWORD *)(gpKbdTbl + 80) & 2) == 0 )
    return 1LL;
  result = xxxShiftLock(a1);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
