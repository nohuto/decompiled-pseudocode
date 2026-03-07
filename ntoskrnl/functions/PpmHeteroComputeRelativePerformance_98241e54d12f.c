char PpmHeteroComputeRelativePerformance()
{
  char v0; // r14
  __int64 *v2; // rcx
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  char v5; // si
  char v6; // cl
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 Prcb; // rax
  __int64 v11; // r9
  __int64 v12; // rbp
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r10
  unsigned __int64 i; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  int v20; // r8d
  char v21; // r9
  __int64 *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // r10
  __int64 v25; // rax
  char v26; // r8
  int v27; // r9d
  unsigned __int64 v28; // r10
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx

  v0 = 0;
  if ( !(unsigned int)KeIsEmptyAffinityEx(&PpmCheckRegistered) )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(&PpmPerfStatesRegistered, (unsigned __int16 *)&PpmCheckRegistered) )
    {
      if ( PpmPerfDomainCount != 1 )
      {
        v2 = (__int64 *)PpmPerfDomainHead;
        v3 = 0LL;
        if ( (__int64 *)PpmPerfDomainHead != &PpmPerfDomainHead )
        {
          do
          {
            v4 = v2[59];
            v2 = (__int64 *)*v2;
            if ( v3 > v4 )
              v4 = v3;
            v3 = v4;
          }
          while ( v2 != &PpmPerfDomainHead );
          if ( v4 )
          {
            v5 = 0;
            v6 = 0;
            if ( v4 >= 0x7FFFFFFFFFFFLL )
            {
              _BitScanReverse(&v7, HIDWORD(v4) + 0xFFFF);
              v5 = v7 - 14;
              v6 = v5;
            }
            v8 = v4 >> v6;
            v9 = -1;
            Prcb = KeGetPrcb(0);
            v11 = PpmPerfDomainHead;
            v12 = *(_QWORD *)(Prcb + 33968);
            while ( 1 )
            {
              v19 = 0LL;
              if ( (__int64 *)v11 == &PpmPerfDomainHead )
                break;
              v13 = *(_QWORD *)(v11 + 472);
              *(_BYTE *)(v11 + 480) = 100 * (v13 >> v5) / v8;
              if ( v13 >> v5 == v8 )
              {
                v14 = 0x10000LL;
              }
              else
              {
                v14 = ((v13 >> v5 << 16) + (v8 >> 1)) / v8;
                if ( v14 <= 1 )
                  v14 = 1LL;
              }
              v15 = v13 * *(unsigned int *)(v12 + 440);
              v16 = 0LL;
              for ( i = (v15 << 16) / (*(_QWORD *)(v12 + 472) * (unsigned __int64)*(unsigned int *)(v11 + 440));
                    (unsigned int)v16 < *(_DWORD *)(v11 + 296);
                    v16 = (unsigned int)(v16 + 1) )
              {
                v18 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 144 * v16);
                if ( v18 )
                {
                  if ( *(_BYTE *)(v18 + 68) )
                    *(_DWORD *)(v18 - 760) = i;
                  *(_DWORD *)(v18 + 64) = v14;
                }
              }
              v11 = *(_QWORD *)v11;
              if ( v9 >= v14 )
                v9 = v14;
            }
            v20 = PpmPerfDomainCount;
            v21 = 0;
            for ( PpmHeteroMinRelativePerformance = v9; v20; ++v21 )
            {
              v22 = (__int64 *)PpmPerfDomainHead;
              v23 = -1LL;
              if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
              {
                v19 = -1LL;
              }
              else
              {
                do
                {
                  v24 = v22[59];
                  if ( v24 > v19 && v23 >= v24 )
                    v23 = v22[59];
                  v22 = (__int64 *)*v22;
                }
                while ( v22 != &PpmPerfDomainHead );
                v25 = PpmPerfDomainHead;
                v19 = v23;
                do
                {
                  if ( *(_QWORD *)(v25 + 472) == v23 )
                  {
                    *(_BYTE *)(v25 + 301) = v21;
                    --v20;
                  }
                  v25 = *(_QWORD *)v25;
                }
                while ( (__int64 *)v25 != &PpmPerfDomainHead );
              }
            }
            v26 = 0;
            PpmHeteroNominalPerformanceClasses = v21;
            v27 = PpmPerfDomainCount;
            v28 = 0LL;
            while ( v27 )
            {
              v29 = PpmPerfDomainHead;
              v30 = 0xFFFFFFFFLL;
              if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
              {
                v28 = 0xFFFFFFFFLL;
              }
              else
              {
                do
                {
                  v31 = *(_QWORD *)(v29 + 472) * *(unsigned int *)(v29 + 444);
                  if ( v31 > v28 && v30 >= v31 )
                    v30 = *(_QWORD *)(v29 + 472) * *(unsigned int *)(v29 + 444);
                  v29 = *(_QWORD *)v29;
                }
                while ( (__int64 *)v29 != &PpmPerfDomainHead );
                v32 = PpmPerfDomainHead;
                v28 = v30;
                do
                {
                  if ( *(_QWORD *)(v32 + 472) * *(unsigned int *)(v32 + 444) == v30 )
                  {
                    if ( *(_BYTE *)(v32 + 302) != v26 )
                    {
                      v0 = 1;
                      *(_BYTE *)(v32 + 302) = v26;
                    }
                    --v27;
                  }
                  v32 = *(_QWORD *)v32;
                }
                while ( (__int64 *)v32 != &PpmPerfDomainHead );
              }
              ++v26;
            }
            PpmHeteroHighestPerformanceClasses = v26;
          }
        }
      }
    }
  }
  return v0;
}
