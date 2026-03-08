/*
 * XREFs of EtwpCovSampStackHashCheck @ 0x1408A537C
 * Callers:
 *     EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1408A3ADC (EtwpCovSampCaptureBufferMapAddressesAndQueue.c)
 *     EtwpCovSampCaptureBufferProcess @ 0x1408A3BF4 (EtwpCovSampCaptureBufferProcess.c)
 *     EtwpCovSampSampleBufferProcess @ 0x1409EFD64 (EtwpCovSampSampleBufferProcess.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCovSampStackHashLookup @ 0x1409EFF34 (EtwpCovSampStackHashLookup.c)
 */

__int64 __fastcall EtwpCovSampStackHashCheck(__int64 a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  unsigned int *v7; // rbp
  unsigned int v8; // esi
  unsigned int *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  unsigned int v20; // eax
  unsigned int v21; // ecx
  BOOL v22; // r15d
  volatile signed __int32 *v23; // [rsp+58h] [rbp+10h] BYREF

  v23 = 0LL;
  if ( !*(_QWORD *)(a1 + 1312) )
    return 0LL;
  v7 = *(unsigned int **)(a1 + 1312);
  v8 = 0;
  v9 = *(unsigned int **)(a1 + 1320);
  if ( v7 == v9 )
    v9 = *(unsigned int **)(a1 + 1328);
  v10 = *(_QWORD *)(a1 + 1336);
  a4 = (unsigned int)a4;
  v11 = 8LL * (unsigned int)a4;
  if ( (unsigned __int64)v11 >= 8 )
  {
    v11 = 0LL;
    do
    {
      v12 = a3[6] + 37 * (a3[5] + 37 * (a3[4] + 37 * (a3[3] + 37 * (a3[2] + 37 * (a3[1] + 37 * (*a3 + 37 * v10))))));
      v13 = a3[7];
      a3 += 8;
      v10 = v13 + 37 * v12;
      --a4;
    }
    while ( a4 );
  }
  if ( v11 >= 1 )
  {
    v14 = v11 - 1;
    if ( !v14 )
    {
LABEL_22:
      LODWORD(v10) = *a3 + 37 * v10;
      goto LABEL_23;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
LABEL_21:
      LODWORD(v10) = *a3++ + 37 * v10;
      goto LABEL_22;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
LABEL_20:
      LODWORD(v10) = *a3++ + 37 * v10;
      goto LABEL_21;
    }
    v17 = v16 - 1;
    if ( !v17 )
    {
LABEL_19:
      LODWORD(v10) = *a3++ + 37 * v10;
      goto LABEL_20;
    }
    v18 = v17 - 1;
    if ( !v18 )
    {
LABEL_18:
      LODWORD(v10) = *a3++ + 37 * v10;
      goto LABEL_19;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
LABEL_17:
      LODWORD(v10) = *a3++ + 37 * v10;
      goto LABEL_18;
    }
    if ( v19 == 1 )
    {
      LODWORD(v10) = *a3++ + 37 * v10;
      goto LABEL_17;
    }
  }
LABEL_23:
  if ( (unsigned int)EtwpCovSampStackHashLookup(v7, (unsigned int)v10, &v23) )
  {
    return 1;
  }
  else
  {
    v20 = (7 * v7[1]) >> 3;
    if ( *v7 <= v20 )
    {
      v21 = _InterlockedIncrement((volatile signed __int32 *)v7);
      v22 = v21 == v20;
      if ( v21 < (7 * v7[1]) >> 3 )
      {
        while ( _InterlockedCompareExchange(v23, v10, 0) )
        {
          if ( (unsigned int)EtwpCovSampStackHashLookup(v7, (unsigned int)v10, &v23) )
          {
            v8 = 1;
            goto LABEL_32;
          }
        }
        if ( (unsigned int)EtwpCovSampStackHashLookup(v9, (unsigned int)v10, &v23) )
          v8 = 1;
      }
LABEL_32:
      if ( v22 )
      {
        memset(v9 + 2, 0, 4LL * v9[1]);
        *v9 = 0;
        _InterlockedExchange64((volatile __int64 *)(a1 + 1312), (__int64)v9);
      }
    }
  }
  return v8;
}
