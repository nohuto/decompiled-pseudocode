/*
 * XREFs of ?AddToSums@?$LinearFitT@$0BAA@@@QEAA_NAEBUPoint@1@@Z @ 0x1C0016E34
 * Callers:
 *     ?RebaseSums@?$LinearFitT@$0BAA@@@QEAA_NXZ @ 0x1C0016DB4 (-RebaseSums@-$LinearFitT@$0BAA@@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall LinearFitT<256>::AddToSums(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  signed __int64 v3; // r9
  __int64 v4; // r11
  __int128 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r10
  __int128 v8; // rax
  bool v9; // zf
  char result; // al

  v2 = -1LL;
  v3 = *a2 - *(_QWORD *)(a1 + 40);
  v4 = a2[1] - *(_QWORD *)(a1 + 48);
  v5 = v3 * (__int128)v3;
  v6 = v5;
  if ( (__int64)v5 >= 0 )
  {
    if ( is_mul_ok(v3, v3) )
      goto LABEL_3;
    goto LABEL_8;
  }
  if ( *((_QWORD *)&v5 + 1) != -1LL )
LABEL_8:
    v6 = -1LL;
LABEL_3:
  v7 = *(_QWORD *)(a1 + 80) + v6;
  v8 = v3 * (__int128)v4;
  if ( (__int64)v8 < 0 )
    v9 = *((_QWORD *)&v8 + 1) == -1LL;
  else
    v9 = *((_QWORD *)&v8 + 1) == 0LL;
  if ( v9 )
    v2 = v3 * v4;
  *(_QWORD *)(a1 + 72) += v2;
  result = 1;
  *(_QWORD *)(a1 + 56) += v3;
  *(_QWORD *)(a1 + 64) += v4;
  ++*(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 80) = v7;
  return result;
}
