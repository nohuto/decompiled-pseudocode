/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C01B272C
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C01B70A0 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v9; // rsi
  unsigned __int16 v10; // r13
  unsigned int v11; // ebx
  __int64 v14; // r15
  __int64 v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // edi
  int SpecificValueCaps; // r15d
  unsigned __int16 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // eax
  int v24; // eax

  v9 = a8;
  v10 = a5;
  v11 = 0;
  if ( !a8 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3496);
  }
  v14 = a9;
  if ( !a9 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3497);
  }
  if ( !a1 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3498);
  }
  v15 = a6;
  if ( !a6 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3499);
  }
  if ( !a2 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3500);
  }
  if ( !v10 )
  {
    LODWORD(a8) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3501);
  }
  v16 = a7;
  if ( !a7 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3502);
  }
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3505);
  }
  if ( !v10 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= a3 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3511);
  }
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0LL, 0LL, a4, 0LL, v15, (__int64)&a5, v14);
  if ( a5 != v10 )
  {
    a7 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3520);
  }
  if ( SpecificValueCaps >= 0 )
  {
    v19 = 0;
    if ( v17 < v16 )
    {
      v20 = a8;
      while ( 1 )
      {
        if ( v19 >= v10 )
          goto LABEL_42;
        if ( *(_BYTE *)(a1 + 824) == *(_BYTE *)(v15 + 72LL * v19 + 2) && v17 < a3 )
          break;
LABEL_41:
        ++v19;
        if ( v17 >= v16 )
          goto LABEL_42;
      }
      v21 = 28LL * v17;
      *(_WORD *)(v21 + v9 + 24) = *(_WORD *)(v15 + 72LL * v19);
      *(_WORD *)(v21 + v9 + 26) = *(_WORD *)(v15 + 72LL * v19 + 56);
      *(_DWORD *)(v21 + v9) = *(_DWORD *)(v15 + 72LL * v19 + 40);
      *(_DWORD *)(v21 + v9 + 4) = *(_DWORD *)(v15 + 72LL * v19 + 44);
      if ( *(_WORD *)(v15 + 72LL * v19) == 1 )
      {
        v22 = *(_WORD *)(v15 + 72LL * v19 + 56);
        if ( v22 == 48 && *(_DWORD *)(v20 + 1336) )
        {
          *(_DWORD *)(v21 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
          {
LABEL_33:
            v23 = *(_DWORD *)(a1 + 188);
LABEL_34:
            *(_DWORD *)(v21 + v9 + 12) = v23;
            v24 = 13;
            *(_DWORD *)(v21 + v9 + 16) = 17;
LABEL_40:
            *(_DWORD *)(v21 + v9 + 20) = v24;
            ++v17;
            goto LABEL_41;
          }
LABEL_38:
          v23 = *(_DWORD *)(a1 + 184);
          goto LABEL_34;
        }
        if ( v22 == 49 && *(_DWORD *)(v20 + 1336) )
        {
          *(_DWORD *)(v21 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_33;
          goto LABEL_38;
        }
      }
      *(_DWORD *)(v21 + v9 + 8) = *(_DWORD *)(v15 + 72LL * v19 + 48);
      *(_DWORD *)(v21 + v9 + 12) = *(_DWORD *)(v15 + 72LL * v19 + 52);
      *(_DWORD *)(v21 + v9 + 16) = *(_DWORD *)(v15 + 72LL * v19 + 36);
      v24 = *(_DWORD *)(v15 + 72LL * v19 + 32);
      goto LABEL_40;
    }
LABEL_42:
    v11 = 1;
    *a2 = v17;
  }
  return v11;
}
