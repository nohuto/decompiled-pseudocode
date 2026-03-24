/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C017A940
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C017BD98 (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetUsageValue @ 0x1C016359C (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C016360C (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C0163674 (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C0178204 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C0179F68 (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C017A028 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C017A2C8 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C017A82C (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C017B2A4 (rimExtractTouchInfo.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v11; // ebp
  struct _HIDP_PREPARSED_DATA *v14; // r10
  __int64 v15; // rcx
  unsigned int v16; // r15d
  int DigitizerPageButtonUsages; // ebx
  __int64 v19; // rdx
  __int64 v20; // r14
  int v22; // eax
  unsigned int v23; // ebp
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r8
  BOOL v26; // ebp
  int v27; // edx
  _DWORD *v28; // r15
  int UsageValue; // eax
  __int16 v30; // ax
  _DWORD *v31; // rax
  int v32; // r9d
  int v33; // edx
  int v34; // edx
  int v35; // ecx
  __int64 v36; // rcx
  int v37; // eax
  unsigned __int16 v38; // r8
  int v40; // [rsp+28h] [rbp-80h]
  char v41[88]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v43; // [rsp+C0h] [rbp+18h]
  unsigned int v45; // [rsp+E0h] [rbp+38h]
  int v46; // [rsp+E8h] [rbp+40h]

  v11 = (unsigned __int8)*a3;
  v14 = a2;
  v15 = 0LL;
  v16 = a4;
  DigitizerPageButtonUsages = 0;
  v19 = *(_QWORD *)(a1 + 712);
  v20 = a1 + 352;
  v43 = v19;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v19, 1, 60, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    v14 = a2;
    v15 = 0LL;
    v19 = v43;
  }
  v45 = 0;
  *a8 = 1;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 724) )
  {
LABEL_43:
    *(_DWORD *)(a7 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
    *(_DWORD *)(a7 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v35 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v35 - 1) > 3 )
    {
      if ( v35 != 7 )
      {
        if ( (unsigned int)(v35 - 5) > 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v34) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v34, 1, 63, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
          }
          LODWORD(a9) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2736);
        }
        else
        {
          *(_DWORD *)(a7 + 64) = 3;
          rimExtractPenInfo(a1, a6, (_DWORD *)a7);
        }
LABEL_53:
        DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, a3, v16, a7);
        if ( DigitizerPageButtonUsages >= 0 )
        {
          v37 = *(_DWORD *)(a1 + 312);
          if ( (v37 & 8) != 0 && (v37 & 0x2000) == 0 )
          {
            v38 = *(_WORD *)(a7 + 58);
            LODWORD(a10) = 1;
            LOWORD(a9) = 0;
            if ( rimHidP_GetUsages(v36, 0xFF00u, v38, (unsigned __int16 *)&a9, (unsigned int *)&a10, a2, a3, v16) >= 0
              && (_DWORD)a10 == 1
              && (_WORD)a9 == 207 )
            {
              *a11 = 1;
            }
          }
        }
LABEL_60:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = 4;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            v33,
            1,
            64,
            (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
            DigitizerPageButtonUsages);
        }
        return (unsigned int)DigitizerPageButtonUsages;
      }
      *(_DWORD *)(a7 + 64) = 5;
    }
    else
    {
      *(_DWORD *)(a7 + 64) = 2;
    }
    rimExtractTouchInfo(a1, a6, a7);
    goto LABEL_53;
  }
  v22 = v11;
  v46 = v11;
  v23 = 0;
  while ( 1 )
  {
    if ( v22 != *(_DWORD *)(v20 + 4) )
      goto LABEL_22;
    v24 = *(_WORD *)(v20 + 12);
    v25 = *(_WORD *)(a7 + 58);
    v26 = (unsigned __int16)(v24 - 48) <= 1u;
    if ( v19 && *(_WORD *)(v19 + 8) && *(_WORD *)v20 == 1 && (unsigned __int16)(v24 - 48) <= 1u )
    {
      *(_DWORD *)(v20 + 48) = 0;
      v15 = *(unsigned __int16 *)(a7 + 58);
      v25 = *(_WORD *)(*(_QWORD *)(v19 + 24) + 8 * v15 + 2);
    }
    if ( (*(_DWORD *)(a1 + 312) & 0x200) != 0 && *(_WORD *)v20 == 1 && (unsigned __int16)(v24 - 48) <= 1u )
    {
      DigitizerPageButtonUsages = rimHidP_GetUsageValueArray(v15, 1u, v25, v24, v41, v40, v14, a3, v16);
      if ( DigitizerPageButtonUsages < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)DigitizerPageButtonUsages;
        v32 = 61;
        goto LABEL_38;
      }
      v28 = (_DWORD *)(v20 + 52);
      rimExtractGeometryPoints(*(_WORD *)(v20 + 12), a7, v20 + 52, (__int64)v41, *(unsigned __int16 *)(v20 + 56));
      v15 = 0LL;
      goto LABEL_17;
    }
    v28 = (_DWORD *)(v20 + 52);
    UsageValue = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v20, v25, v24, (unsigned int *)(v20 + 52), v14, a3, a4);
    v15 = 0LL;
    DigitizerPageButtonUsages = UsageValue;
    if ( UsageValue < 0 )
      break;
LABEL_17:
    if ( *(_DWORD *)(v20 + 16) )
    {
      if ( *v28 < *(_DWORD *)(v20 + 32) || *v28 > *(_DWORD *)(v20 + 36) )
      {
        if ( *(_WORD *)v20 == 1 && v26 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v30 = *(_WORD *)(v20 + 12);
          if ( v30 == 48 )
          {
            v31 = a9;
          }
          else
          {
            if ( v30 != 49 )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2689);
              v15 = 0LL;
            }
            v31 = a10;
          }
          *v31 = 1;
        }
      }
      else
      {
        *a8 = 0;
      }
    }
    else
    {
      *a8 = 0;
      if ( !v26 || a5 )
      {
        RIMEnsureUsageWithinLogicalBoundary(v20);
        v15 = 0LL;
      }
    }
    v22 = v46;
    v16 = a4;
    v23 = v45;
LABEL_22:
    ++v23;
    v20 += 60LL;
    v45 = v23;
    if ( v23 >= *(_DWORD *)(a1 + 724) )
    {
      if ( DigitizerPageButtonUsages < 0 )
      {
        LODWORD(a9) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2700);
      }
      goto LABEL_43;
    }
    v14 = a2;
    v19 = v43;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v32 = 62;
LABEL_38:
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_d(
      (_DWORD)gRimLog,
      v27,
      1,
      v32,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      DigitizerPageButtonUsages);
    goto LABEL_60;
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
