_DWORD *__fastcall ST_STORE<SM_TRAITS>::StDmCombinePageEntry(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  _DWORD *v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _DWORD *v8; // rbx

  v2 = *(_DWORD *)(a2 + 4);
  v3 = (_DWORD *)(a1 + 192);
  while ( 1 )
  {
    v6 = v2 >> v3[66];
    _BitScanReverse((unsigned int *)&v7, v6);
    v8 = (_DWORD *)((unsigned int)v3[70]
                  + v3[68] * (v3[67] & v2)
                  + *(_QWORD *)(*(_QWORD *)&v3[2 * v7] + 16 * (v6 ^ (unsigned int)(1 << v7))));
    if ( *v8 != -1 )
      break;
    v2 = v8[1];
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v8);
    SmHpChunkFree(v3);
    --*(_DWORD *)(a1 + 1896);
  }
  if ( *(_DWORD *)(a2 + 4) != v2 )
    *(_DWORD *)(a2 + 4) = v2;
  return v8;
}
