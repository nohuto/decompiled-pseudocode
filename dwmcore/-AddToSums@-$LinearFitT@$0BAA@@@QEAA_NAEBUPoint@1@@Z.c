char __fastcall LinearFitT<256>::AddToSums(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  __int128 v3; // rax
  bool v4; // zf
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 v7; // rax
  bool v8; // zf
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2[1] - a1[6];
  v3 = (__int64)(*a2 - a1[5]) * (__int128)(__int64)(*a2 - a1[5]);
  if ( (__int64)v3 < 0 )
    v4 = *((_QWORD *)&v3 + 1) == -1LL;
  else
    v4 = *((_QWORD *)&v3 + 1) == 0LL;
  if ( !v4 || (int)LongLongAdd(a1[10], v3, &v14) < 0 )
    return 0;
  v7 = v6 * (__int128)v2;
  v8 = (__int64)v7 < 0 ? *((_QWORD *)&v7 + 1) == -1LL : *((_QWORD *)&v7 + 1) == 0LL;
  if ( !v8 || (int)LongLongAdd(*(_QWORD *)(v5 + 72), v7, &v13) < 0 )
    return 0;
  v11 = v13;
  *(_QWORD *)(v9 + 56) += v10;
  *(_QWORD *)(v9 + 64) += v2;
  ++*(_DWORD *)(v9 + 8);
  *(_QWORD *)(v9 + 72) = v11;
  *(_QWORD *)(v9 + 80) = v14;
  return 1;
}
