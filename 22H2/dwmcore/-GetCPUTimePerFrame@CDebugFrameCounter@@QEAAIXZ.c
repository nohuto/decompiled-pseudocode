/*
 * XREFs of ?GetCPUTimePerFrame@CDebugFrameCounter@@QEAAIXZ @ 0x180162958
 * Callers:
 *     ?RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180184BC8 (-RenderDebugFrameCounter@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ @ 0x1801629A8 (-GetFrameCountInternal@CDebugFrameCounter@@IEAAIXZ.c)
 */

__int64 __fastcall CDebugFrameCounter::GetCPUTimePerFrame(CDebugFrameCounter *this)
{
  unsigned int FrameCountInternal; // eax
  __int64 v2; // r9
  unsigned __int64 v3; // r10

  if ( !*((_BYTE *)this + 24) || *((_DWORD *)this + 4) == -1 )
    return 0LL;
  FrameCountInternal = CDebugFrameCounter::GetFrameCountInternal(this);
  if ( FrameCountInternal )
    v3 = *(_QWORD *)(v2 + 32) / (unsigned __int64)FrameCountInternal;
  return (unsigned int)(v3 / 0x2710);
}
