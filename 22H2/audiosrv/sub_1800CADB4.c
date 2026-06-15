/*
 * XREFs of sub_1800CADB4 @ 0x1800CADB4
 * Callers:
 *     sub_1800C99E4 @ 0x1800C99E4 (sub_1800C99E4.c)
 *     sub_1800D32F4 @ 0x1800D32F4 (sub_1800D32F4.c)
 *     sub_1800D38A0 @ 0x1800D38A0 (sub_1800D38A0.c)
 *     sub_1800D3CD4 @ 0x1800D3CD4 (sub_1800D3CD4.c)
 *     sub_1800D407C @ 0x1800D407C (sub_1800D407C.c)
 * Callees:
 *     sub_180003E08 @ 0x180003E08 (sub_180003E08.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C7FC4 @ 0x1800C7FC4 (sub_1800C7FC4.c)
 *     sub_1800C90C4 @ 0x1800C90C4 (sub_1800C90C4.c)
 */

__int64 *__fastcall sub_1800CADB4(__int64 *a1, __int64 *a2, __int64 a3, int *a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  int v10; // r15d
  const wchar_t *v11; // rcx
  int v12; // eax
  int v13; // r8d
  __int64 v14; // rax

  if ( *a4 < 0 )
    sub_1800B8610(-2147024809);
  v7 = *a1;
  v8 = v7 + 2LL * *a4;
  v9 = v7 + 2LL * *(int *)(v7 - 16);
  if ( v8 >= v9
    || (v10 = wcsspn((const wchar_t *)(v7 + 2LL * *a4), L"|"),
        v11 = (const wchar_t *)(v8 + 2LL * v10),
        (unsigned __int64)v11 >= v9) )
  {
    *a4 = -1;
    v14 = sub_1800C7FC4(a1);
    sub_180003E08(a2, v14);
  }
  else
  {
    v12 = wcscspn(v11, L"|");
    v13 = v10 + *a4;
    *a4 = v13 + v12 + 1;
    sub_1800C90C4(a1, a2, v13, v12);
  }
  return a2;
}
