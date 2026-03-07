__int64 __fastcall ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(
        _DWORD *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int v3; // r14d
  int v5; // ecx
  unsigned int v6; // r12d
  unsigned int v7; // r15d
  __int64 v8; // r10
  int v9; // ebx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  unsigned int v14; // r9d
  __int64 v15; // rax

  v3 = *a2;
  v5 = a1[82];
  v6 = 0;
  v7 = *a3;
  v8 = *a2 >> v5;
  v9 = a1[84];
  v10 = (unsigned int)a1[86];
  v11 = *a3 >> v5;
  _BitScanReverse((unsigned int *)&v12, v8);
  _BitScanReverse((unsigned int *)&v13, v11);
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v12 + 16] + 16 * (v8 ^ (unsigned int)(1 << v12)))
                  + v9 * (*a2 & a1[83])
                  + v10
                  + 8);
  v15 = *(_QWORD *)(*(_QWORD *)&a1[2 * v13 + 16] + 16 * (v11 ^ (unsigned int)(1 << v13))) + v9 * (v7 & a1[83]);
  if ( v14 >= *(_DWORD *)(v15 + v10 + 8) )
  {
    if ( v14 > *(_DWORD *)(v15 + v10 + 8) )
      return 1LL;
    if ( v3 >= v7 )
    {
      LOBYTE(v6) = v3 > v7;
      return v6;
    }
  }
  return 0xFFFFFFFFLL;
}
