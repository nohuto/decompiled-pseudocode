/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C01897E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F080 (Win32AllocPoolZInit.c)
 *     _IsValidParallelButton @ 0x1C00D3CC0 (_IsValidParallelButton.c)
 *     Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage @ 0x1C00D3EF4 (Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018520C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01852B0 (rimHidP_GetSpecificValueCaps.c)
 *     GetPreparsedData @ 0x1C01857E8 (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C01858C8 (_PopulatePropertyUsageValues.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v5; // ebx
  char *v6; // rsi
  unsigned __int16 v7; // r12
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // r15
  void *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // r8d
  __int64 v17; // r15
  _WORD *v18; // rdi
  unsigned int v19; // r8d
  _WORD *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // r14
  unsigned int v23; // r15d
  unsigned int v24; // r15d
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int16 v28; // [rsp+50h] [rbp-20h]
  unsigned int v29; // [rsp+54h] [rbp-1Ch] BYREF
  unsigned int v30; // [rsp+58h] [rbp-18h] BYREF
  int v31; // [rsp+5Ch] [rbp-14h]
  __int64 v32; // [rsp+60h] [rbp-10h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp-8h]
  unsigned __int16 v34; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+50h]

  v35 = a3;
  v29 = 0;
  v5 = 0;
  v30 = 0;
  v6 = 0LL;
  v34 = 0;
  v7 = 0;
  v28 = 0;
  v32 = 0LL;
  if ( (unsigned int)GetPreparsedData(a1, &v32) )
  {
    v10 = *(_DWORD *)(a1 + 360);
    if ( (v10 & 2) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 760) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3797);
        v10 = *(_DWORD *)(a1 + 360);
      }
      v11 = *(_QWORD *)(a1 + 760);
      v7 = *(_WORD *)(v11 + 4);
      v28 = *(_WORD *)(v11 + 10);
    }
    if ( (v10 & 0x20) != 0 )
      v7 = *(_WORD *)(a1 + 776);
    if ( !a4 )
    {
      v31 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3808);
    }
    v12 = v32;
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 0LL, v7, 0LL, 0LL, (__int64)&v34, v32) == -1072627705 )
    {
      v13 = (void *)Win32AllocPoolZInit(72LL * (v34 + (unsigned int)v28), 0x63767355u);
      Buffer = v13;
      if ( !v13 )
        return v5;
      if ( (unsigned int)PopulatePropertyUsageValues(a1, &v30, a4, v7, v34, (__int64)v13, a2, v35, v12) )
      {
        v14 = *(_QWORD *)(a1 + 760);
        if ( !v14 || !*(_WORD *)(v14 + 8) )
          goto LABEL_55;
        if ( v30 >= a4 )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3832);
        }
        if ( !*(_WORD *)(*(_QWORD *)(a1 + 760) + 10LL) )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3833);
        }
        if ( (unsigned int)PopulatePropertyUsageValues(
                             a1,
                             &v30,
                             a4,
                             *(_WORD *)(*(_QWORD *)(a1 + 760) + 8LL),
                             v28,
                             (__int64)Buffer + 72 * v30,
                             a2,
                             v35,
                             v12) )
        {
LABEL_55:
          if ( (unsigned int)Feature_Backport_FixGetRawPointerDeviceData__private_IsEnabledDeviceUsage() )
          {
            v22 = v30;
            v23 = a2 - v30;
            if ( a2 == v30 )
            {
              v16 = 3863;
            }
            else
            {
              v29 = *(_DWORD *)(a1 + 1040);
              v6 = (char *)Win32AllocPoolZInit(72LL * v29, 0x63767355u);
              if ( !v6 )
                goto LABEL_49;
              if ( (int)rimHidP_GetSpecificButtonCaps(0LL, 0LL, v7, 0LL, (__int64)v6, (__int64)&v29, v32) < 0 )
                goto LABEL_49;
              if ( v23 > v29 )
              {
                v31 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3880);
                if ( v23 > v29 )
                  goto LABEL_49;
              }
              memset((void *)(v35 + 28 * v22), 0, 28LL * v23);
              v24 = 0;
              v5 = 1;
              while ( (unsigned int)v22 < a2 && v24 < v29 )
              {
                if ( (*(_DWORD *)(a1 + 360) & 2) == 0
                  || (unsigned int)IsValidParallelButton(a1, (unsigned __int16 *)&v6[72 * v24], v32) )
                {
                  v25 = v35;
                  v26 = 28LL * (unsigned int)v22;
                  LODWORD(v22) = v22 + 1;
                  *(_WORD *)(v26 + v35 + 24) = *(_WORD *)&v6[72 * v24];
                  *(_WORD *)(v26 + v25 + 26) = *(_WORD *)&v6[72 * v24 + 56];
                  *(_DWORD *)(v26 + v25 + 4) = 1;
                }
                ++v24;
              }
              if ( (_DWORD)v22 == a2 )
                goto LABEL_49;
              v16 = 3892;
            }
          }
          else
          {
            v15 = a2 - v30;
            v29 = a2 - v30;
            if ( a2 != v30 )
            {
              v17 = (unsigned int)v15;
              v6 = (char *)Win32AllocPoolZInit(72 * v15, 0x63767355u);
              if ( v6 )
              {
                if ( *(_DWORD *)(a1 + 24) == 7 )
                  v7 = 0;
                if ( (int)rimHidP_GetSpecificButtonCaps(0LL, 0LL, v7, 0LL, (__int64)v6, (__int64)&v29, v32) >= 0 )
                {
                  if ( (_DWORD)v15 == v29
                    || (v31 = 0x20000,
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3926),
                        (_DWORD)v15 == v29) )
                  {
                    v18 = (_WORD *)(v35 + 28LL * v30);
                    memset(v18, 0, 28LL * (unsigned int)v15);
                    v19 = 0;
                    v5 = 1;
                    if ( v30 < a2 )
                    {
                      v20 = v18 + 13;
                      do
                      {
                        v21 = v19++;
                        *(v20 - 1) = *(_WORD *)&v6[72 * v21];
                        *v20 = *(_WORD *)&v6[72 * v21 + 56];
                        *(_DWORD *)(v20 - 11) = 1;
                        v20 += 14;
                        --v17;
                      }
                      while ( v17 );
                    }
                  }
                }
              }
              goto LABEL_49;
            }
            v16 = 3907;
          }
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v16);
        }
      }
LABEL_49:
      Win32FreePool((char *)Buffer);
      if ( v6 )
        Win32FreePool(v6);
      return v5;
    }
  }
  return 0LL;
}
