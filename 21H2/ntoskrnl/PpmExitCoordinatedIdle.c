/*
 * XREFs of PpmExitCoordinatedIdle @ 0x1402C8900
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KdCallPowerHandlers @ 0x140510DC4 (KdCallPowerHandlers.c)
 *     KdPowerTransitionEx @ 0x140511200 (KdPowerTransitionEx.c)
 *     PpmExitCoordinatedIdleState @ 0x140565E48 (PpmExitCoordinatedIdleState.c)
 *     PpmUpdatePlatformIdleAccounting @ 0x1405683F4 (PpmUpdatePlatformIdleAccounting.c)
 *     PpmEventCoordinatedIdleTransition @ 0x1405795B0 (PpmEventCoordinatedIdleTransition.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14057BF60 (PopIdleWakeNotifyWakeSource.c)
 */

__int64 __fastcall PpmExitCoordinatedIdle(
        __int64 a1,
        __int64 a2,
        __int64 i,
        int a4,
        char a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // rdi
  char v11; // bp
  unsigned int v14; // esi
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 v20; // r12
  unsigned int v21; // ecx
  char v22; // r10
  int v23; // r11d
  __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // r12
  unsigned __int64 v27; // rax
  _BYTE v28[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-34h]
  __int64 v30; // [rsp+38h] [rbp-30h]

  v9 = 0LL;
  v28[0] = 0;
  v11 = i;
  v14 = -1;
  if ( PpmPlatformStates )
  {
    if ( !(_BYTE)i )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 4); i = (unsigned int)(i + 1) )
      {
        v16 = *(unsigned int *)(*(_QWORD *)(a2 + 16) + 4 * i);
        v17 = PpmPlatformStates + 384 * v16;
        if ( (*(_DWORD *)(v17 + 320) & 0x3000000) == 0x1000000 )
          *(_DWORD *)(v17 + 320) = *(_DWORD *)(v17 + 320) & 0xFE000FFF | ((*(_DWORD *)(v17 + 320) & 0xFFF | 0x2000) << 12);
        if ( a5 )
          ++*(_DWORD *)(1008 * v16 + *(_QWORD *)(PpmPlatformStates + 48) + 24);
      }
    }
    LODWORD(v18) = *(_DWORD *)PpmPlatformStates;
    if ( *(_DWORD *)PpmPlatformStates )
    {
      do
      {
        v19 = *(unsigned int *)(a1 + 36);
        v18 = (unsigned int)(v18 - 1);
        LOBYTE(v29) = 0;
        v20 = 384 * v18 + PpmPlatformStates + 64;
        v21 = KiProcessorIndexToNumberMappingTable[v19];
        v30 = v20;
        if ( ((*(_QWORD *)(v20 + 8 * ((unsigned __int64)v21 >> 6) + 72) >> (v21 & 0x3F)) & 1) != 0
          && (unsigned __int8)PpmExitCoordinatedIdleState(v20 + 256, v28, i) )
        {
          v22 = a5;
          *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v9) = v18;
          v9 = (unsigned int)(v9 + 1);
          if ( (_DWORD)v9 == 1 && *(_BYTE *)(v20 + 57) )
          {
            v14 = v18;
            if ( v11 )
            {
              if ( a4 < 0 || a5 )
              {
                v23 = a9;
                i = v29;
              }
              else
              {
                i = v29;
                v23 = a9;
                if ( (_DWORD)v18 == PpmDripsStateIndex && *(_BYTE *)(PpmPlatformStates + 56) )
                {
                  i = (unsigned __int8)v29;
                  if ( a9 != 7 )
                    i = 1LL;
                  v29 = i;
                }
              }
              if ( *(_BYTE *)(v20 + 56) )
              {
                KdCallPowerHandlers(1LL);
                LOBYTE(v24) = 1;
                KdPowerTransitionEx(2147483649LL, v24);
                i = v29;
                v22 = a5;
                v23 = a9;
              }
              if ( (PopSimulate & 0x100) != 0 && a4 >= 0 && v22 && a7 && (_DWORD)v18 == PpmDripsStateIndex )
                KeBugCheckEx(0xA0u, 0x257uLL, (unsigned int)v18, 0LL, 0LL);
            }
            else
            {
              i = v29;
              v23 = a9;
            }
            *(_BYTE *)(PpmPlatformStates + 56) = 0;
          }
          else
          {
            v23 = a9;
            i = v29;
          }
          if ( !v22 )
          {
            v25 = *(_QWORD *)(v30 + 264);
            v26 = *(_QWORD *)(PpmPlatformStates + 48) + 1008LL * (unsigned int)v18;
            if ( a6 >= v25 )
            {
              v27 = a6 - v25;
              *(_QWORD *)(v26 + 56) += a6 - v25;
            }
            else
            {
              v27 = 0LL;
            }
            v30 = v27;
            if ( (_BYTE)i )
            {
              PopIdleWakeNotifyWakeSource(v14, v23, a8, v25, a6);
              v27 = v30;
            }
            if ( a4 < 0 && v28[0] )
            {
              ++*(_DWORD *)(v26 + 28);
            }
            else
            {
              ++*(_DWORD *)(v26 + 32);
              PpmUpdatePlatformIdleAccounting(v26 + 24, v27);
            }
          }
        }
      }
      while ( (_DWORD)v18 );
    }
    if ( v11 )
      PpmEventCoordinatedIdleTransition(0LL, (unsigned int)v9, *(_QWORD *)(a2 + 16));
  }
  result = v14;
  *(_DWORD *)(a2 + 4) = v9;
  return result;
}
