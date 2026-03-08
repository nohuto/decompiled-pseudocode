/*
 * XREFs of WheapGetErrorSourceFunction @ 0x14037D8DC
 * Callers:
 *     WheapCallErrorSourceCorrect @ 0x14037D824 (WheapCallErrorSourceCorrect.c)
 *     WheapCallErrorSourceInitialize @ 0x14037D864 (WheapCallErrorSourceInitialize.c)
 *     WheapReportBootError @ 0x14060E01C (WheapReportBootError.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 *     WheapCallErrorSourceRecover @ 0x1406103F8 (WheapCallErrorSourceRecover.c)
 *     WheapCallErrorSourceUninitialize @ 0x140610450 (WheapCallErrorSourceUninitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetErrorSourceFunction(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  _QWORD *v5; // r8
  signed __int32 i; // eax
  int v7; // edx
  __int64 v8; // rax
  __int64 v10; // rax
  int v11; // edx
  int v12; // edx
  __int64 v13; // rax

  v3 = 0LL;
  if ( a1 && *(_DWORD *)(a1 + 40) <= 0x12u )
  {
    v5 = &WheapSourceConfiguration;
    if ( (*(_BYTE *)(a1 + 132) & 1) != 0 )
      v5 = &WheapSourceConfigOverride;
    if ( a3 )
    {
LABEL_10:
      if ( a2 )
      {
        v7 = a2 - 1;
        if ( v7 )
        {
          v11 = v7 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              if ( v12 == 1 )
              {
                v13 = *(int *)(a1 + 40);
                if ( (_DWORD)v13 == 16 )
                  return *(_QWORD *)(a1 + 184);
                else
                  return v5[8 * v13 + 6];
              }
            }
            else
            {
              return v5[8 * (__int64)*(int *)(a1 + 40) + 5];
            }
          }
          else
          {
            return v5[8 * (__int64)*(int *)(a1 + 40) + 4];
          }
        }
        else
        {
          v8 = *(int *)(a1 + 40);
          if ( (_DWORD)v8 == 16 )
            return *(_QWORD *)(a1 + 176);
          else
            return v5[8 * v8 + 3];
        }
      }
      else
      {
        v10 = *(int *)(a1 + 40);
        if ( (_DWORD)v10 == 16 )
          return *(_QWORD *)(a1 + 192);
        else
          return v5[8 * v10 + 2];
      }
    }
    else if ( *(_DWORD *)(a1 + 108) != 3 )
    {
      for ( i = *(_DWORD *)(a1 + 92); i >= 0; i = *(_DWORD *)(a1 + 92) )
      {
        if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), i + 1, i) )
          goto LABEL_10;
      }
    }
  }
  return v3;
}
