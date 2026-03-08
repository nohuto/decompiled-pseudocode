/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C01AF510
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMIsInputUsagePresent @ 0x1C01AF31C (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 *     RIMCheckPressureUsageStatus @ 0x1C01B3FBC (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x1C01B5D38 (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C01B8B10 (RIMIsEssentialUsage.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x1C01C537C (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01DEF9C (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C01DF08C (RIMRetrieveNormalizationRange.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(__int64 a1, __int64 a2, __int64 a3, __int16 *a4)
{
  unsigned int v5; // edi
  int v6; // r8d
  int SpecificValueCaps; // eax
  __int64 v8; // rcx
  _DWORD *v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rsi
  int v11; // eax
  unsigned __int64 v12; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v15; // r10
  char v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned int v20; // r13d
  __int16 v21; // r15
  unsigned __int16 v22; // r15
  __int64 v23; // rcx
  __m128i v24; // xmm5
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __m128i v28; // xmm5
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int64 v32; // rdx
  __int64 v33; // r8
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // r15d
  __int64 v38; // rdx
  bool v39; // zf
  int v41; // [rsp+28h] [rbp-E0h]
  unsigned int v43; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v45; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v46[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  _OWORD v48[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-40h]
  _OWORD v50[4]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v51; // [rsp+118h] [rbp+10h]
  _OWORD v52[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v53; // [rsp+168h] [rbp+60h]
  PVOID BackTrace[28]; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int16 v56; // [rsp+270h] [rbp+168h] BYREF
  __int64 v57; // [rsp+278h] [rbp+170h]
  __int16 *v58; // [rsp+280h] [rbp+178h]

  v58 = a4;
  v57 = a3;
  v5 = 0;
  v44 = -1LL;
  v6 = *(unsigned __int16 *)(a2 + 776);
  v56 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v6, 0, 0LL, (__int64)&v56, a3);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v8 = 6LL;
  v9 = (_DWORD *)(a2 + 32);
  do
  {
    *v9 = -1;
    v9 += 4;
    --v8;
  }
  while ( v8 );
  v10 = gpLeakTrackingAllocator;
  v43 = 1785620818;
  v47 = 260LL;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  v12 = 72LL * v56;
  v45 = v12;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      if ( v11 == 2 )
      {
        v46[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, v46) )
        {
          v46[0] = (unsigned __int64)&v47;
          v46[1] = (unsigned __int64)&v43;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v10,
                                                                                             (__int64)v46,
                                                                                             &v45);
          goto LABEL_25;
        }
        v16 = 0;
        if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
        {
          v12 += 16LL;
          v16 = 1;
          v45 = v12;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v15,
                                                                                           v12,
                                                                                           1785620818LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          return 0LL;
        _InterlockedAdd64((volatile signed __int64 *)v10 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v16
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v10,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v46[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_25;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v10,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v46[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_28;
        }
        _InterlockedAdd64((volatile signed __int64 *)v10 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
      return 0LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u)
      || v12 + 16 < v12 )
    {
      return 0LL;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v47 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, v43);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL),
          *Pool2 = 1785620818LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v10 + 1),
        0x6A6E6952uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       72LL * v56,
                                                                                       1785620818LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL);
  }
LABEL_25:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 0LL;
LABEL_28:
  v17 = v57;
  if ( (int)rimHidP_GetSpecificValueCaps(
              0,
              0,
              *(unsigned __int16 *)(a2 + 776),
              0,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              (__int64)&v56,
              v57) >= 0 )
  {
    v19 = 0;
    v20 = 0;
    if ( v56 )
    {
      do
      {
        if ( v20 >= 6 )
          break;
        v21 = *v58;
        if ( *v58 == 2 )
          v21 = 1;
        v22 = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v19 + 56) | ((*(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v19) | (unsigned __int16)(16 * v21)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v22) )
        {
          v23 = 60LL * v20;
          v45 = v20;
          *(_WORD *)(v23 + a2 + 400) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19);
          *(_WORD *)(v23 + a2 + 412) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 56);
          *(_DWORD *)(v23 + a2 + 404) = *(unsigned __int8 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                           + 72LL * v19
                                                           + 2);
          *(_WORD *)(v23 + a2 + 410) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 10);
          *(_DWORD *)(v23 + a2 + 416) = *(unsigned __int8 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                           + 72LL * v19
                                                           + 16);
          *(_DWORD *)(v23 + a2 + 432) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                  + 72LL * v19
                                                  + 40);
          *(_DWORD *)(v23 + a2 + 436) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                  + 72LL * v19
                                                  + 44);
          *(_DWORD *)(v23 + a2 + 440) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                  + 72LL * v19
                                                  + 48);
          *(_DWORD *)(v23 + a2 + 444) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                  + 72LL * v19
                                                  + 52);
          *(_WORD *)(v23 + a2 + 456) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 18);
          if ( (*(_DWORD *)(a2 + 360) & 0x2000) != 0 )
          {
            if ( *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                          + 72LL * v19
                          + 56) == 48
              && *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v19) == 1 )
            {
              v24 = *(__m128i *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                               + 72LL * v19
                               + 48);
              HIDWORD(v44) = v19;
              v25 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19);
              v26 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19
                              + 16);
              v27 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19
                              + 32);
              v49 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19
                              + 64);
              v48[0] = v25;
              v48[1] = v26;
              v48[2] = v27;
              v48[3] = v24;
              *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v24, 4)) - _mm_cvtsi128_si32(v24)),
                                        v48)
                                    + 1;
              *(_DWORD *)(a2 + 124) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 40);
              *(_DWORD *)(a2 + 132) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 44)
                                    + 1;
            }
            if ( *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                          + 72LL * v19
                          + 56) == 49
              && *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72LL * v19) == 1 )
            {
              v28 = *(__m128i *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                               + 72LL * v19
                               + 48);
              LODWORD(v44) = v19;
              v29 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19);
              v30 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19
                              + 16);
              v31 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19
                              + 32);
              v51 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                              + 72LL * v19
                              + 64);
              v50[0] = v29;
              v50[1] = v30;
              v50[2] = v31;
              v50[3] = v28;
              *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                        (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v28, 4)) - _mm_cvtsi128_si32(v28)),
                                        v50)
                                    + 1;
              *(_DWORD *)(a2 + 128) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 40);
              *(_DWORD *)(a2 + 136) = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                + 72LL * v19
                                                + 44)
                                    + 1;
            }
          }
          RIMCheckPressureUsageStatus(a1, a2, v22);
          v32 = 16 * v45;
          v33 = 16 * v45 + 36;
          *(_DWORD *)(a2 + 16 * (v45 + 2)) = v20;
          *(_WORD *)(v32 + a2 + 28) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                               + 72LL * v19);
          *(_WORD *)(v32 + a2 + 30) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                               + 72LL * v19
                                               + 56);
          v34 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                          + 72LL * v19
                          + 16);
          v52[0] = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                             + 72LL * v19);
          v35 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                          + 72LL * v19
                          + 32);
          v52[1] = v34;
          v36 = *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                          + 72LL * v19
                          + 48);
          v52[2] = v35;
          v53 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                          + 72LL * v19
                          + 64);
          v52[3] = v36;
          RIMRetrieveNormalizationRange(v22, v52, a2 + v33);
          ++v20;
        }
        ++v19;
      }
      while ( v19 < v56 );
      v17 = v57;
    }
    v37 = (int)v58;
    if ( v58[1] == 13 && *v58 == 2 && RIMIsInputUsagePresent(v17, v18, 0x5Bu) && RIMIsInputUsagePresent(v17, v38, 0x91u) )
      *(_DWORD *)(a2 + 360) |= 0x10000u;
    v39 = (*(_DWORD *)(a2 + 360) & 0x2000) == 0;
    *(_DWORD *)(a2 + 772) = v20;
    if ( (v39 || (int)RIMIDEValidateLogicalDeviceSize(a2, HIDWORD(v44), (unsigned int)v44) >= 0)
      && (int)RIMGetDeviceButtons(a1, a2, v17, v37, v41) >= 0 )
    {
      v5 = 1;
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    gpLeakTrackingAllocator,
    (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return v5;
}
