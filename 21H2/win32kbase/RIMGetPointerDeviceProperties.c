/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C0193110
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     GetPreparsedData @ 0x1C018ECC0 (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C018EE7C (_PopulatePropertyUsageValues.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // r15
  unsigned int v5; // edi
  char *v6; // r12
  unsigned __int16 v7; // r13
  unsigned __int16 v8; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  PVOID v15; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 Pool2; // r14
  struct _HIDP_PREPARSED_DATA *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r15
  PVOID v23; // r13
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  unsigned __int16 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rsi
  _WORD *v32; // rdi
  unsigned int v33; // r8d
  _WORD *v34; // rdx
  __int64 v35; // rax
  char v36; // r12
  int v38; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int16 v39; // [rsp+5Ch] [rbp-ACh]
  unsigned int v40; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v41; // [rsp+64h] [rbp-A4h]
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  struct _HIDP_PREPARSED_DATA *v43; // [rsp+70h] [rbp-98h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  PVOID v45[26]; // [rsp+118h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0;
  v39 = 0;
  v6 = 0LL;
  LODWORD(v42) = 0;
  v7 = 0;
  v40 = 0;
  LOWORD(v38) = 0;
  v8 = 0;
  v41 = 0;
  v43 = 0LL;
  if ( (unsigned int)GetPreparsedData(a1, &v43, a3) )
  {
    v14 = *(_DWORD *)(a1 + 360);
    if ( (v14 & 2) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 760);
      if ( !v12 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v11, v13);
        v12 = *(_QWORD *)(a1 + 760);
        v14 = *(_DWORD *)(a1 + 360);
      }
      v7 = *(_WORD *)(v12 + 4);
      v8 = *(_WORD *)(v12 + 10);
      v39 = v7;
      v41 = v8;
    }
    if ( (v14 & 0x20) != 0 )
    {
      v7 = *(_WORD *)(a1 + 776);
      v39 = v7;
    }
    if ( !a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
    if ( rimHidP_GetSpecificValueCaps(HidP_Input, 0, v7, 0, 0LL, (unsigned __int16 *)&v38, v43) == -1072627705 )
    {
      v15 = gpLeakTrackingAllocator;
      v16 = 72LL * ((unsigned __int16)v38 + (unsigned int)v8);
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63767355) == 0x63767355 )
      {
        v17 = 0LL;
        if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
        {
          while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1668707157 )
          {
            if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
              goto LABEL_15;
          }
          if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
          {
            v4 = 1;
            v16 += 16LL;
          }
          Pool2 = ExAllocatePool2(260LL, v16);
          if ( !Pool2 )
            return 0;
          memset(BackTrace, 0, sizeof(BackTrace));
          RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
          if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v15,
                   (const void *)Pool2,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
LABEL_16:
              if ( Pool2 )
              {
LABEL_17:
                v19 = v43;
                if ( !(unsigned int)PopulatePropertyUsageValues(
                                      a1,
                                      &v40,
                                      a4,
                                      v7,
                                      v38,
                                      (struct _HIDP_VALUE_CAPS *)Pool2,
                                      a2,
                                      a3,
                                      v43) )
                  goto LABEL_65;
                v21 = *(_QWORD *)(a1 + 760);
                if ( v21 && *(_WORD *)(v21 + 8) )
                {
                  if ( v40 >= a4 )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v21, 0LL);
                    v21 = *(_QWORD *)(a1 + 760);
                  }
                  if ( !*(_WORD *)(v21 + 10) )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v21, 0LL);
                    v21 = *(_QWORD *)(a1 + 760);
                  }
                  if ( !(unsigned int)PopulatePropertyUsageValues(
                                        a1,
                                        &v40,
                                        a4,
                                        *(_WORD *)(v21 + 8),
                                        v41,
                                        (struct _HIDP_VALUE_CAPS *)(Pool2 + 72LL * v40),
                                        a2,
                                        a3,
                                        v19) )
                    goto LABEL_65;
                }
                v22 = a2 - v40;
                LODWORD(v42) = a2 - v40;
                if ( a2 == v40 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v21, 0LL);
                  goto LABEL_65;
                }
                v23 = gpLeakTrackingAllocator;
                v24 = 72 * v22;
                if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63767355) == 0x63767355 )
                {
                  v25 = 0LL;
                  if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
                  {
                    while ( *((_DWORD *)gpLeakTrackingAllocator + v25) != 1668707157 )
                    {
                      if ( ++v25 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
                        goto LABEL_41;
                    }
                    v36 = 0;
                    if ( v24 < 0x1000 || (v24 & 0xFFF) != 0 )
                    {
                      v36 = 1;
                      v24 += 16LL;
                    }
                    v26 = ExAllocatePool2(260LL, v24);
                    if ( !v26 )
                    {
                      v6 = 0LL;
                      goto LABEL_65;
                    }
                    memset(v45, 0, 0xA0uLL);
                    RtlCaptureStackBackTrace(0, 0x14u, v45, 0LL);
                    if ( v36 && (unsigned __int64)(v26 & 0xFFF) + 16 < 0x1000 )
                    {
                      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                             (__int64)v23,
                             (const void *)v26,
                             (struct NSInstrumentation::CBackTrace *)v45) )
                      {
                        v26 += 16LL;
LABEL_42:
                        v6 = (char *)v26;
                        if ( !v26 )
                          goto LABEL_65;
LABEL_43:
                        v27 = v39;
                        if ( *(_DWORD *)(a1 + 24) == 7 )
                          v27 = 0;
                        if ( rimHidP_GetSpecificButtonCaps(
                               HidP_Input,
                               0,
                               v27,
                               0,
                               (struct _HIDP_BUTTON_CAPS *)v26,
                               (unsigned __int16 *)&v42,
                               v43) < 0 )
                        {
                          v5 = 0;
                        }
                        else if ( (_DWORD)v22 == (_DWORD)v42
                               || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30), (_DWORD)v22 == (_DWORD)v42) )
                        {
                          v31 = (unsigned int)v22;
                          v32 = (_WORD *)(a3 + 28LL * v40);
                          memset(v32, 0, 28LL * (unsigned int)v22);
                          v33 = 0;
                          if ( v40 < a2 )
                          {
                            v34 = v32 + 13;
                            do
                            {
                              v35 = v33++;
                              *(v34 - 1) = *(_WORD *)(v26 + 72 * v35);
                              *v34 = *(_WORD *)(v26 + 72 * v35 + 56);
                              *(_DWORD *)(v34 - 11) = 1;
                              v34 += 14;
                              --v31;
                            }
                            while ( v31 );
                          }
                          v5 = 1;
                        }
                        goto LABEL_65;
                      }
                    }
                    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                (__int64)v23,
                                v26,
                                (struct NSInstrumentation::CBackTrace *)v45) )
                    {
                      v6 = (char *)v26;
                      goto LABEL_43;
                    }
                    ExFreePoolWithTag((PVOID)v26, 0);
                    v6 = 0LL;
LABEL_65:
                    NSInstrumentation::CLeakTrackingAllocator::Free(
                      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                      (char *)Pool2);
                    if ( v6 )
                      NSInstrumentation::CLeakTrackingAllocator::Free(
                        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                        v6);
                    return v5;
                  }
                }
LABEL_41:
                v26 = ExAllocatePool2(260LL, v24);
                goto LABEL_42;
              }
              return 0;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v15,
                      Pool2,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_17;
          }
          ExFreePoolWithTag((PVOID)Pool2, 0);
          return 0;
        }
      }
LABEL_15:
      Pool2 = ExAllocatePool2(260LL, v16);
      goto LABEL_16;
    }
  }
  return 0LL;
}
