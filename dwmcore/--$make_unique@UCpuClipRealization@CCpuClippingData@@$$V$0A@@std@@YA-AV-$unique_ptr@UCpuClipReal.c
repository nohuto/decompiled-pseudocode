/*
 * XREFs of ??$make_unique@UCpuClipRealization@CCpuClippingData@@$$V$0A@@std@@YA?AV?$unique_ptr@UCpuClipRealization@CCpuClippingData@@U?$default_delete@UCpuClipRealization@CCpuClippingData@@@std@@@0@XZ @ 0x180030DC8
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 */

_QWORD *__fastcall std::make_unique<CCpuClippingData::CpuClipRealization,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x88uLL);
    v3[12] = 0LL;
    v3[15] = 0LL;
    *((_BYTE *)v3 + 80) = 0;
    *((_BYTE *)v3 + 104) = 0;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return a1;
}
