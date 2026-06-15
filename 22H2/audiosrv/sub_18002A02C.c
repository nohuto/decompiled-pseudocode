/*
 * XREFs of sub_18002A02C @ 0x18002A02C
 * Callers:
 *     sub_180029E70 @ 0x180029E70 (sub_180029E70.c)
 * Callees:
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18002A02C(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  LPVOID v7; // rax
  int v8; // ebx
  DWORD LastError; // ebx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(void **)(a1 + 16);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)(a2 + 2 * v5) );
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v8 = -2147024362;
    goto LABEL_14;
  }
  if ( is_mul_ok(v6, 2uLL) )
  {
    v7 = CoTaskMemAlloc(2 * v6);
    *(_QWORD *)(a1 + 16) = v7;
    if ( !v7 )
    {
      v8 = -2147024882;
      goto LABEL_14;
    }
    v8 = 0;
    sub_18002A0F0(v7, v5 + 1, a2, v5);
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 >= 0 )
    return 0LL;
LABEL_14:
  sub_18004BD84(retaddr, 25LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp", (unsigned int)v8);
  return (unsigned int)v8;
}
