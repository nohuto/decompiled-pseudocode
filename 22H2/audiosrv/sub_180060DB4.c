/*
 * XREFs of sub_180060DB4 @ 0x180060DB4
 * Callers:
 *     sub_180060F54 @ 0x180060F54 (sub_180060F54.c)
 * Callees:
 *     sub_18007215C @ 0x18007215C (sub_18007215C.c)
 */

__int64 __fastcall sub_180060DB4(__int64 a1, HINSTANCE a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  char *v6; // rbx
  __int64 v7; // rdi
  signed __int64 v9; // rcx
  __int16 v10; // ax
  char *v11; // rax
  signed __int64 v12; // rcx
  __int16 v13; // ax
  char *v14; // rax

  sub_18007215C();
  v4 = 128LL;
  *(_QWORD *)a1 = off_180148BF8;
  v5 = (char *)(a1 + 32);
  *(IID *)(a1 + 16) = stru_18015C840;
  if ( LoadStringW(a2, 0x192u, (LPWSTR)(a1 + 32), 128) <= 0 )
  {
    v9 = (char *)L"Stereo" - v5;
    do
    {
      if ( v4 == -2147483518 )
        break;
      v10 = *(_WORD *)&v5[v9];
      if ( !v10 )
        break;
      *(_WORD *)v5 = v10;
      v5 += 2;
      --v4;
    }
    while ( v4 );
    v11 = v5 - 2;
    if ( v4 )
      v11 = v5;
    *(_WORD *)v11 = 0;
  }
  v6 = (char *)(a1 + 288);
  v7 = 256LL;
  if ( LoadStringW(a2, 0x1B0u, (LPWSTR)(a1 + 288), 256) <= 0 )
  {
    v12 = (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8" - v6;
    do
    {
      if ( v7 == -2147483390 )
        break;
      v13 = *(_WORD *)&v6[v12];
      if ( !v13 )
        break;
      *(_WORD *)v6 = v13;
      v6 += 2;
      --v7;
    }
    while ( v7 );
    v14 = v6 - 2;
    if ( v7 )
      v14 = v6;
    *(_WORD *)v14 = 0;
  }
  return a1;
}
