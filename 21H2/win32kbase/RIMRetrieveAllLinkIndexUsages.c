/*
 * XREFs of RIMRetrieveAllLinkIndexUsages @ 0x1C0194F6C
 * Callers:
 *     RIMIsParallelDevice @ 0x1C0194800 (RIMIsParallelDevice.c)
 *     RIMValidateAllCollectionUsages @ 0x1C0195A6C (RIMValidateAllCollectionUsages.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMRetrieveAllLinkIndexUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        unsigned __int16 *a3,
        char **a4,
        unsigned __int16 *a5,
        char **a6)
{
  unsigned __int16 v9; // bx
  int SpecificValueCaps; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned __int16 v15; // ax
  PVOID v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int64 Pool2; // rbx
  char v20; // bp
  int v21; // edx
  int v22; // r8d
  PDEVICE_OBJECT v23; // rcx
  __int16 v24; // r9
  char v25; // r15
  char v27; // al
  char v28; // al
  int SpecificButtonCaps; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int16 v33; // ax
  PVOID v34; // rsi
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbx
  PVOID BackTrace[20]; // [rsp+40h] [rbp-168h] BYREF
  PVOID v39[20]; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned __int16 v40; // [rsp+1B0h] [rbp+8h]

  v40 = a1;
  v9 = a1;
  if ( *a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *a6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v9, 0, 0LL, a3, a2);
  v14 = SpecificValueCaps;
  if ( SpecificValueCaps == 1114112 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    return v14;
  }
  if ( SpecificValueCaps == -1072627705 )
  {
    v15 = *a3;
    if ( !*a3 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
      v15 = *a3;
    }
    v16 = gpLeakTrackingAllocator;
    v17 = 72LL * v15;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63767352) == 0x63767352 )
    {
      v18 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v18) != 1668707154 )
        {
          if ( ++v18 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_14;
        }
        v25 = 0;
        if ( v17 < 0x1000 || (v17 & 0xFFF) != 0 )
        {
          v25 = 1;
          v17 += 16LL;
        }
        Pool2 = ExAllocatePool2(260LL, v17);
        if ( !Pool2 )
          goto LABEL_29;
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          v27 = NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v16,
                  (const void *)Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace);
          v20 = 0;
          if ( v27 )
          {
            Pool2 += 16LL;
LABEL_15:
            *a4 = (char *)Pool2;
            if ( !Pool2 )
            {
LABEL_30:
              v14 = -1073741801;
              goto LABEL_31;
            }
LABEL_16:
            v14 = rimHidP_GetSpecificValueCaps(HidP_Input, 0, v40, 0, (struct _HIDP_VALUE_CAPS *)Pool2, a3, a2);
            if ( v14 != 1114112 )
            {
              v23 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v21) = 0;
              }
              LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                goto LABEL_31;
              v24 = 27;
              goto LABEL_24;
            }
            SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v40, 0, 0LL, a5, a2);
            v14 = SpecificButtonCaps;
            if ( SpecificButtonCaps == 1114112 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
              return v14;
            }
            if ( SpecificButtonCaps != -1072627705 )
              goto LABEL_31;
            v33 = *a5;
            if ( !*a5 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30, v32);
              v33 = *a5;
            }
            v34 = gpLeakTrackingAllocator;
            v35 = 72LL * v33;
            if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63767352) == 0x63767352 )
            {
              v36 = 0LL;
              if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
              {
                while ( *((_DWORD *)gpLeakTrackingAllocator + v36) != 1668707154 )
                {
                  if ( ++v36 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                    goto LABEL_52;
                }
                if ( v35 < 0x1000 || (v35 & 0xFFF) != 0 )
                {
                  v20 = 1;
                  v35 += 16LL;
                }
                v37 = ExAllocatePool2(260LL, v35);
                if ( !v37 )
                  goto LABEL_66;
                memset(v39, 0, sizeof(v39));
                RtlCaptureStackBackTrace(0, 0x14u, v39, 0LL);
                if ( v20 && (unsigned __int64)(v37 & 0xFFF) + 16 < 0x1000 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                         (__int64)v34,
                         (const void *)v37,
                         (struct NSInstrumentation::CBackTrace *)v39) )
                  {
                    v37 += 16LL;
LABEL_53:
                    *a6 = (char *)v37;
                    if ( !v37 )
                      goto LABEL_30;
                    goto LABEL_54;
                  }
                }
                else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            (__int64)v34,
                            v37,
                            (struct NSInstrumentation::CBackTrace *)v39) )
                {
                  *a6 = (char *)v37;
LABEL_54:
                  v14 = rimHidP_GetSpecificButtonCaps(HidP_Input, 0, v40, 0, (struct _HIDP_BUTTON_CAPS *)v37, a5, a2);
                  if ( v14 == 1114112 )
                    return v14;
                  v23 = WPP_GLOBAL_Control;
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                  {
                    LOBYTE(v21) = 0;
                  }
                  LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( !(_BYTE)v21 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_31;
                  v24 = 28;
LABEL_24:
                  WPP_RECORDER_AND_TRACE_SF_(
                    v23->AttachedDevice,
                    v21,
                    v22,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    v24,
                    (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids);
                  goto LABEL_31;
                }
                ExFreePoolWithTag((PVOID)v37, 0);
LABEL_66:
                *a6 = 0LL;
                goto LABEL_30;
              }
            }
LABEL_52:
            v37 = ExAllocatePool2(260LL, v35);
            goto LABEL_53;
          }
        }
        else
        {
          v28 = NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v16,
                  Pool2,
                  (struct NSInstrumentation::CBackTrace *)BackTrace);
          v20 = 0;
          if ( v28 )
          {
            *a4 = (char *)Pool2;
            goto LABEL_16;
          }
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_29:
        *a4 = 0LL;
        goto LABEL_30;
      }
    }
LABEL_14:
    Pool2 = ExAllocatePool2(260LL, v17);
    v20 = 0;
    goto LABEL_15;
  }
LABEL_31:
  if ( *a4 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      *a4);
    *a4 = 0LL;
  }
  if ( *a6 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      *a6);
    *a6 = 0LL;
  }
  return v14;
}
