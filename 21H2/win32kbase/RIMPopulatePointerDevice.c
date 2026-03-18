/*
 * XREFs of RIMPopulatePointerDevice @ 0x1C018C3A8
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMIsInputUsagePresent @ 0x1C018C168 (RIMIsInputUsagePresent.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C018E898 (rimHidP_GetSpecificValueCaps.c)
 *     RIMCheckPressureUsageStatus @ 0x1C0190160 (RIMCheckPressureUsageStatus.c)
 *     RIMGetDeviceButtons @ 0x1C0192130 (RIMGetDeviceButtons.c)
 *     RIMIsEssentialUsage @ 0x1C0194698 (RIMIsEssentialUsage.c)
 *     RIMIDEValidateLogicalDeviceSize @ 0x1C019E6E8 (RIMIDEValidateLogicalDeviceSize.c)
 *     RIMComputeSpecificHighMetricValue @ 0x1C01B6C84 (RIMComputeSpecificHighMetricValue.c)
 *     RIMRetrieveNormalizationRange @ 0x1C01B6D80 (RIMRetrieveNormalizationRange.c)
 */

__int64 __fastcall RIMPopulatePointerDevice(__int64 a1, __int64 a2, __int64 a3, __int16 *a4)
{
  __int64 v5; // r15
  unsigned int v6; // edi
  int v7; // r8d
  int SpecificValueCaps; // eax
  __int64 v9; // rcx
  _DWORD *v10; // rax
  PVOID v11; // r14
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 Pool2; // rbx
  char v16; // r12
  __int64 v17; // rdx
  unsigned int v18; // r12d
  unsigned int v19; // r13d
  __int16 v20; // r15
  unsigned __int16 v21; // r15
  __int64 v22; // rcx
  __int16 v23; // ax
  __m128i v24; // xmm5
  __int128 v25; // xmm2
  __int128 v26; // xmm3
  __int128 v27; // xmm4
  __m128i v28; // xmm5
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int64 v32; // rdx
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // r14d
  __int64 v37; // rdx
  bool v38; // zf
  int v39; // [rsp+28h] [rbp-E0h]
  __int64 v41; // [rsp+48h] [rbp-C0h]
  _OWORD v42[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+98h] [rbp-70h]
  _OWORD v44[4]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-20h]
  _OWORD v46[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v47; // [rsp+138h] [rbp+30h]
  PVOID BackTrace[28]; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int16 v50; // [rsp+240h] [rbp+138h] BYREF
  __int64 v51; // [rsp+248h] [rbp+140h]
  __int16 *v52; // [rsp+250h] [rbp+148h]

  v52 = a4;
  v51 = a3;
  v5 = a3;
  v6 = 0;
  v41 = -1LL;
  v7 = *(unsigned __int16 *)(a2 + 776);
  v50 = 0;
  SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v7, 0, 0LL, (__int64)&v50, a3);
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    return 0LL;
  v9 = 6LL;
  v10 = (_DWORD *)(a2 + 32);
  do
  {
    *v10 = -1;
    v10 += 4;
    --v9;
  }
  while ( v9 );
  v11 = gpLeakTrackingAllocator;
  v12 = 72LL * v50;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6A6E6952) != 0x6A6E6952
    || (v13 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_9:
    Pool2 = ExAllocatePool2(260LL, v12);
    goto LABEL_10;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v13) != 1785620818 )
  {
    if ( ++v13 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_9;
  }
  v16 = 0;
  if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
  {
    v16 = 1;
    v12 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v12);
  if ( !Pool2 )
    return 0LL;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v16 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v11,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_22;
    }
LABEL_21:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v11,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_21;
  Pool2 += 16LL;
LABEL_10:
  if ( !Pool2 )
    return 0LL;
LABEL_22:
  if ( (int)rimHidP_GetSpecificValueCaps(0, 0, *(unsigned __int16 *)(a2 + 776), 0, Pool2, (__int64)&v50, v5) >= 0 )
  {
    v18 = 0;
    v19 = 0;
    if ( v50 )
    {
      while ( 1 )
      {
        if ( v19 >= 6 )
        {
LABEL_37:
          v5 = v51;
          goto LABEL_38;
        }
        v20 = *v52;
        if ( *v52 == 2 )
          v20 = 1;
        v21 = *(_WORD *)(Pool2 + 72LL * v18 + 56) | ((*(_WORD *)(Pool2 + 72LL * v18) | (unsigned __int16)(16 * v20)) << 8);
        if ( (unsigned int)RIMIsEssentialUsage(v21) )
          break;
LABEL_36:
        if ( ++v18 >= v50 )
          goto LABEL_37;
      }
      v22 = 60LL * v19;
      *(_WORD *)(v22 + a2 + 400) = *(_WORD *)(Pool2 + 72LL * v18);
      *(_WORD *)(v22 + a2 + 412) = *(_WORD *)(Pool2 + 72LL * v18 + 56);
      *(_DWORD *)(v22 + a2 + 404) = *(unsigned __int8 *)(Pool2 + 72LL * v18 + 2);
      *(_WORD *)(v22 + a2 + 410) = *(_WORD *)(Pool2 + 72LL * v18 + 10);
      *(_DWORD *)(v22 + a2 + 416) = *(unsigned __int8 *)(Pool2 + 72LL * v18 + 16);
      *(_DWORD *)(v22 + a2 + 432) = *(_DWORD *)(Pool2 + 72LL * v18 + 40);
      *(_DWORD *)(v22 + a2 + 436) = *(_DWORD *)(Pool2 + 72LL * v18 + 44);
      *(_DWORD *)(v22 + a2 + 440) = *(_DWORD *)(Pool2 + 72LL * v18 + 48);
      *(_DWORD *)(v22 + a2 + 444) = *(_DWORD *)(Pool2 + 72LL * v18 + 52);
      *(_WORD *)(v22 + a2 + 456) = *(_WORD *)(Pool2 + 72LL * v18 + 18);
      if ( (*(_DWORD *)(a2 + 360) & 0x2000) != 0 )
      {
        v23 = *(_WORD *)(Pool2 + 72LL * v18 + 56);
        if ( v23 != 48 )
        {
LABEL_32:
          if ( v23 == 49 && *(_WORD *)(Pool2 + 72LL * v18) == 1 )
          {
            v28 = *(__m128i *)(Pool2 + 72LL * v18 + 48);
            LODWORD(v41) = v18;
            v29 = *(_OWORD *)(Pool2 + 72LL * v18);
            v30 = *(_OWORD *)(Pool2 + 72LL * v18 + 16);
            v31 = *(_OWORD *)(Pool2 + 72LL * v18 + 32);
            v45 = *(_QWORD *)(Pool2 + 72LL * v18 + 64);
            v44[0] = v29;
            v44[1] = v30;
            v44[2] = v31;
            v44[3] = v28;
            *(_DWORD *)(a2 + 152) = RIMComputeSpecificHighMetricValue(
                                      (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v28, 4)) - _mm_cvtsi128_si32(v28)),
                                      v44)
                                  + 1;
            *(_DWORD *)(a2 + 128) = *(_DWORD *)(Pool2 + 72LL * v18 + 40);
            *(_DWORD *)(a2 + 136) = *(_DWORD *)(Pool2 + 72LL * v18 + 44) + 1;
          }
          goto LABEL_35;
        }
        if ( *(_WORD *)(Pool2 + 72LL * v18) == 1 )
        {
          v24 = *(__m128i *)(Pool2 + 72LL * v18 + 48);
          HIDWORD(v41) = v18;
          v25 = *(_OWORD *)(Pool2 + 72LL * v18);
          v26 = *(_OWORD *)(Pool2 + 72LL * v18 + 16);
          v27 = *(_OWORD *)(Pool2 + 72LL * v18 + 32);
          v43 = *(_QWORD *)(Pool2 + 72LL * v18 + 64);
          v42[0] = v25;
          v42[1] = v26;
          v42[2] = v27;
          v42[3] = v24;
          *(_DWORD *)(a2 + 148) = RIMComputeSpecificHighMetricValue(
                                    (unsigned int)(_mm_cvtsi128_si32(_mm_srli_si128(v24, 4)) - _mm_cvtsi128_si32(v24)),
                                    v42)
                                + 1;
          *(_DWORD *)(a2 + 124) = *(_DWORD *)(Pool2 + 72LL * v18 + 40);
          *(_DWORD *)(a2 + 132) = *(_DWORD *)(Pool2 + 72LL * v18 + 44) + 1;
          v23 = *(_WORD *)(Pool2 + 72LL * v18 + 56);
          goto LABEL_32;
        }
      }
LABEL_35:
      RIMCheckPressureUsageStatus(a1, a2, v21);
      v32 = 16LL * v19;
      *(_DWORD *)(a2 + 16 * (v19 + 2LL)) = v19;
      *(_WORD *)(v32 + a2 + 28) = *(_WORD *)(Pool2 + 72LL * v18);
      *(_WORD *)(v32 + a2 + 30) = *(_WORD *)(Pool2 + 72LL * v18 + 56);
      v33 = *(_OWORD *)(Pool2 + 72LL * v18 + 16);
      v46[0] = *(_OWORD *)(Pool2 + 72LL * v18);
      v34 = *(_OWORD *)(Pool2 + 72LL * v18 + 32);
      v46[1] = v33;
      v35 = *(_OWORD *)(Pool2 + 72LL * v18 + 48);
      v46[2] = v34;
      v47 = *(_QWORD *)(Pool2 + 72LL * v18 + 64);
      v46[3] = v35;
      RIMRetrieveNormalizationRange(v21, v46, a2 + v32 + 36);
      ++v19;
      goto LABEL_36;
    }
LABEL_38:
    v36 = (int)v52;
    if ( v52[1] == 13 && *v52 == 2 && RIMIsInputUsagePresent(v5, v17, 0x5Bu) && RIMIsInputUsagePresent(v5, v37, 0x91u) )
      *(_DWORD *)(a2 + 360) |= 0x10000u;
    v38 = (*(_DWORD *)(a2 + 360) & 0x2000) == 0;
    *(_DWORD *)(a2 + 772) = v19;
    if ( (v38 || (int)RIMIDEValidateLogicalDeviceSize(a2, HIDWORD(v41), (unsigned int)v41) >= 0)
      && (int)RIMGetDeviceButtons(a1, a2, v5, v36, v39) >= 0 )
    {
      v6 = 1;
    }
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(
    (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
    (char *)Pool2);
  return v6;
}
