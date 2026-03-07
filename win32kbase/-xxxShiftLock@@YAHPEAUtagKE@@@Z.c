__int64 __fastcall xxxShiftLock(struct tagKE *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // ax
  __int64 v6; // rcx
  __int64 v7; // rax

  v4 = *((_WORD *)a1 + 1);
  if ( v4 < 0 )
    return 1LL;
  v6 = 255LL;
  if ( (unsigned __int8)v4 == 20 )
  {
    v7 = SGDGetUserSessionState(255LL, a2, a3, a4);
    LOBYTE(v7) = ~*(_BYTE *)(v7 + 13997);
    return ((unsigned int)v7 >> 1) & 1;
  }
  if ( (unsigned __int8)v4 != 16 )
  {
    v6 = 160LL;
    if ( (unsigned __int16)((unsigned __int8)v4 - 160) > 1u )
      return 1LL;
  }
  if ( (*(_BYTE *)(SGDGetUserSessionState(v6, a2, a3, a4) + 13997) & 2) == 0 )
    return 1LL;
  xxxKeyEventEx(
    *((unsigned __int16 *)a1 + 1),
    *(unsigned __int8 *)a1,
    *((unsigned int *)a1 + 1),
    0LL,
    0LL,
    0LL,
    0,
    0,
    0LL,
    0LL);
  xxxKeyEventEx(20LL, 570LL, *((unsigned int *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
  xxxKeyEventEx(32788LL, 570LL, *((unsigned int *)a1 + 1), 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
  return 0LL;
}
