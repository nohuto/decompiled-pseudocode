/*
 * XREFs of sub_180060CC8 @ 0x180060CC8
 * Callers:
 *     sub_180060F54 @ 0x180060F54 (sub_180060F54.c)
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_18007215C @ 0x18007215C (sub_18007215C.c)
 */

__int64 __fastcall sub_180060CC8(__int64 a1, HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  signed __int64 v7; // rcx
  __int16 v8; // ax
  char *v9; // rax
  __int64 v10; // rdx
  _WORD *v11; // rcx
  __int16 v12; // ax
  _WORD *v13; // rax

  sub_18007215C();
  v4 = 128LL;
  *(_QWORD *)a1 = off_180148BA8;
  v5 = (char *)(a1 + 32);
  *(IID *)(a1 + 16) = stru_18015C820;
  if ( LoadStringW(a2, 0x194u, (LPWSTR)(a1 + 32), 128) <= 0 )
  {
    v7 = (char *)L"DTS Headphone:X" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v8 = *(_WORD *)&v5[v7];
      if ( !v8 )
        break;
      *(_WORD *)v5 = v8;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v9 = v5 - 2;
    if ( v4 )
      v9 = v5;
    *(_WORD *)v9 = 0;
  }
  if ( LoadStringW(a2, 0x1B3u, (LPWSTR)(a1 + 288), 256) <= 0 )
  {
    v10 = 256LL;
    v11 = (_WORD *)(a1 + 288);
    do
    {
      if ( v10 == -2147483390 )
        break;
      v12 = *(_WORD *)((char *)v11 + (_QWORD)&aMsWindowsStore_0[-144] - a1);
      if ( !v12 )
        break;
      *v11++ = v12;
      --v10;
    }
    while ( v10 );
    v13 = v11 - 1;
    if ( v10 )
      v13 = v11;
    *v13 = 0;
  }
  if ( LoadStringW(a2, 0x1B5u, (LPWSTR)(a1 + 800), 256) <= 0 )
    sub_180057300((_WORD *)(a1 + 800), 256LL, a1 + 288);
  return a1;
}
