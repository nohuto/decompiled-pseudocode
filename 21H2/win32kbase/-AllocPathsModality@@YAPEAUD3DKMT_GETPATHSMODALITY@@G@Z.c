/*
 * XREFs of ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0083844
 * Callers:
 *     GetPathsModality @ 0x1C0083798 (GetPathsModality.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C016FC20 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0170EB8 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@PEA_NPEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C0172A20 (-SetDisplayConfigHandleBrokerProvidedPaths@@YAJPEAX_NIPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAP.c)
 *     ?SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STAGE@@@Z @ 0x1C017318C (-SetDisplayConfigHandlePreferredScaling@@YAJPEAUD3DKMT_GETPATHSMODALITY@@PEAW4_DXGK_DIAG_SDC_STA.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

struct D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  PVOID v1; // rdi
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 Pool2; // rbx
  struct D3DKMT_GETPATHSMODALITY *result; // rax
  __int64 v6; // rax
  char v7; // bp
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  v1 = gpLeakTrackingAllocator;
  v2 = a1;
  v3 = 296 * (unsigned int)a1 + 56;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
    || (v6 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_2:
    Pool2 = ExAllocatePool2(260LL, v3);
    goto LABEL_3;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v6) != 1936876615 )
  {
    if ( ++v6 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_2;
  }
  v7 = 0;
  if ( v3 < 0x1000 || ((296 * a1 + 56) & 0xFFF) != 0 )
  {
    v7 = 1;
    v3 += 16LL;
  }
  Pool2 = ExAllocatePool2(260LL, v3);
  if ( !Pool2 )
    goto LABEL_19;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v7 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            v1,
                            Pool2,
                            BackTrace) )
      goto LABEL_4;
    goto LABEL_18;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                           v1,
                           Pool2,
                           BackTrace) )
  {
LABEL_18:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_19;
  }
  Pool2 += 16LL;
LABEL_3:
  if ( Pool2 )
  {
LABEL_4:
    *(_DWORD *)(Pool2 + 40) = 0;
    result = (struct D3DKMT_GETPATHSMODALITY *)Pool2;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_WORD *)(Pool2 + 20) = v2;
    *(_WORD *)(Pool2 + 22) = v2;
    return result;
  }
LABEL_19:
  WdLogSingleEntry1(6LL, v2);
  return 0LL;
}
