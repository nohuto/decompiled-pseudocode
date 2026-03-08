/*
 * XREFs of ??1_VIDSCH_FLIP_QUEUE_ENTRY@@QEAA@XZ @ 0x1C0018110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall _VIDSCH_FLIP_QUEUE_ENTRY::~_VIDSCH_FLIP_QUEUE_ENTRY(_VIDSCH_FLIP_QUEUE_ENTRY *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 147);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
