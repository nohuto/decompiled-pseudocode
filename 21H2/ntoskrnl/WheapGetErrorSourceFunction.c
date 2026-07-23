/*
 * XREFs of WheapGetErrorSourceFunction @ 0x1403BB100
 * Callers:
 *     WheapCallErrorSourceInitialize @ 0x1403BAFC0 (WheapCallErrorSourceInitialize.c)
 *     WheapCallErrorSourceCorrect @ 0x1403BB0C0 (WheapCallErrorSourceCorrect.c)
 *     WheapReportBootError @ 0x1405BB0F4 (WheapReportBootError.c)
 *     WheapAttemptArchitecturalErrorRecovery @ 0x1405BBA08 (WheapAttemptArchitecturalErrorRecovery.c)
 *     WheapFillOutErrorRecord @ 0x1405BBC5C (WheapFillOutErrorRecord.c)
 *     WheapCallErrorSourceUninitialize @ 0x1405BCED0 (WheapCallErrorSourceUninitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WheapGetErrorSourceFunction(__int64 a1, int a2, char a3)
{
  __int64 v3; // r10
  signed __int32 i; // eax
  __int64 v5; // rax
  int v7; // edx
  __int64 v8; // rax
  int v9; // edx
  int v10; // edx
  __int64 v11; // rax

  v3 = 0LL;
  if ( a1 && *(_DWORD *)(a1 + 40) <= 0x10u )
  {
    if ( a3 )
    {
LABEL_8:
      if ( a2 )
      {
        v7 = a2 - 1;
        if ( v7 )
        {
          v9 = v7 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              if ( v10 == 1 )
              {
                v11 = *(int *)(a1 + 40);
                if ( (_DWORD)v11 == 16 )
                  return *(_QWORD *)(a1 + 184);
                else
                  return *((_QWORD *)&WheapSourceConfiguration + 8 * v11 + 6);
              }
            }
            else
            {
              return *((_QWORD *)&WheapSourceConfiguration + 8 * (__int64)*(int *)(a1 + 40) + 5);
            }
          }
          else
          {
            return *((_QWORD *)&WheapSourceConfiguration + 8 * (__int64)*(int *)(a1 + 40) + 4);
          }
        }
        else
        {
          v8 = *(int *)(a1 + 40);
          if ( (_DWORD)v8 == 16 )
            return *(_QWORD *)(a1 + 176);
          else
            return *((_QWORD *)&WheapSourceConfiguration + 8 * v8 + 3);
        }
      }
      else
      {
        v5 = *(int *)(a1 + 40);
        if ( (_DWORD)v5 == 16 )
          return *(_QWORD *)(a1 + 192);
        else
          return *((_QWORD *)&WheapSourceConfiguration + 8 * v5 + 2);
      }
    }
    else if ( *(_DWORD *)(a1 + 108) != 3 )
    {
      for ( i = *(_DWORD *)(a1 + 92); i >= 0; i = *(_DWORD *)(a1 + 92) )
      {
        if ( i == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), i + 1, i) )
          goto LABEL_8;
      }
    }
  }
  return v3;
}
