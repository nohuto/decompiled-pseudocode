/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C55D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::UnmapPagingBuffer(VIDMM_SEGMENT *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax

  v2 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
  v2[5] = 0LL;
  v2[6] = 0LL;
  v2[7] = 0LL;
  v2[3] = 270LL;
  v2[4] = 13LL;
  WdLogEvent5_WdCriticalError(v2);
}
