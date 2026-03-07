_QWORD *__fastcall sub_14000CE8C(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // xmm1_8

  v2 = 0LL;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = a2[1] - *a2;
  v6 = v5 / 24;
  if ( v5 / 24 && !(unsigned int)sub_14000D2B4(a1, v5 / 24) )
    a1[2] = v6;
  v7 = a2[1];
  for ( i = *a2; i != v7; i += 24LL )
  {
    v9 = a1[1];
    *(_OWORD *)(v9 + v2) = *(_OWORD *)i;
    v2 += 24LL;
    v10 = *(_QWORD *)(i + 16);
    *(_QWORD *)(v9 + v2 - 8) = v10;
  }
  return a1;
}
