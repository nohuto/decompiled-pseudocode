/*
 * XREFs of ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x180252514
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@$4PPPPPPPM@A@EAAJXZ @ 0x18011A370 (-CheckOcclusionState@CVisualCapture@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1802524CC (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::CheckOcclusionState(CVisualCapture *this)
{
  __int64 result; // rax

  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 1968));
  result = 0LL;
  if ( !*((_BYTE *)this - 212) )
  {
    if ( *((_BYTE *)this - 55) )
      return 142213121LL;
  }
  return result;
}
