/*
 * XREFs of RIMExtractPointerPropertyValues @ 0x1C01B5500
 * Callers:
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01F95BC (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C00EF9AA (rimHidP_GetUsageValue.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 *     rimHidP_GetUsagesEx @ 0x1C01B21B8 (rimHidP_GetUsagesEx.c)
 *     GetPreparsedData @ 0x1C01B264C (GetPreparsedData.c)
 *     SignExtendLong @ 0x1C01BBEFC (SignExtendLong.c)
 */

__int64 __fastcall RIMExtractPointerPropertyValues(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // r12
  unsigned int v9; // r15d
  unsigned int v10; // ebx
  unsigned __int64 v11; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v12; // rsi
  int v13; // eax
  __int64 Pool2; // rdi
  _QWORD *v15; // rax
  char v16; // r10
  unsigned int v17; // r11d
  char v18; // r14
  unsigned int v20; // esi
  unsigned __int16 v21; // r14
  __int64 v22; // r12
  int SpecificValueCaps; // eax
  __int64 v24; // rcx
  __int64 v25; // r10
  int v26; // eax
  __int64 v27; // rdx
  _DWORD *v28; // r15
  __int64 v29; // r8
  unsigned int v30; // ecx
  __int16 v32; // [rsp+44h] [rbp-1F4h] BYREF
  int v33; // [rsp+48h] [rbp-1F0h]
  unsigned int v34; // [rsp+50h] [rbp-1E8h] BYREF
  unsigned __int16 v35; // [rsp+58h] [rbp-1E0h]
  int v36; // [rsp+5Ch] [rbp-1DCh]
  int UsageValue; // [rsp+60h] [rbp-1D8h]
  int v38; // [rsp+64h] [rbp-1D4h]
  unsigned int v39; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v40; // [rsp+70h] [rbp-1C8h] BYREF
  int v41; // [rsp+78h] [rbp-1C0h]
  int v42; // [rsp+7Ch] [rbp-1BCh]
  int v43; // [rsp+80h] [rbp-1B8h]
  unsigned int v44; // [rsp+90h] [rbp-1A8h]
  unsigned __int64 v45; // [rsp+98h] [rbp-1A0h] BYREF
  unsigned __int8 *v46; // [rsp+A0h] [rbp-198h]
  __int64 v47; // [rsp+A8h] [rbp-190h]
  __int64 v48; // [rsp+B0h] [rbp-188h]
  __int64 v49; // [rsp+B8h] [rbp-180h] BYREF
  _QWORD v50[4]; // [rsp+C0h] [rbp-178h] BYREF
  _QWORD v51[4]; // [rsp+E0h] [rbp-158h] BYREF
  PVOID BackTrace[20]; // [rsp+100h] [rbp-138h] BYREF
  _DWORD v53[20]; // [rsp+1A0h] [rbp-98h] BYREF

  v46 = a4;
  v36 = a3;
  v7 = a2;
  v9 = a5;
  v44 = a5;
  v47 = a6;
  v48 = a7;
  v10 = 0;
  v40 = 0LL;
  v33 = 0;
  v38 = 0;
  memset(v53, 0, 0x48uLL);
  v32 = 1;
  if ( !a5 )
  {
    v34 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3757);
  }
  if ( !a1 || a5 > *(_DWORD *)(a1 + 384) )
    goto LABEL_60;
  v11 = 4LL * *(unsigned int *)(a1 + 1040);
  v34 = 2020635477;
  v49 = 260LL;
  v12 = gpLeakTrackingAllocator;
  v50[0] = v11;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, v11, 2020635477LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
    goto LABEL_28;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v45 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020635477, &v45) )
      {
        v51[0] = &v49;
        v51[1] = &v34;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v12,
                  (__int64)v51,
                  v50);
        goto LABEL_28;
      }
      v18 = 0;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v18 = v16;
        v11 += 16LL;
        v50[0] = v11;
      }
      Pool2 = ExAllocatePool2(260LL, v11, v17);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v18 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v12,
                 (const void *)Pool2,
                 v45,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_28;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v12,
                    Pool2,
                    v45,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_28;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_27;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707355u)
    || v11 + 16 < v11 )
  {
LABEL_27:
    Pool2 = 0LL;
    goto LABEL_28;
  }
  v15 = (_QWORD *)ExAllocatePool2(v49 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v34);
  Pool2 = (__int64)v15;
  if ( !v15
    || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
        *v15 = 2020635477LL,
        Pool2 = (__int64)(v15 + 2),
        v15 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v12 + 1),
      0x78707355uLL);
  }
LABEL_28:
  v50[2] = Pool2;
  if ( Pool2 )
  {
    if ( !(unsigned int)GetPreparsedData(a1, &v40) )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      return 0LL;
    }
    v39 = *(_DWORD *)(a1 + 1040);
    v20 = 0;
    v43 = 0;
    while ( v20 < v9 )
    {
      v21 = v7;
      v35 = v7;
      if ( *(_DWORD *)(a1 + 404) == *v46 )
      {
        v32 = 1;
        v22 = 28LL * v20;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(
                              0LL,
                              *(unsigned __int16 *)(v22 + v47 + 24),
                              a2,
                              *(unsigned __int16 *)(v22 + v47 + 26),
                              (__int64)v53,
                              (__int64)&v32,
                              v40);
        UsageValue = SpecificValueCaps;
        v25 = v47;
        if ( *(int *)(v22 + v47 + 4) > 1
          || (v24 = SpecificValueCaps + 0x80000000, (int)v24 < 0)
          || SpecificValueCaps == -1072627705 )
        {
          v26 = 1;
          v41 = 1;
        }
        else
        {
          v26 = 0;
          v41 = 0;
        }
        if ( v26 )
        {
          v27 = *(_QWORD *)(a1 + 760);
          v51[2] = v27;
          if ( v27 && *(_WORD *)(v27 + 8) && (unsigned __int16)(*(_WORD *)(v22 + v47 + 26) - 48) <= 1u )
          {
            v21 = *(_WORD *)(*(_QWORD *)(v27 + 24) + 8LL * a2 + 2);
            v35 = v21;
          }
          v28 = (_DWORD *)(v48 + 4LL * v20);
          UsageValue = rimHidP_GetUsageValue(
                         0LL,
                         *(unsigned __int16 *)(v22 + v47 + 24),
                         v21,
                         *(unsigned __int16 *)(v22 + v47 + 26),
                         (__int64)v28,
                         v40,
                         (__int64)v46,
                         v36);
          if ( UsageValue < 0 )
          {
LABEL_58:
            v9 = a5;
            break;
          }
          if ( v53[10] < 0 )
            *v28 = SignExtendLong((unsigned int)*v28, HIWORD(v53[4]));
        }
        else
        {
          v29 = v48;
          *(_DWORD *)(v48 + 4LL * v20) = 0;
          if ( !v38 )
          {
            UsageValue = rimHidP_GetUsagesEx(v24, a2, Pool2, (__int64)&v39, v40, (__int64)v46, v36);
            v38 = 1;
            if ( UsageValue < 0 )
              goto LABEL_58;
            v25 = v47;
            v29 = v48;
          }
          v30 = 0;
          v42 = 0;
          while ( v30 < v39 )
          {
            if ( *(_WORD *)(Pool2 + 4LL * v30 + 2) == *(_WORD *)(v22 + v25 + 24)
              && *(_WORD *)(Pool2 + 4LL * v30) == *(_WORD *)(v22 + v25 + 26) )
            {
              *(_DWORD *)(v29 + 4LL * v20) = 1;
            }
            v42 = ++v30;
          }
        }
        v7 = a2;
        v9 = a5;
        ++v33;
      }
      v43 = ++v20;
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  }
LABEL_60:
  LOBYTE(v10) = v33 == v9;
  return v10;
}
