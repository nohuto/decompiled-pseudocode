/*
 * XREFs of ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x180206840
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUIUnknown@@PEAUComputeScribbleLatencyData@@@Z @ 0x1802019CC (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B2934 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ @ 0x180206B18 (-ResolveDelayedResources@CComputeScribbleStopwatch@@AEAAJXZ.c)
 */

float __fastcall CComputeScribbleStopwatch::GetElapsedTimeMs(CComputeScribbleStopwatch *this)
{
  int v2; // eax
  __int64 v3; // rax
  float v4; // xmm0_4
  __int64 v5; // rax
  float v6; // xmm0_4
  float v7; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CComputeScribbleStopwatch::ResolveDelayedResources(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      120LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\global\\computescribblestopwatch.cpp",
      (const char *)(unsigned int)v2);
  v3 = *((_QWORD *)this + 3) - *((_QWORD *)this + 6);
  if ( 1000 * v3 < 0 )
    v4 = (float)(int)((unsigned __int64)(1000 * v3) >> 1) + (float)(int)((unsigned __int64)(1000 * v3) >> 1);
  else
    v4 = (float)(1000 * v3);
  v5 = *((_QWORD *)this + 2) - *((_QWORD *)this + 7);
  v6 = v4 / *((float *)this + 2);
  if ( 1000 * v5 < 0 )
    v7 = (float)(int)((unsigned __int64)(1000 * v5) >> 1) + (float)(int)((unsigned __int64)(1000 * v5) >> 1);
  else
    v7 = (float)(1000 * v5);
  return v6 - (float)(v7 / *((float *)this + 3));
}
