_QWORD *__fastcall sub_14008062C(_QWORD *a1, _QWORD *a2)
{
  int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = 0;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = sub_140080A0C(a1, a2[3]);
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
        *(_QWORD *)(v9 + v7) = *(_QWORD *)(v8 + v7);
        *(_DWORD *)(v9 + v7 + 8) = *(_DWORD *)(v8 + v7 + 8);
        v7 += 12LL;
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
