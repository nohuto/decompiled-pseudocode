_QWORD *__fastcall sub_14008B264(_QWORD *a1, _QWORD *a2)
{
  int v2; // edi
  _QWORD *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm0
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx

  v2 = 0;
  *a1 = off_1400D4D60;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = sub_14007E950((__int64)a1, a2[3]);
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
        v9 = a1[1];
        v10 = *(_OWORD *)(v7 + v8);
        v11 = (_QWORD *)(v7 + v8 + 16);
        v12 = (_QWORD *)(v7 + v9 + 16);
        *(_OWORD *)(v7 + v9) = v10;
        if ( v12 != v11 )
          sub_1400011A8(v12, v11[2], v11[3]);
        ++v2;
        v7 += 56LL;
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
