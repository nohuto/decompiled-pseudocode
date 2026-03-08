/*
 * XREFs of ?GetThreadPriority@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJXZ @ 0x1C01DD940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BLTQUEUE_EMULATED_VSYNC_SOURCE::GetThreadPriority(BLTQUEUE_EMULATED_VSYNC_SOURCE *this)
{
  return *((_BYTE *)this + 8) != 0 ? 20 : 14;
}
