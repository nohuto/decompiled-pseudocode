/*
 * XREFs of ??1VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAA@XZ @ 0x1C003D430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::~VIDSCH_FLIP_QUEUE_HISTORY_ENTRY(PVOID *this)
{
  ExFreePoolWithTag(this[9], 0);
}
