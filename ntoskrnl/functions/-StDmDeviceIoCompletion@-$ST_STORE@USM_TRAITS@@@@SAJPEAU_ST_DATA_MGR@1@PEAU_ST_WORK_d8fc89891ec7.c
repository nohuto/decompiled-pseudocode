__int64 __fastcall ST_STORE<SM_TRAITS>::StDmDeviceIoCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v5; // r15
  __int64 k; // rsi
  __int64 v7; // r13
  __int64 m; // rbp
  LARGE_INTEGER v9; // rax
  __int64 v10; // rcx
  int v11; // r11d
  int v12; // ebp
  _DWORD *v13; // rax
  __int16 v14; // r8
  int v15; // r13d
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r10
  int v20; // r11d
  unsigned int IsCurrentRegion; // eax
  unsigned int v22; // eax
  __int64 v23; // rbp
  unsigned int v24; // eax
  __int64 i; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  _DWORD *v29; // rax
  LARGE_INTEGER v30; // rax
  __int64 v31; // r8
  __int64 j; // rcx
  unsigned __int64 v33; // rax
  __int64 v35; // [rsp+80h] [rbp+8h] BYREF
  __int64 v36; // [rsp+88h] [rbp+10h]

  v2 = a2 + 8;
  v5 = (unsigned int)(*(_DWORD *)(a2 + 24) >> *(_DWORD *)(a1 + 812));
  LODWORD(v35) = 0;
  v36 = *(_QWORD *)(a1 + 1032);
  if ( *(_QWORD *)(a2 + 16) )
  {
    v22 = *(_DWORD *)(a2 + 28);
    if ( (v22 & 8) != 0 )
    {
      v23 = *(_QWORD *)(a1 + 1000);
      v24 = v22 >> 5;
      for ( i = *(_QWORD *)(v23 + 16); *(_DWORD *)i < v24; i += 32LL )
        ;
      if ( v2 == *(_QWORD *)(i + 24) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v27 = 7LL * *(_QWORD *)(i + 8);
        *(_QWORD *)(i + 24) |= 1uLL;
        *(_QWORD *)(i + 8) = (unsigned __int64)(PerformanceCounter.QuadPart + v27 - *(_QWORD *)(i + 16)) >> 3;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v23 + 8));
    }
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v2, &v35) )
    {
      v12 = v35;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v35);
    }
    else
    {
      v12 = ST_STORE<SM_TRAITS>::StDmDeviceIoTransfer(a1, v28, v2);
      v29 = *(_DWORD **)(a1 + 1816);
      if ( v29 )
      {
        if ( v12 >= 0 )
          ++*v29;
        if ( (*(_DWORD *)(a2 + 28) & 4) == 0 )
        {
          v30 = KeQueryPerformanceCounter(0LL);
          v31 = *(_QWORD *)(a1 + 1816);
          v35 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 4LL);
          j = *(_QWORD *)(v31 + 1328);
          v33 = v30.QuadPart - v35;
          if ( *(_QWORD *)j < v33 || j != *(_QWORD *)(v31 + 1344) && *(_QWORD *)(j - 16) >= v33 )
          {
            for ( j = *(_QWORD *)(v31 + 1344); *(_QWORD *)j < v33; j += 16LL )
              ;
            *(_QWORD *)(v31 + 1328) = j;
          }
          ++*(_DWORD *)(j + 8);
        }
      }
    }
    ST_STORE<SM_TRAITS>::StDeviceWorkItemCleanup((_DWORD *)a1, a2);
  }
  else
  {
    for ( k = a1 + 1104; *(_DWORD *)k != (_DWORD)v5; k += 24LL )
      ;
    v7 = *(_QWORD *)(a1 + 1000);
    for ( m = *(_QWORD *)(v7 + 24); *(_DWORD *)m < *(_DWORD *)(a1 + 784); m += 32LL )
      ;
    if ( v2 == *(_QWORD *)(m + 24) )
    {
      v9 = KeQueryPerformanceCounter(0LL);
      v10 = 7LL * *(_QWORD *)(m + 8);
      *(_QWORD *)(m + 24) |= 1uLL;
      *(_QWORD *)(m + 8) = (unsigned __int64)(v9.QuadPart + v10 - *(_QWORD *)(m + 16)) >> 3;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 8));
    if ( (unsigned int)ST_STORE<SM_TRAITS>::StDeviceIoIsFailed(v2, &v35) )
    {
      v12 = v35;
      ST_STORE<SM_TRAITS>::StDmDeviceError(a1, 1, v35);
      v11 = 0;
    }
    else
    {
      v13 = *(_DWORD **)(a1 + 1816);
      v12 = v11;
      if ( v13 )
        ++*v13;
    }
    v14 = *(_WORD *)(v36 + 2 * v5);
    if ( v14 >= 0 )
    {
      if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1892);
        v15 = 1;
      }
      else
      {
        v15 = v11;
      }
      ST_STORE<SM_TRAITS>::StRegionReadDereference(a1, (unsigned int)v5);
    }
    else
    {
      v15 = 1;
      *(_WORD *)(v36 + 2 * v5) = v14 & 0x7FFF;
      v16 = SmEtwEnabled(0);
      if ( v16 )
      {
        SmEtwLogRegionOp(v16, 4, a1, v5, v12, v17, *(_BYTE *)(*(_QWORD *)(a1 + 1048) + v5));
        v19 = v36;
        v20 = 0;
        v18 = (unsigned int)v5;
      }
      if ( (*(_DWORD *)(a2 + 28) & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 1888);
        if ( (*(_WORD *)(v19 + 2 * v18) & 0x1FFF) != 0 )
          v15 = v20;
      }
    }
    *(_OWORD *)v2 = 0LL;
    *(_QWORD *)(v2 + 16) = 0LL;
    if ( v15 )
    {
      if ( *(_DWORD *)k != -1 )
      {
        ExFreePoolWithTag(*(PVOID *)(k + 8), 0);
        ExFreePoolWithTag(*(PVOID *)(k + 16), 0);
      }
      *(_OWORD *)k = 0LL;
      *(_QWORD *)(k + 16) = 0LL;
      *(_DWORD *)k = -1;
      IsCurrentRegion = ST_STORE<SM_TRAITS>::StDmIsCurrentRegion(a1, (unsigned int)v5, v17, v18);
      if ( IsCurrentRegion != 8 )
        ST_STORE<SM_TRAITS>::StDmCurrentRegionSet(a1, IsCurrentRegion, 0xFFFFFFFF);
    }
  }
  return (unsigned int)v12;
}
