/*
 * XREFs of PpmHeteroComputeRelativePerformance @ 0x1407BC0C8
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x1407BB39C (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1402CCE60 (KeIsEmptyAffinityEx.c)
 *     KeIsEqualAffinityEx @ 0x1403C2680 (KeIsEqualAffinityEx.c)
 */

char PpmHeteroComputeRelativePerformance()
{
  char v0; // di
  __int64 *v2; // rcx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rax
  char v5; // bl
  char v6; // cl
  unsigned int v7; // ebx
  __int64 v8; // r10
  unsigned int v9; // r9d
  unsigned __int64 v10; // r8
  __int64 v11; // r11
  unsigned __int64 v12; // r11
  unsigned int i; // edx
  __int64 v14; // rax
  int v15; // edx
  char v16; // r8
  unsigned __int64 v17; // r10
  __int64 *v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 j; // rax
  int v22; // r9d
  unsigned __int64 v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rcx
  __int64 k; // rcx

  v0 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(PpmCheckRegistered) )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(PpmPerfStatesRegistered, (unsigned __int16 *)PpmCheckRegistered) )
    {
      if ( PpmPerfDomainCount != 1 )
      {
        v2 = (__int64 *)PpmPerfDomainHead;
        v3 = 0LL;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            v4 = v3;
            v3 = v2[43];
            v2 = (__int64 *)*v2;
            if ( v4 > v3 )
              v3 = v4;
          }
          while ( v2 != &PpmPerfDomainHead );
          if ( v3 )
          {
            v5 = 0;
            v6 = 0;
            if ( v3 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v7, HIDWORD(v3) + 0xFFFF);
              v5 = v7 - 14;
              v6 = v5;
            }
            v8 = PpmPerfDomainHead;
            v9 = -1;
            v10 = v3 >> v6;
            while ( (__int64 *)v8 != &PpmPerfDomainHead )
            {
              v11 = *(_QWORD *)(v8 + 344) >> v5;
              *(_BYTE *)(v8 + 352) = 100 * v11 / v10;
              if ( v11 == v10 )
              {
                v12 = 0x10000LL;
              }
              else
              {
                v12 = ((v11 << 16) + (v10 >> 1)) / v10;
                if ( v12 <= 1 )
                  v12 = 1LL;
              }
              for ( i = 0; i < *(_DWORD *)(v8 + 200); ++i )
              {
                v14 = *(_QWORD *)(136LL * i + *(_QWORD *)(v8 + 216));
                if ( v14 )
                  *(_DWORD *)(v14 + 56) = v12;
              }
              v8 = *(_QWORD *)v8;
              if ( v9 >= v12 )
                v9 = v12;
            }
            v15 = PpmPerfDomainCount;
            v16 = 0;
            v17 = 0LL;
            PpmHeteroMinRelativePerformance = v9;
            while ( v15 )
            {
              v18 = (__int64 *)PpmPerfDomainHead;
              v19 = -1LL;
              while ( v18 != &PpmPerfDomainHead )
              {
                v20 = v18[43];
                if ( v20 > v17 && v19 >= v20 )
                  v19 = v18[43];
                v18 = (__int64 *)*v18;
              }
              for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
              {
                if ( *(_QWORD *)(j + 344) == v19 )
                {
                  *(_BYTE *)(j + 205) = v16;
                  --v15;
                }
              }
              v17 = v19;
              ++v16;
            }
            v22 = PpmPerfDomainCount;
            v23 = 0LL;
            PpmHeteroNominalPerformanceClasses = v16;
            while ( v22 )
            {
              v24 = PpmPerfDomainHead;
              v25 = 0xFFFFFFFFLL;
              while ( (__int64 *)v24 != &PpmPerfDomainHead )
              {
                v26 = *(_QWORD *)(v24 + 344) * *(unsigned int *)(v24 + 320);
                if ( v26 > v23 && v25 >= v26 )
                  v25 = *(_QWORD *)(v24 + 344) * *(unsigned int *)(v24 + 320);
                v24 = *(_QWORD *)v24;
              }
              for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
              {
                if ( *(_QWORD *)(k + 344) * *(unsigned int *)(k + 320) == v25 )
                {
                  if ( *(_BYTE *)(k + 206) != (_BYTE)v15 )
                  {
                    v0 = 1;
                    *(_BYTE *)(k + 206) = v15;
                  }
                  --v22;
                }
              }
              v23 = v25;
              LOBYTE(v15) = v15 + 1;
            }
            PpmHeteroHighestPerformanceClasses = v15;
          }
        }
      }
    }
  }
  return v0;
}
