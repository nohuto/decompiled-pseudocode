/*
 * XREFs of sub_18002A420 @ 0x18002A420
 * Callers:
 *     sub_18002A54C @ 0x18002A54C (sub_18002A54C.c)
 * Callees:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 *     sub_18002A0F0 @ 0x18002A0F0 (sub_18002A0F0.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_18002A420(__int64 a1, char *a2)
{
  char **v2; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  char *v7; // rax
  int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (char **)(a1 + 48);
  sub_18002A504(a1 + 48, 0LL);
  v5 = -1LL;
  do
    ++v5;
  while ( *(_WORD *)&a2[2 * v5] );
  v6 = v5 + 1;
  *v2 = 0LL;
  if ( v5 + 1 < v5 )
  {
    v8 = -2147024362;
    goto LABEL_17;
  }
  if ( is_mul_ok(v6, 2uLL) )
  {
    v7 = (char *)CoTaskMemAlloc(2 * v6);
    *v2 = v7;
    if ( !v7 )
    {
      v8 = -2147024882;
      goto LABEL_17;
    }
    v8 = 0;
    sub_18002A0F0(v7, v5 + 1, a2, v5);
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 < 0 )
  {
LABEL_17:
    v10 = 2922LL;
    goto LABEL_18;
  }
  result = sub_18000319C(a1);
  v8 = result;
  if ( (int)result >= 0 )
    return 0LL;
  if ( (_DWORD)result != -2147024891 && (_DWORD)result != -2147024894 )
  {
    v10 = 2923LL;
LABEL_18:
    sub_18004BD84(retaddr, v10, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v8);
    return (unsigned int)v8;
  }
  return result;
}
