/*
 * XREFs of ?IsHelpParent@@YAHPEAUtagWND@@@Z @ 0x1C0251AFC
 * Callers:
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 *     ?EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z @ 0x1C0251AB0 (-EnumPwndDlgChildProc@@YAHPEAUtagWND@@_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHelpParent(struct tagWND *a1)
{
  unsigned int v1; // r8d
  _BYTE *v4; // rcx

  v1 = 0;
  if ( !a1 )
    return 0LL;
  v4 = (_BYTE *)*((_QWORD *)a1 + 5);
  if ( (v4[26] & 1) != 0
    || (v4[18] & 1) != 0
    || (v4[28] & 0xF) == 7 && *(_WORD *)(gpsi + 868LL) == *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL) + 2LL) )
  {
    return 1;
  }
  return v1;
}
