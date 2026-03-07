__int64 __fastcall sub_14008BE74(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rbx

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 < a3 )
    return -1LL;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = 2 * a3;
  v7 = v3 - a3;
  v8 = 0;
  v9 = 0LL;
  while ( (unsigned int)sub_1400B6E50(v5 + 2 * v9, a2, v6) )
  {
    v9 = ++v8;
    if ( v8 > v7 )
      return -1LL;
  }
  return v9;
}
