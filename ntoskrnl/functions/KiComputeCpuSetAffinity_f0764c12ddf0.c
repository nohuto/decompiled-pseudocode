__int64 __fastcall KiComputeCpuSetAffinity(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // r13
  _QWORD *v6; // rsi
  _QWORD *v7; // r15
  char v8; // si
  _QWORD *v9; // rdx
  __int64 result; // rax
  unsigned __int16 *v11; // r8
  unsigned __int16 v12; // r10
  unsigned __int16 v13; // r9
  unsigned __int64 v14; // r8
  __int64 v15; // r11
  unsigned __int64 v16; // rdx
  _DWORD v17[68]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v18[68]; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v19[68]; // [rsp+250h] [rbp+150h] BYREF

  v18[0] = 2097153;
  memset(&v18[1], 0, 0x104uLL);
  v19[0] = 2097153;
  memset(&v19[1], 0, 0x104uLL);
  v17[0] = 2097153;
  memset(&v17[1], 0, 0x104uLL);
  memset(a2 + 4, 0, 8LL * *a2);
  v4 = KiMaximumGroups;
  *a2 = 1;
  v5 = *(_QWORD *)(a1 + 544);
  v6 = (_QWORD *)(v5 + 2376);
  v7 = (_QWORD *)(v5 + 2384);
  if ( (*(_DWORD *)(v5 + 2172) & 0x80u) != 0 )
  {
    v6 = (_QWORD *)*v6;
    v7 = (_QWORD *)*v7;
  }
  KiGetSystemAllowedSetsAffinityEx(v18, v4, 0LL);
  if ( ((*(_DWORD *)(a1 + 1380) >> 11) & 1) != 0 )
  {
    KiGetSystemAllowedSetsAffinityEx(a2, v4, (*(_DWORD *)(a1 + 1380) >> 11) & 1);
    KiOrAffinityEx((char *)v18, a2, v18, HIWORD(v18[0]));
  }
  KiCopyGroupMasksToAffinityEx(a2, v6, v4);
  if ( (*(_DWORD *)(v5 + 1120) & 0x8000000) == 0 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    v8 = 1;
    KiCopyAffinityEx((__int64)v19, HIWORD(v19[0]), (unsigned __int16 *)v18);
    KiOrAffinityEx((char *)v18, a2, v18, HIWORD(v18[0]));
  }
  else
  {
    v8 = 0;
    KiCopyAffinityEx((__int64)v18, HIWORD(v18[0]), a2);
    KiCopyAffinityEx((__int64)v19, HIWORD(v19[0]), a2);
  }
  if ( (unsigned int)KeIsEmptyAffinityEx(v18) )
    goto LABEL_14;
  v9 = (_QWORD *)(a1 + 1616);
  if ( (*(_DWORD *)(a1 + 1376) & 0x20000) != 0 )
    v9 = (_QWORD *)*v9;
  KiCopyGroupMasksToAffinityEx(v17, v9, v4);
  if ( (unsigned int)KeIsEmptyAffinityEx(v17) )
  {
    KiCopyGroupMasksToAffinityEx(a2, v7, v4);
    if ( (unsigned int)KeIsEmptyAffinityEx(a2) )
    {
      if ( !KiRestrictedSystemCpuSetsActive && v8 )
      {
LABEL_14:
        memset(a2 + 4, 0, 8LL * *a2);
        result = 1LL;
        *a2 = 1;
        return result;
      }
      v11 = (unsigned __int16 *)v19;
    }
    else
    {
      v11 = a2;
    }
    KiCopyAffinityEx((__int64)v17, HIWORD(v17[0]), v11);
  }
  if ( !(unsigned int)KiAndAffinityEx((unsigned __int16 *)v17, (unsigned __int16 *)v18, v17, HIWORD(v17[0])) )
    KiCopyAffinityEx((__int64)v17, HIWORD(v17[0]), (unsigned __int16 *)v18);
  KiCopyGroupMasksToAffinityEx(a2, &KiNonParkedCpuSets, v4);
  if ( (unsigned int)KiAndAffinityEx((unsigned __int16 *)v17, a2, a2, a2[1]) )
    KiCopyAffinityEx((__int64)v17, HIWORD(v17[0]), a2);
  result = (__int64)memset(a2 + 4, 0, 8LL * *a2);
  v12 = a2[1];
  v13 = 0;
  if ( v4 <= v12 )
    v12 = v4;
  *a2 = v12;
  if ( v12 )
  {
    result = 1LL;
    do
    {
      v14 = *(_QWORD *)&v17[2 * v13 + 2];
      *(_QWORD *)&a2[4 * v13 + 4] = 0LL;
      if ( v14 )
      {
        v15 = 0LL;
        do
        {
          _BitScanForward64(&v16, v14);
          v15 |= *((_QWORD *)KiCpuSetAffinities + 64 * v13 + (int)v16);
          v14 &= ~(1LL << v16);
          *(_QWORD *)&a2[4 * v13 + 4] = v15;
        }
        while ( v14 );
        result = 1LL;
      }
      ++v13;
    }
    while ( v13 < v12 );
  }
  return result;
}
