__int64 __fastcall ST_STORE<SM_TRAITS>::StDmReuseCurrentRegion(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r11
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // ecx
  __int64 result; // rax

  v2 = *a2;
  v4 = a1;
  v5 = *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v2) & 0x1FFF;
  if ( (*(_DWORD *)(a1 + 776) & 0x40000) != 0 && SMKM_STORE<SM_TRAITS>::SmStIsRegionBusy(*(_QWORD *)(a1 + 800), v2) )
    return 3221225599LL;
  v6 = *(_DWORD *)(v4 + 816);
  if ( v5 >= (unsigned int)(3 * v6) >> 2 || v5 >= v6 - *(_DWORD *)(v4 + 820) + 1 )
    return 3221225599LL;
  result = ST_STORE<SM_TRAITS>::StCompactRegions(v4, *((_QWORD *)a2 + 1), v2, *((_QWORD *)a2 + 1), v2, 0);
  if ( (int)result >= 0 )
    a2[1] = v5;
  return result;
}
