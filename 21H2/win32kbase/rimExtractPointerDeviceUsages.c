/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C01B00C4
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C01B1588 (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C00E640E (rimHidP_GetUsageValueArray.c)
 *     rimExtractTouchInfo @ 0x1C00E72BC (rimExtractTouchInfo.c)
 *     rimHidP_GetUsages @ 0x1C018E8EC (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C01AD874 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C01AF648 (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C01AF708 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C01AF988 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C01AFFD4 (rimExtractPenInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // r11
  __int64 v12; // rdi
  int v13; // r14d
  unsigned int v14; // r15d
  __int64 v15; // rsi
  char *v16; // r10
  __int64 v18; // rcx
  _DWORD *v19; // r12
  _DWORD *v20; // rax
  unsigned int v21; // r13d
  int v22; // eax
  unsigned __int16 v23; // r9
  unsigned __int16 v24; // r8
  BOOL v25; // r15d
  int v26; // edx
  int DigitizerPageButtonUsages; // ebp
  __int64 v28; // r8
  _DWORD *v29; // r14
  __int16 v30; // ax
  _DWORD *v31; // rax
  PDEVICE_OBJECT v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // ecx
  PDEVICE_OBJECT v37; // rcx
  __int64 v38; // rdx
  char *v39; // rdi
  __int64 v40; // rcx
  int v41; // eax
  unsigned __int16 v42; // r8
  int v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+A0h] [rbp+8h]
  struct _HIDP_PREPARSED_DATA *v46; // [rsp+A8h] [rbp+10h]
  char *v47; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v48; // [rsp+B8h] [rbp+20h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  v11 = *(_QWORD *)(a1 + 760);
  v12 = a1 + 400;
  v13 = (unsigned __int8)*a3;
  v14 = a4;
  v15 = a7;
  v45 = v11;
  v16 = a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      60,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    v16 = v47;
    v11 = v45;
  }
  v18 = 48LL;
  v19 = a8;
  *a9 = 0;
  v20 = a10;
  *v19 = 1;
  v21 = 0;
  *v20 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 772) )
  {
LABEL_58:
    *(_DWORD *)(v15 + 4) = rimExtractData(a1, 1, 48, 0, 0LL);
    *(_DWORD *)(v15 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v36 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)(v36 - 1) <= 3 )
    {
      *(_DWORD *)(v15 + 64) = 2;
    }
    else
    {
      if ( v36 != 7 )
      {
        if ( (unsigned int)(v36 - 5) <= 1 )
        {
          v38 = a6;
          *(_DWORD *)(v15 + 64) = 3;
          rimExtractPenInfo(a1, v38, (_DWORD *)v15);
        }
        else
        {
          v37 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v34) = 0;
          }
          LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v34,
              v35,
              (_DWORD)gRimLog,
              4,
              1,
              63,
              (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v34, v35);
        }
        goto LABEL_73;
      }
      *(_DWORD *)(v15 + 64) = 5;
    }
    rimExtractTouchInfo(a1, a6, (_DWORD *)v15);
LABEL_73:
    v39 = v47;
    DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, v46, v47, v14, v15);
    if ( DigitizerPageButtonUsages >= 0 )
    {
      v41 = *(_DWORD *)(a1 + 360);
      if ( (v41 & 8) != 0 && (v41 & 0x2000) == 0 )
      {
        v42 = *(_WORD *)(v15 + 58);
        LOWORD(v47) = 0;
        LODWORD(a9) = 1;
        if ( rimHidP_GetUsages(v40, 0xFF00u, v42, (unsigned __int16 *)&v47, (unsigned int *)&a9, v46, v39, v14) >= 0
          && (_DWORD)a9 == 1
          && (_WORD)v47 == 207 )
        {
          *a11 = 1;
        }
      }
    }
    goto LABEL_80;
  }
  v22 = v13;
  LODWORD(a7) = v13;
  while ( 1 )
  {
    if ( v22 != *(_DWORD *)(v12 + 4) )
      goto LABEL_28;
    v23 = *(_WORD *)(v12 + 12);
    v24 = *(_WORD *)(v15 + 58);
    v25 = (unsigned __int16)(v23 - 48) <= 1u;
    if ( v11 && *(_WORD *)(v11 + 8) && *(_WORD *)v12 == 1 && (unsigned __int16)(v23 - 48) <= 1u )
    {
      *(_DWORD *)(v12 + 48) = 0;
      v18 = *(unsigned __int16 *)(v15 + 58);
      v24 = *(_WORD *)(*(_QWORD *)(v11 + 24) + 8 * v18 + 2);
    }
    if ( (*(_DWORD *)(a1 + 360) & 0x200) == 0 || *(_WORD *)v12 != 1 || (unsigned __int16)(v23 - 48) > 1u )
      break;
    DigitizerPageButtonUsages = rimHidP_GetUsageValueArray(v18, 1u, v24, v23, (char *)&a8, v44, v46, v16, v48);
    if ( DigitizerPageButtonUsages < 0 )
    {
      v32 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v26) = 0;
      }
      LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v33 = 61;
LABEL_49:
        WPP_RECORDER_AND_TRACE_SF_D(
          v32->AttachedDevice,
          v26,
          v28,
          (_DWORD)gRimLog,
          4,
          1,
          v33,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
          DigitizerPageButtonUsages);
        goto LABEL_80;
      }
      goto LABEL_80;
    }
    v29 = (_DWORD *)(v12 + 52);
    rimExtractGeometryPoints(
      *(unsigned __int16 *)(v12 + 12),
      v15,
      v12 + 52,
      (__int64)&a8,
      *(unsigned __int16 *)(v12 + 56));
LABEL_22:
    if ( *(_DWORD *)(v12 + 16) )
    {
      if ( *v29 < *(_DWORD *)(v12 + 32) || *v29 > *(_DWORD *)(v12 + 36) )
      {
        if ( *(_WORD *)v12 == 1 && v25 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v30 = *(_WORD *)(v12 + 12);
          v18 = 48LL;
          if ( v30 == 48 )
          {
            v31 = a9;
          }
          else
          {
            if ( v30 != 49 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(48LL, 49LL, v28);
              v18 = 48LL;
            }
            v31 = a10;
          }
          *v31 = 1;
          goto LABEL_27;
        }
      }
      else
      {
        *v19 = 0;
      }
    }
    else
    {
      *v19 = 0;
      if ( !v25 || a5 )
        RIMEnsureUsageWithinLogicalBoundary(v12);
    }
    v18 = 48LL;
LABEL_27:
    v22 = a7;
LABEL_28:
    ++v21;
    v12 += 60LL;
    if ( v21 >= *(_DWORD *)(a1 + 772) )
    {
      v14 = v48;
      goto LABEL_58;
    }
    v16 = v47;
    v11 = v45;
  }
  v29 = (_DWORD *)(v12 + 52);
  DigitizerPageButtonUsages = rimHidP_GetUsageValue(
                                HidP_Input,
                                *(_WORD *)v12,
                                v24,
                                v23,
                                (unsigned int *)(v12 + 52),
                                v46,
                                v16,
                                v48);
  if ( DigitizerPageButtonUsages >= 0 )
    goto LABEL_22;
  v32 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v26) = 0;
  }
  LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = 62;
    goto LABEL_49;
  }
LABEL_80:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v26) = 0;
  }
  if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v26,
      v28,
      (_DWORD)gRimLog,
      4,
      1,
      64,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
      DigitizerPageButtonUsages);
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
