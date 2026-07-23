/*
 * XREFs of PopGetIdleTimesCallback @ 0x140344EE0
 * Callers:
 *     PoGetIdleTimes @ 0x140344D4C (PoGetIdleTimes.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1403449DC (PpmContinueActiveTimeAccumulation.c)
 *     PpmConvertTime @ 0x14034523C (PpmConvertTime.c)
 */

__int64 __fastcall PopGetIdleTimesCallback(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rax
  BOOL v7; // edi
  unsigned __int64 v8; // rbp
  _DWORD *v9; // r12
  _QWORD *v10; // r15
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  LARGE_INTEGER v13; // r8
  unsigned __int64 QuadPart; // r13
  signed __int64 v15; // rax
  signed __int64 v16; // rtt
  unsigned __int64 v17; // rax
  unsigned int v18; // r8d
  int v19; // r9d
  unsigned __int64 v20; // rax
  __int64 v22; // r10
  unsigned int i; // edx
  unsigned int v24; // ecx
  _DWORD *v25; // r11
  __int64 v26; // r8
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // r8
  _QWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // [rsp+20h] [rbp-68h]
  _QWORD *v35; // [rsp+28h] [rbp-60h]
  unsigned int *v36; // [rsp+30h] [rbp-58h]
  __int64 v37; // [rsp+38h] [rbp-50h]
  _QWORD *v38; // [rsp+40h] [rbp-48h]
  LARGE_INTEGER PerformanceCounter; // [rsp+48h] [rbp-40h]
  unsigned int v40; // [rsp+90h] [rbp+8h]
  int v41; // [rsp+A8h] [rbp+20h]

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = CurrentPrcb != (struct _KPRCB *)a1;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( CurrentPrcb != (struct _KPRCB *)a1 )
  {
    _m_prefetchw((const void *)(a1 + 32800));
    v11 = *(_QWORD *)(a1 + 32800);
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32800), v11, v11);
    }
    while ( v12 != v11 );
    v8 = v11;
    if ( !v11 )
      return 3221225473LL;
  }
  v36 = *(unsigned int **)(a1 + 32776);
  v37 = *(_QWORD *)(a1 + 0x8000);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  QuadPart = PerformanceCounter.QuadPart;
  v40 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 652LL);
  v41 = *(_DWORD *)(a1 + 32388);
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_OWORD *)(a2 + 32) = 0LL;
    if ( v36 )
    {
      v22 = v37;
      if ( v37 )
      {
        for ( i = 0; ; ++i )
        {
          v24 = *v36;
          v25 = v9;
          v34 = i;
          if ( *v36 >= *(_DWORD *)(v22 + 32) )
            v24 = *(_DWORD *)(v22 + 32);
          v38 = v10;
          if ( i >= v24 )
          {
            QuadPart = PerformanceCounter.QuadPart;
            *(_QWORD *)a2 = PpmConvertTime(*((_QWORD *)v36 + 3), PopQpcFrequency, 10000000LL);
            break;
          }
          v26 = 248LL * i;
          if ( *(_BYTE *)(v26 + v22 + 1056) )
          {
            if ( *(_BYTE *)(v26 + v22 + 1056) == 1 )
            {
              v27 = 1;
              goto LABEL_33;
            }
            if ( *(_BYTE *)(v26 + v22 + 1056) == 2 )
            {
              v27 = 2;
              goto LABEL_33;
            }
          }
          else if ( *(_BYTE *)(v26 + v22 + 1059) )
          {
            v27 = 2 - (*(_BYTE *)(v26 + v22 + 1060) != 0);
            goto LABEL_33;
          }
          v27 = 3;
LABEL_33:
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
              {
                v30 = (_DWORD *)(a2 + 40);
                v31 = (_QWORD *)(a2 + 24);
              }
              else
              {
                v30 = 0LL;
                v31 = 0LL;
              }
            }
            else
            {
              v30 = (_DWORD *)(a2 + 36);
              v31 = (_QWORD *)(a2 + 16);
            }
          }
          else
          {
            v30 = (_DWORD *)(a2 + 32);
            v31 = (_QWORD *)(a2 + 8);
          }
          v9 = v30;
          v10 = v31;
          v35 = v31;
          if ( i != *(_DWORD *)(v22 + 20) )
          {
            v10 = v38;
            v9 = v25;
          }
          if ( v30 && v31 )
          {
            *v30 += v36[250 * i + 13] + v36[250 * i + 14];
            v32 = *(_QWORD *)&v36[250 * i + 10];
            if ( *(_DWORD *)(v22 + 20) == i )
              v32 += *(_QWORD *)(a1 + 32784);
            v33 = PpmConvertTime(v32, PopQpcFrequency, 10000000LL);
            i = v34;
            v22 = v37;
            *v35 += v33;
          }
        }
      }
    }
  }
  if ( a3 )
  {
    if ( !v7 )
      PpmContinueActiveTimeAccumulation(a1, QuadPart, v13.QuadPart);
    *(_QWORD *)(a3 + 8) = PpmConvertTime(*(_QWORD *)(a1 + 32968), PopQpcFrequency, 10000000LL);
  }
  if ( !v7 )
    goto LABEL_18;
  _m_prefetchw((const void *)(a1 + 32800));
  v15 = *(_QWORD *)(a1 + 32800);
  do
  {
    v16 = v15;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32800), v15, v15);
  }
  while ( v16 != v15 );
  if ( v8 != v15 )
    return 3221225473LL;
  if ( QuadPart > v8 )
  {
    v17 = PpmConvertTime(QuadPart - v8, PopQpcFrequency, 10000000LL);
    if ( v10 && v9 )
    {
      ++*v9;
      *v10 += v17;
    }
    v18 = v40;
    v19 = v41;
    if ( v17 > KeMaximumIncrement )
    {
      v20 = v17 / KeMaximumIncrement;
      v18 = v20 + v40 - 1;
      v19 = v20 + v41 - 1;
    }
  }
  else
  {
LABEL_18:
    v19 = v41;
    v18 = v40;
  }
  if ( a2 )
  {
    if ( v36 && v37 )
      *(_QWORD *)a2 += *(_QWORD *)(a2 + 8) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24);
    else
      *(_QWORD *)a2 = v18 * (unsigned __int64)KeMaximumIncrement;
  }
  if ( a3 )
  {
    *(_DWORD *)a3 = v18;
    *(_DWORD *)(a3 + 4) = v19;
  }
  return 0LL;
}
