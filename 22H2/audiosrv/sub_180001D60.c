/*
 * XREFs of sub_180001D60 @ 0x180001D60
 * Callers:
 *     sub_180001C6C @ 0x180001C6C (sub_180001C6C.c)
 * Callees:
 *     sub_18004AE9C @ 0x18004AE9C (sub_18004AE9C.c)
 */

__int64 __fastcall sub_180001D60(int a1, int a2, __int64 a3, __int128 *a4, __int64 *a5)
{
  __int128 v5; // xmm0
  __int64 *v6; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+50h] [rbp-18h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v5 = *a4;
  v6 = a5;
  *a5 = 30000LL;
  v10 = v5;
  if ( (int)sub_18004AE9C(a1, 0, a3, (unsigned int)&v10, 0, 0LL, 0LL, (__int64)&v11, 0LL) >= 0 )
  {
    v8 = (unsigned int)(int)((double)v11 * 10000000.0 / (double)*(int *)(a3 + 4) + 0.5);
    if ( v8 >= *v6 )
      v8 = *v6;
    *v6 = v8;
  }
  return 0LL;
}
