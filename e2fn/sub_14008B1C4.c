_QWORD *__fastcall sub_14008B1C4(_QWORD *a1, _QWORD *a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int128 v10; // xmm1

  v2 = 0;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = sub_14000D244((__int64)a1, a2[3]);
  a1[1] = v5;
  if ( v5 )
  {
    a1[3] = a2[3];
    v6 = a2[2];
    a1[2] = v6;
    if ( v6 )
    {
      v7 = 0LL;
      do
      {
        v8 = a2[1];
        ++v2;
        v9 = a1[1];
        *(_OWORD *)(v9 + v7) = *(_OWORD *)(v8 + v7);
        v10 = *(_OWORD *)(v8 + v7 + 16);
        v7 += 32LL;
        *(_OWORD *)(v9 + v7 - 16) = v10;
      }
      while ( (unsigned __int64)v2 < a1[2] );
    }
  }
  else
  {
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return a1;
}
