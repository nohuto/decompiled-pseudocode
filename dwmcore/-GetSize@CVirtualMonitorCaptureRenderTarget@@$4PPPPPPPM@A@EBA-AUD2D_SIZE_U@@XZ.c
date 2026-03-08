/*
 * XREFs of ?GetSize@CVirtualMonitorCaptureRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1801186B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CVirtualMonitorCaptureRenderTarget::GetSize(__int64 a1, _DWORD *a2)
{
  return CVirtualMonitorCaptureRenderTarget::GetSize((CVirtualMonitorCaptureRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
