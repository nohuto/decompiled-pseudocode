__int64 __fastcall ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR::Compare(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // ecx
  unsigned int v5; // r12d
  __int64 v6; // r10
  int v7; // ebp
  __int64 v8; // r14
  __int64 v9; // r11
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // r9d
  __int64 v13; // rax

  v4 = a1[98];
  v5 = 0;
  v6 = (unsigned int)(*a2 >> v4);
  v7 = a1[100];
  v8 = (unsigned int)a1[102];
  v9 = (unsigned int)(*a3 >> v4);
  _BitScanReverse((unsigned int *)&v10, v6);
  _BitScanReverse((unsigned int *)&v11, v9);
  v12 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a1[2 * v10 + 32] + 16 * (v6 ^ (unsigned int)(1 << v10)))
                  + (unsigned int)(v7 * (*a2 & a1[99]))
                  + v8);
  v13 = *(_QWORD *)(*(_QWORD *)&a1[2 * v11 + 32] + 16 * (v9 ^ (unsigned int)(1 << v11)))
      + (unsigned int)(v7 * (*a3 & a1[99]));
  if ( v12 < *(_DWORD *)(v13 + v8) )
    return 0xFFFFFFFFLL;
  LOBYTE(v5) = v12 > *(_DWORD *)(v13 + v8);
  return v5;
}
