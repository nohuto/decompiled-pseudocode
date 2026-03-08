/*
 * XREFs of ??1VIDMM_PAGING_HISTORY_ENTRY@@QEAA@XZ @ 0x1C002D870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGING_HISTORY_ENTRY::~VIDMM_PAGING_HISTORY_ENTRY(VIDMM_PAGING_HISTORY_ENTRY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
