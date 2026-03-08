/*
 * XREFs of ?Init@VIDMM_PROCESS_HEAP@@UEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C00B4BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::Init(VIDMM_PROCESS_HEAP *this, struct VIDMM_PROCESS *a2)
{
  *((_QWORD *)this + 1) = a2;
  return 0LL;
}
