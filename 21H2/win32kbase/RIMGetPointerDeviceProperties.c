/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C015E2B0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 *     GetPreparsedData @ 0x1C015B17C (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C015B260 (_PopulatePropertyUsageValues.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01635C4 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163618 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  unsigned __int16 v6; // r13
  unsigned __int16 v7; // r14
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // r14
  void *v18; // rax
  unsigned int v19; // r8d
  _WORD *v20; // rdx
  __int64 v21; // rax
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+54h] [rbp-2Ch]
  unsigned int v25; // [rsp+58h] [rbp-28h] BYREF
  int v26; // [rsp+5Ch] [rbp-24h] BYREF
  int v27; // [rsp+60h] [rbp-20h]
  void *v28; // [rsp+68h] [rbp-18h]
  __int64 v29; // [rsp+70h] [rbp-10h] BYREF

  v4 = 0;
  v26 = 0;
  v5 = 0LL;
  v25 = 0;
  v6 = 0;
  v23[0] = 0;
  v7 = 0;
  LOWORD(v24) = 0;
  v29 = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &v29) )
    return 0LL;
  v10 = *(_DWORD *)(a1 + 312);
  if ( (v10 & 2) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 712);
    if ( !v11 )
    {
      v24 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3609);
      v11 = *(_QWORD *)(a1 + 712);
      v10 = *(_DWORD *)(a1 + 312);
    }
    v7 = *(_WORD *)(v11 + 10);
    v6 = *(_WORD *)(v11 + 4);
    LOWORD(v24) = v7;
  }
  if ( (v10 & 0x20) != 0 )
    v6 = *(_WORD *)(a1 + 728);
  if ( !a4 )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3620);
  }
  v12 = v29;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, v6, 0, 0LL, (__int64)v23, v29) != -1072627705 )
    return 0LL;
  v28 = Win32AllocPoolZInit(72LL * (v23[0] + (unsigned int)v7), 1668707157LL);
  v13 = (__int64)v28;
  if ( v28 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, &v25, a4, v6, v23[0], (__int64)v28, a2, a3, v12) )
    {
      v14 = *(_QWORD *)(a1 + 712);
      if ( !v14 || !*(_WORD *)(v14 + 8) )
        goto LABEL_20;
      if ( v25 >= a4 )
      {
        v27 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3644);
        v14 = *(_QWORD *)(a1 + 712);
      }
      if ( !*(_WORD *)(v14 + 10) )
      {
        v27 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3645);
        v14 = *(_QWORD *)(a1 + 712);
      }
      if ( (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           &v25,
                           a4,
                           *(_WORD *)(v14 + 8),
                           v24,
                           v13 + 72LL * v25,
                           a2,
                           a3,
                           v12) )
      {
LABEL_20:
        v15 = v25;
        v16 = a2 - v25;
        v26 = a2 - v25;
        if ( a2 == v25 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3674);
        }
        else
        {
          v17 = (unsigned int)v16;
          v18 = Win32AllocPoolZInit(72 * v16, 1668707157LL);
          v5 = (__int64)v18;
          if ( v18 )
          {
            if ( *(_DWORD *)(a1 + 24) == 7 )
              v6 = 0;
            if ( (int)rimHidP_GetSpecificButtonCaps(0, 0, v6, 0, (__int64)v18, (__int64)&v26, v29) >= 0 )
            {
              if ( (_DWORD)v16 == v26
                || (v27 = 0x20000,
                    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3693),
                    (_DWORD)v16 == v26) )
              {
                memset((void *)(a3 + 28 * v15), 0, 28LL * (unsigned int)v16);
                v19 = 0;
                v4 = 1;
                if ( (unsigned int)v15 < a2 )
                {
                  v20 = (_WORD *)(a3 + 28 * v15 + 26);
                  do
                  {
                    v21 = v19++;
                    *(v20 - 1) = *(_WORD *)(v5 + 72 * v21);
                    *v20 = *(_WORD *)(v5 + 72 * v21 + 56);
                    *(_DWORD *)(v20 - 11) = 1;
                    v20 += 14;
                    --v17;
                  }
                  while ( v17 );
                }
              }
            }
          }
          v13 = (__int64)v28;
        }
      }
    }
    if ( v13 )
      Win32FreePool(v13);
  }
  if ( v5 )
    Win32FreePool(v5);
  return v4;
}
