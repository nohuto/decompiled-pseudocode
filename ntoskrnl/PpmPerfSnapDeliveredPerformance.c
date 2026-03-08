/*
 * XREFs of PpmPerfSnapDeliveredPerformance @ 0x140234BB0
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140234630 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfAction @ 0x140236430 (PpmPerfAction.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x140234F00 (PpmSnapPerformanceAccumulation.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x1402356B4 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmPerfSnapProcessorCyclesWorkloadClass @ 0x140235748 (PpmPerfSnapProcessorCyclesWorkloadClass.c)
 *     PpmPerfUpdateHwDebugData @ 0x140235DB0 (PpmPerfUpdateHwDebugData.c)
 *     PpmPerfCheckForIllegalProcessorThrottle @ 0x140235DF8 (PpmPerfCheckForIllegalProcessorThrottle.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14059DC74 (PpmHvSnapPerformanceAccumulation.c)
 */

char __fastcall PpmPerfSnapDeliveredPerformance(__int64 a1, char a2, int a3)
{
  __int64 v3; // r15
  unsigned int *v7; // rsi
  _QWORD *v8; // r12
  __int64 v9; // r13
  bool v10; // r14
  char result; // al
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  __int64 v15; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r13
  unsigned __int64 v22; // rbp
  unsigned int v23; // r11d
  __int64 v24; // r14
  unsigned __int64 v25; // rdi
  unsigned int i; // r9d
  __int64 v27; // r10
  __int64 v28; // rax
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // [rsp+30h] [rbp-48h]
  __int64 v33; // [rsp+80h] [rbp+8h]
  __int64 v34; // [rsp+98h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  if ( !v3 )
    return 1;
  v7 = *(unsigned int **)(v3 + 152);
  v8 = *(_QWORD **)(v3 + 216);
  v9 = v3 + 96;
  if ( *(_BYTE *)(a1 + 68) )
  {
    v33 = a1 - 33968;
    v10 = a1 - 33968 != (_QWORD)KeGetCurrentPrcb();
    result = PpmSnapPerformanceAccumulation((int)a1 - 33968, 0, v10, 1, v3 + 96, v7);
  }
  else
  {
    v33 = 0LL;
    v10 = 0;
    while ( 1 )
    {
      result = PpmHvSnapPerformanceAccumulation(a1, 0, a3, (int)v3 + 96, (__int64)v7);
      if ( !a2 )
        break;
      if ( result )
        goto LABEL_5;
    }
  }
  if ( result )
  {
LABEL_5:
    v12 = *(_QWORD *)(v3 + 160);
    if ( *(_QWORD *)v9 <= v12 )
      return 0;
    v13 = *(_QWORD *)v9 - v12;
    v14 = *(_QWORD *)(v3 + 104) - *(_QWORD *)(v3 + 168);
    if ( v14 > v13 && v10 )
    {
      return 0;
    }
    else
    {
      v15 = v33;
      if ( v33 && !v10 )
      {
        PpmPerfCheckForIllegalProcessorThrottle(v33);
        PpmPerfUpdateHwDebugData(v33);
        v15 = v33;
      }
      if ( v14 )
      {
        v16 = (*(_QWORD *)(v3 + 128) - *(_QWORD *)(v3 + 192)) / v14;
        v17 = (*(_QWORD *)(v3 + 120) - *(_QWORD *)(v3 + 184)) / v14;
        if ( *(_QWORD *)a1 )
          v18 = *(unsigned int *)(*(_QWORD *)a1 + 440LL);
        else
          v18 = *(unsigned int *)(v15 + 68);
        v32 = (unsigned int)v18;
        v19 = (*(_QWORD *)(v3 + 120) - *(_QWORD *)(v3 + 184)) * v18 / 0x64uLL / v14;
        if ( (_DWORD)v16 != *(_DWORD *)(v3 + 224) || (_DWORD)v17 != *(_DWORD *)(v3 + 228) )
          PpmEventTraceDeliveredPerfChange(a1, v16, v17, v19, v13);
        if ( *(_BYTE *)(a1 + 68) )
        {
          v20 = 47LL;
          v21 = (unsigned int)v19;
          if ( (unsigned int)v19 / 0x64 < 0x2F )
            v20 = (unsigned int)v19 / 0x64;
          v22 = *(_QWORD *)v7 - *v8;
          v23 = 0;
          v34 = (unsigned int)v20;
          v24 = *(_QWORD *)(v3 + 8 * v20 + 1016);
          do
          {
            while ( 1 )
            {
              v25 = 0LL;
              for ( i = 0; i < 2; ++i )
              {
                if ( v7[12] )
                {
                  v27 = v7[12];
                  v28 = v7[12] * (i + 2 * v23);
                  do
                  {
                    v29 = *(_QWORD *)&v7[2 * v28 + 14] - v8[v28 + 7];
                    v28 = (unsigned int)(v28 + 1);
                    v25 += v29;
                    --v27;
                  }
                  while ( v27 );
                }
              }
              if ( v25 >= v22 )
                v22 = 0LL;
              else
                v22 -= v25;
              v30 = v25 * v21 / v32;
              if ( v23 )
                break;
              v24 += v30;
              *(_QWORD *)(v3 + 8 * v34 + 248) += v30;
              v23 = 1;
              *(_QWORD *)(v3 + 8 * v34 + 1016) = v24;
            }
            if ( v23 - 5 <= 1 || v23 == 2 )
            {
              v31 = v34;
              *(_QWORD *)(v3 + 8 * v34 + 632) += v30;
            }
            else
            {
              v31 = v34;
            }
            v24 += v30;
            ++v23;
            *(_QWORD *)(v3 + 8 * v31 + 1016) = v24;
          }
          while ( v23 < 7 );
          v9 = v3 + 96;
          if ( v22 )
          {
            *(_QWORD *)(v3 + 8 * v31 + 248) += v22;
            *(_QWORD *)(v3 + 8 * v31 + 1016) = v24 + v22;
          }
          PpmPerfSnapProcessorCyclesWorkloadClass(v33, v7, v8);
        }
      }
      *(_OWORD *)(v3 + 160) = *(_OWORD *)v9;
      *(_OWORD *)(v3 + 176) = *(_OWORD *)(v9 + 16);
      *(_OWORD *)(v3 + 192) = *(_OWORD *)(v9 + 32);
      *(_QWORD *)(v3 + 208) = *(_QWORD *)(v9 + 48);
      memmove(v8, v7, (int)(112 * v7[12] + 56));
      return 1;
    }
  }
  return result;
}
