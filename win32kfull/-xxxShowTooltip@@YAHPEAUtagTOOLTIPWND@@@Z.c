__int64 __fastcall xxxShowTooltip(struct tagTOOLTIPWND *a1)
{
  _WORD *v1; // rax
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // edx
  __int64 v7; // rax
  struct tagSIZE v9; // [rsp+50h] [rbp+8h] BYREF
  struct tagPOINT v10; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_WORD *)*((_QWORD *)a1 + 6);
  v2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( !v1 )
    return 0LL;
  if ( v1 == gszCAPTIONTOOLTIP )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 184LL);
    if ( !v4 )
      return 0LL;
    v5 = *(_QWORD *)(v4 + 40);
    if ( (*(_BYTE *)(v5 + 23) & 8) == 0 || !*(_DWORD *)(v5 + 184) )
      return 0LL;
    wcsncpycch(gszCAPTIONTOOLTIP, *(_QWORD *)(v4 + 184), 99);
    word_1C0362896 = 0;
  }
  if ( !(unsigned int)xxxTooltipGetSizeAndPosition(a1, &v9, &v10) )
    return 0LL;
  v6 = 16472;
  if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000800) != 0x80000800 )
    v6 = 16464;
  v7 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 184LL);
  if ( v7 )
    v2 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL);
  xxxSetWindowPosAndBand(*(struct tagWND **)a1, 0LL, v10.x, v10.y, v9.cx, v9.cy, v6, v2);
  return 1LL;
}
