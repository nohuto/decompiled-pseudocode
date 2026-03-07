__int64 __fastcall HalpCollectProfileOwnershipStatus(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r10d
  int v4; // r9d
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v8; // r8
  unsigned int v9; // ebx
  char v10; // di
  _DWORD *v11; // rdx
  int v12; // r9d
  int v13; // r9d

  v3 = HalpNumberOfCounters;
  v4 = HalpNumberOfCounters;
  v5 = 16 * HalpNumberOfCounters + 8;
  *a3 = v5;
  if ( a2 < v5 )
  {
    v3 = HalpNumberOfGpCounters + HalpNumberOfFixedCounters;
    v6 = 16 * (HalpNumberOfGpCounters + HalpNumberOfFixedCounters) + 8;
    if ( a2 < v6 )
      return 3221225476LL;
    *a3 = v6;
  }
  a1[1] = v3;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v8 = HalpCounterStatus;
  else
    v8 = HalpCounterStatus + 8LL * (unsigned int)(*a1 * v4);
  v9 = 0;
  v10 = KeGetCurrentPrcb()->HalReserved[2] & 1;
  if ( v3 )
  {
    v11 = a1 + 2;
    do
    {
      if ( v10 )
      {
        *((_QWORD *)v11 + 1) = HalpFullPmuHandle;
        *v11 = 2;
      }
      else
      {
        v12 = *(_DWORD *)(*(_QWORD *)v8 + 24LL);
        if ( v12 && (v13 = v12 - 1) != 0 )
        {
          if ( v13 == 1 )
          {
            *v11 = 3;
            v11[2] = *(_DWORD *)(*(_QWORD *)v8 + 28LL);
          }
          else
          {
            *v11 = 0;
          }
        }
        else
        {
          *v11 = 1;
          v11[2] = *(_DWORD *)(*(_QWORD *)v8 + 32LL);
          v11[3] = *(_DWORD *)(*(_QWORD *)v8 + 28LL);
        }
      }
      ++v9;
      v11 += 4;
      v8 += 8LL;
    }
    while ( v9 < v3 );
  }
  return 0LL;
}
