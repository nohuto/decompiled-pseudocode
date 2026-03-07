__int64 __fastcall BltColor(HDC a1, __int64 a2, __int64 a3, LONG a4, LONG a5, int a6, int a7, int a8, int a9, char a10)
{
  __int64 v14; // rdi
  unsigned int v15; // r14d
  int v16; // r15d
  unsigned int v17; // r9d

  v14 = 0LL;
  v15 = GreSetTextColor((__int64)a1, 0LL);
  v16 = GreSetBkColor(a1, 0xFFFFFF);
  if ( a2 )
    v14 = GreSelectBrush(a1, a2);
  v17 = ((a10 & 1) != 0 ? 12060490 : 14812998) | 0x80000000;
  if ( (a10 & 2) == 0 )
    v17 = (a10 & 1) != 0 ? 12060490 : 14812998;
  if ( !a3 )
    a3 = *(_QWORD *)(gpDispInfo + 72LL);
  NtGdiBitBltInternal(a1, a4, a5, a6, a7, a3, a8, a9, v17, 0xFFFFFF, 0);
  if ( a2 )
    GreSelectBrush(a1, v14);
  GreSetTextColor((__int64)a1, v15);
  return GreSetBkColor(a1, v16);
}
