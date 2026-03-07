__int64 __fastcall PopEtEnergyTrackerUpdateAggregate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  _DWORD *v9; // rbx
  int v10; // eax
  int v11; // ecx
  unsigned __int64 UnbiasedInterruptTime; // rax
  int v13; // r8d
  unsigned __int64 v14; // rdx
  unsigned int v15; // r9d
  int v16; // [rsp+20h] [rbp-1F8h] BYREF
  __int64 v17; // [rsp+28h] [rbp-1F0h] BYREF
  _BYTE v18[432]; // [rsp+30h] [rbp-1E8h] BYREF

  v17 = 0LL;
  memset(v18, 0, sizeof(v18));
  v16 = 0;
  result = PopEtEnergyValuesDeltaCalculate(a2 + 48, a3, v18, &v16);
  if ( !v16 )
  {
    PopEtAggregateGet(a1, a2 + 16, &v17);
    v9 = (_DWORD *)v17;
    PsAddProcessEnergyValues((_QWORD *)(v17 + 48), (__int64)v18);
    v10 = *(_DWORD *)(a2 + 484);
    if ( v10 >= 0 )
    {
      *(_DWORD *)(a2 + 484) = v10 | 0x80000000;
      ++v9[123];
    }
    ++v9[120];
    v11 = *(_DWORD *)(a2 + 484) ^ (*(_DWORD *)(a2 + 484) ^ (*(_DWORD *)(a2 + 484) + 1)) & 0x7FFFFFFF;
    *(_DWORD *)(a2 + 484) = v11;
    if ( (v11 & 0x7FFFFFFF) == 1 )
      ++v9[124];
    switch ( a4 )
    {
      case 2:
        ++v9[121];
        break;
      case 3:
        ++v9[122];
        break;
      case 4:
        ++v9[125];
        break;
    }
    if ( (*(_DWORD *)(a3 + 108) & 0x7FFFFFFF) != 0 )
      v9[127] |= 1u;
    if ( (*(_DWORD *)(a3 + 116) & 0x7FFFFFFF) != 0 )
      v9[127] |= 2u;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    v13 = *(_DWORD *)(a1 + 596);
    v14 = UnbiasedInterruptTime / 0x2710;
    v15 = UnbiasedInterruptTime / 0x2710 - v13;
    if ( (unsigned int)(UnbiasedInterruptTime / 0x2710) - *(_DWORD *)(a2 + 488) <= v15 )
      v13 = *(_DWORD *)(a2 + 488);
    result = (unsigned int)(v14 + v9[126] - v13);
    v9[126] = result;
    if ( (unsigned int)result > v15 )
      v9[126] = v15;
    *(_DWORD *)(a2 + 488) = v14;
  }
  return result;
}
