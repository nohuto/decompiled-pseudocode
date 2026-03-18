/*
 * XREFs of _PopulatePropertyUsageValues @ 0x1C018EE7C
 * Callers:
 *     RIMGetPointerDeviceProperties @ 0x1C0193110 (RIMGetPointerDeviceProperties.c)
 * Callees:
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PopulatePropertyUsageValues(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        struct _HIDP_VALUE_CAPS *a6,
        unsigned int a7,
        __int64 a8,
        struct _HIDP_PREPARSED_DATA *a9)
{
  __int64 v9; // rdi
  unsigned int v10; // ebx
  unsigned __int16 v11; // r13
  struct _HIDP_PREPARSED_DATA *v14; // r15
  struct _HIDP_VALUE_CAPS *v15; // r14
  unsigned int v16; // r12d
  unsigned int v17; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int SpecificValueCaps; // r15d
  unsigned __int16 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  USAGE UsageMin; // ax
  int v26; // eax
  int UnitsExp; // eax
  unsigned int v30; // [rsp+90h] [rbp+18h]

  v30 = a3;
  v9 = a8;
  v10 = 0;
  v11 = a5;
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v14 = a9;
  if ( !a9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v15 = a6;
  if ( !a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v16 = a7;
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  a8 = *(_QWORD *)(a1 + 16);
  if ( !a8 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( !v11 || !v16 )
    return 0LL;
  v17 = *a2;
  if ( v17 >= v30 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, a4, 0, v15, &a5, v14);
  if ( a5 != v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
  if ( SpecificValueCaps >= 0 )
  {
    v22 = 0;
    if ( v17 < v16 )
    {
      v23 = a8;
      while ( 1 )
      {
        if ( v22 >= v11 )
          goto LABEL_42;
        if ( *(_BYTE *)(a1 + 824) == v15[v22].ReportID && v17 < v30 )
          break;
LABEL_41:
        ++v22;
        if ( v17 >= v16 )
          goto LABEL_42;
      }
      v24 = 28LL * v17;
      *(_WORD *)(v24 + v9 + 24) = v15[v22].UsagePage;
      *(_WORD *)(v24 + v9 + 26) = v15[v22].Range.UsageMin;
      *(_DWORD *)(v24 + v9) = v15[v22].LogicalMin;
      *(_DWORD *)(v24 + v9 + 4) = v15[v22].LogicalMax;
      if ( v15[v22].UsagePage == 1 )
      {
        UsageMin = v15[v22].Range.UsageMin;
        if ( UsageMin == 48 )
        {
          if ( *(_DWORD *)(v23 + 1336) )
          {
            *(_DWORD *)(v24 + v9 + 8) = 0;
            if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) != 0 )
            {
LABEL_33:
              v26 = *(_DWORD *)(a1 + 188);
LABEL_34:
              *(_DWORD *)(v24 + v9 + 12) = v26;
              UnitsExp = 13;
              *(_DWORD *)(v24 + v9 + 16) = 17;
LABEL_40:
              *(_DWORD *)(v24 + v9 + 20) = UnitsExp;
              ++v17;
              goto LABEL_41;
            }
LABEL_38:
            v26 = *(_DWORD *)(a1 + 184);
            goto LABEL_34;
          }
        }
        else if ( UsageMin == 49 && *(_DWORD *)(v23 + 1336) )
        {
          *(_DWORD *)(v24 + v9 + 8) = 0;
          if ( ((*(_DWORD *)(a1 + 224) - 1) & 0xFFFFFFFD) == 0 )
            goto LABEL_33;
          goto LABEL_38;
        }
      }
      *(_DWORD *)(v24 + v9 + 8) = v15[v22].PhysicalMin;
      *(_DWORD *)(v24 + v9 + 12) = v15[v22].PhysicalMax;
      *(_DWORD *)(v24 + v9 + 16) = v15[v22].Units;
      UnitsExp = v15[v22].UnitsExp;
      goto LABEL_40;
    }
LABEL_42:
    v10 = 1;
    *a2 = v17;
  }
  return v10;
}
