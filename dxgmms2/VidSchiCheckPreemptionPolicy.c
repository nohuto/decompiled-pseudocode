_BOOL8 __fastcall VidSchiCheckPreemptionPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v6; // esi
  __int64 v7; // r14
  unsigned int MostSignificantBit; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  bool v13; // cc
  int v14; // eax
  int v15; // ecx
  bool v16; // cc
  __int128 v17; // [rsp+40h] [rbp-58h] BYREF
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h] BYREF
  __int128 v20; // [rsp+70h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 184);
  *a2 = -1LL;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  if ( (v3 & 2) != 0 )
  {
    if ( a1 == *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1560) + 1568) )
    {
      v6 = 15;
      goto LABEL_4;
    }
    v6 = -18;
  }
  if ( !*(_DWORD *)(v2 + 2892) )
  {
    v6 = 2;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v7 + 2536) & 1) == 0 )
  {
    v6 = 3;
    goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 732));
  if ( _InterlockedIncrement((volatile signed __int32 *)(v2 + 2896)) != 1 )
  {
    v6 = 13;
    goto LABEL_16;
  }
  if ( *(_DWORD *)(v7 + 980) )
    v6 = -14;
  MostSignificantBit = RtlFindMostSignificantBit(*(unsigned int *)(v2 + 1772));
  v10 = *(unsigned int *)(a1 + 404);
  if ( MostSignificantBit <= (unsigned int)v10 )
  {
    if ( MostSignificantBit != (_DWORD)v10 )
    {
      if ( *(_BYTE *)(v2 + 2024) && gulPriorityToYieldPriorityBand[v10] != 3 )
      {
        v6 = 11;
        goto LABEL_16;
      }
      goto LABEL_21;
    }
    v11 = *(_QWORD *)(v2 + 8LL * *(unsigned int *)(v2 + 1560) + 1568);
    if ( v11 && *(_QWORD *)(*(_QWORD *)(v11 + 104) + 40LL) == *(_QWORD *)(*(_QWORD *)(a1 + 104) + 40LL) )
    {
      v14 = *(_DWORD *)(a1 + 408);
      if ( v14 > *(_DWORD *)(v11 + 408) )
      {
        v6 = -17;
        goto LABEL_4;
      }
      if ( v14 < *(_DWORD *)(v11 + 408) )
        goto LABEL_15;
    }
    v17 = 0LL;
    v18 = 0LL;
    if ( (unsigned __int8)VidSchiUpdateNodeRunningTime(v2, &v17) )
    {
      v6 = 11;
      *a2 = *(_QWORD *)(*((_QWORD *)&v17 + 1) + 480LL);
      _InterlockedDecrement((volatile signed __int32 *)(v2 + 2896));
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
      goto LABEL_4;
    }
    if ( !*((_QWORD *)&v17 + 1) )
    {
      v6 = 2;
      goto LABEL_16;
    }
    v12 = *(_DWORD *)(*((_QWORD *)&v17 + 1) + 484LL);
    v13 = v12 <= SDWORD1(v18);
    if ( v12 == DWORD1(v18) )
    {
      if ( *(_DWORD *)(*((_QWORD *)&v17 + 1) + 480LL) > (unsigned int)v18 )
        goto LABEL_30;
      v13 = v12 <= SDWORD1(v18);
    }
    if ( v13 )
      goto LABEL_21;
LABEL_30:
    v6 = 12;
    *a2 = *(_QWORD *)(*((_QWORD *)&v17 + 1) + 480LL) - v18;
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 2896));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
    goto LABEL_4;
  }
  if ( !*(_BYTE *)(v2 + 2024) )
  {
LABEL_15:
    v6 = 10;
LABEL_16:
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 2896));
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 732));
    goto LABEL_4;
  }
  v19 = 0LL;
  v20 = 0LL;
  if ( (unsigned __int8)VidSchiUpdateNodeRunningTime(v2, &v19) )
  {
    v6 = 11;
    *a2 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 480LL);
    goto LABEL_16;
  }
  if ( !*((_QWORD *)&v19 + 1) )
  {
    v6 = 2;
    goto LABEL_16;
  }
  v15 = *(_DWORD *)(*((_QWORD *)&v19 + 1) + 484LL);
  v16 = v15 <= SDWORD1(v20);
  if ( v15 == DWORD1(v20) )
  {
    if ( *(_DWORD *)(*((_QWORD *)&v19 + 1) + 480LL) > (unsigned int)v20 )
    {
LABEL_48:
      v6 = 12;
      *a2 = *(_QWORD *)(*((_QWORD *)&v19 + 1) + 480LL) - v20;
      goto LABEL_16;
    }
    v16 = v15 <= SDWORD1(v20);
  }
  if ( !v16 )
    goto LABEL_48;
LABEL_21:
  if ( !v6 )
    v6 = 1;
LABEL_4:
  VidSchiProfilePerformanceTick(1LL, v7, v2, 0LL, a1, 0LL, 0LL, v6);
  WdLogSingleEntry5(4LL, v2, *(_QWORD *)(v2 + 96), *(_QWORD *)(v2 + 152), a1, v6);
  return v6 < 0 || v6 == 1;
}
