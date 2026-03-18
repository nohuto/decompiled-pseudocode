/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C01918C0
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01CC0FC (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     GetPreparsedData @ 0x1C018ECC0 (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C019728C (SignExtendLong.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // r13
  __int64 v8; // r12
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  PVOID v16; // rsi
  __int64 v17; // rax
  __int64 Pool2; // rdi
  __int64 v19; // r8
  char v21; // r15
  unsigned int v22; // esi
  unsigned __int16 v23; // r15
  __int64 v24; // r13
  int SpecificValueCaps; // eax
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rdx
  unsigned int *v29; // r12
  __int64 v30; // r8
  __int64 v31; // r9
  int Usages; // eax
  unsigned int v33; // ecx
  unsigned __int16 v35; // [rsp+44h] [rbp-1D4h] BYREF
  unsigned __int16 v36; // [rsp+48h] [rbp-1D0h]
  int UsageValue; // [rsp+4Ch] [rbp-1CCh]
  int v38; // [rsp+50h] [rbp-1C8h]
  unsigned int v39; // [rsp+54h] [rbp-1C4h]
  int v40; // [rsp+58h] [rbp-1C0h]
  unsigned int v41; // [rsp+5Ch] [rbp-1BCh] BYREF
  struct _HIDP_PREPARSED_DATA *v42; // [rsp+60h] [rbp-1B8h] BYREF
  int v43; // [rsp+68h] [rbp-1B0h]
  unsigned int v44; // [rsp+6Ch] [rbp-1ACh]
  int v45; // [rsp+70h] [rbp-1A8h]
  unsigned int v46; // [rsp+80h] [rbp-198h]
  char *v47; // [rsp+88h] [rbp-190h]
  __int64 v48; // [rsp+90h] [rbp-188h]
  __int64 v49; // [rsp+98h] [rbp-180h]
  int v50; // [rsp+A0h] [rbp-178h]
  __int64 v51; // [rsp+B0h] [rbp-168h]
  __int64 v52; // [rsp+B8h] [rbp-160h]
  __int64 v53; // [rsp+C0h] [rbp-158h]
  __int64 v54; // [rsp+C8h] [rbp-150h]
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-138h] BYREF
  struct _HIDP_VALUE_CAPS v56; // [rsp+180h] [rbp-98h] BYREF

  v47 = a4;
  v39 = a3;
  v7 = a2;
  v8 = a1;
  v51 = a1;
  v9 = a5;
  v46 = a5;
  v48 = a6;
  v49 = a7;
  v10 = 0;
  v42 = 0LL;
  v11 = 0;
  v38 = 0;
  v40 = 0;
  memset(&v56, 0, sizeof(v56));
  v35 = 1;
  if ( !a5 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v14);
  if ( !v8 || a5 > *(_DWORD *)(v8 + 384) )
    goto LABEL_57;
  v15 = 4LL * *(unsigned int *)(v8 + 1040);
  v50 = 2020635477;
  v53 = 260LL;
  v16 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x78707355) != 0x78707355
    || (v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, v15);
    goto LABEL_10;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 2020635477 )
  {
    if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_9;
  }
  v21 = 0;
  if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
  {
    v21 = 1;
    v15 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v15);
  if ( Pool2 )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v16,
             (const void *)Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_18;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v16,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_18;
    }
    ExFreePoolWithTag((PVOID)Pool2, 0);
  }
  Pool2 = 0LL;
LABEL_18:
  v9 = a5;
LABEL_10:
  v52 = Pool2;
  if ( Pool2 )
  {
    if ( !(unsigned int)GetPreparsedData(v8, &v42, v19) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
      return 0LL;
    }
    v41 = *(_DWORD *)(v8 + 1040);
    v22 = 0;
    v45 = 0;
    while ( v22 < v9 )
    {
      v23 = v7;
      v36 = v7;
      if ( *(_DWORD *)(v8 + 404) == (unsigned __int8)*v47 )
      {
        v35 = 1;
        v24 = 28LL * v22;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                              HidP_Input,
                              *(_WORD *)(v48 + v24 + 24),
                              a2,
                              *(_WORD *)(v48 + v24 + 26),
                              &v56,
                              &v35,
                              v42);
        UsageValue = SpecificValueCaps;
        v26 = v48;
        if ( *(int *)(v48 + v24 + 4) > 1
          || (int)(SpecificValueCaps + 0x80000000) < 0
          || SpecificValueCaps == -1072627705 )
        {
          v27 = 1;
          v43 = 1;
        }
        else
        {
          v27 = 0;
          v43 = 0;
        }
        if ( v27 )
        {
          v28 = *(_QWORD *)(v8 + 760);
          v54 = v28;
          if ( v28 && *(_WORD *)(v28 + 8) && (unsigned __int16)(*(_WORD *)(v48 + v24 + 26) - 48) <= 1u )
          {
            v23 = *(_WORD *)(*(_QWORD *)(v28 + 24) + 8LL * a2 + 2);
            v36 = v23;
          }
          v29 = (unsigned int *)(v49 + 4LL * v22);
          UsageValue = rimHidP_GetUsageValue(
                         HidP_Input,
                         *(_WORD *)(v48 + v24 + 24),
                         v23,
                         *(_WORD *)(v48 + v24 + 26),
                         v29,
                         v42,
                         v47,
                         v39);
          if ( UsageValue < 0 )
          {
LABEL_55:
            v9 = a5;
            break;
          }
          if ( v56.LogicalMin < 0 )
            *v29 = SignExtendLong(*v29, v56.BitSize);
          v8 = v51;
        }
        else
        {
          v30 = v22;
          v31 = v49;
          *(_DWORD *)(v49 + 4LL * v22) = 0;
          if ( !v40 )
          {
            if ( gpfnHidP_GetUsagesEx )
            {
              Usages = gpfnHidP_GetUsagesEx(HidP_Input, a2, (struct _USAGE_AND_PAGE *)Pool2, &v41, v42, v47, v39);
              v30 = v22;
              v26 = v48;
              v31 = v49;
            }
            else
            {
              Usages = -1073741637;
            }
            UsageValue = Usages;
            v40 = 1;
            if ( Usages < 0 )
              goto LABEL_55;
          }
          v33 = 0;
          v44 = 0;
          while ( v33 < v41 )
          {
            if ( *(_WORD *)(Pool2 + 4LL * v33 + 2) == *(_WORD *)(v26 + v24 + 24)
              && *(_WORD *)(Pool2 + 4LL * v33) == *(_WORD *)(v26 + v24 + 26) )
            {
              *(_DWORD *)(v31 + 4 * v30) = 1;
            }
            v44 = ++v33;
          }
        }
        ++v11;
        v7 = a2;
        v38 = v11;
      }
      v45 = ++v22;
      v9 = a5;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
  }
LABEL_57:
  LOBYTE(v10) = v11 == v9;
  return v10;
}
