/*
 * XREFs of ?reset@?$com_ptr_t@V?$CWeakReference@VCVisual@@@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F33F8
 * Callers:
 *     ?UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z @ 0x180016C44 (-UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEBVCVisualTree@@PEAVCVisual@@PEBV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18005A02C (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 *     ?PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z @ 0x1800B0F0C (-PushSink@CCpuClipAntialiasSinkContext@@QEAAJPEBVCShape@@PEAVCCpuClipAntialiasSink@@@Z.c)
 *     ?RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z @ 0x1800E7C1C (-RegisterNotifiers@CVisualReferenceController@@QEAAJPEAVCResourceTable@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ @ 0x1800E80F0 (-UnRegisterNotifiers@CVisualReferenceController@@UEAAXXZ.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18010A4B8 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
