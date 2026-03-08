/*
 * XREFs of ?GetBackingAddress@VIDMM_PROCESS_HEAP@@UEAA_KPEAX@Z @ 0x1C00B4B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall VIDMM_PROCESS_HEAP::GetBackingAddress(VIDMM_PROCESS_HEAP *this, _QWORD *a2)
{
  return *(_QWORD *)(*(_QWORD *)(a2[12] + 8LL) + 48LL) << 12;
}
