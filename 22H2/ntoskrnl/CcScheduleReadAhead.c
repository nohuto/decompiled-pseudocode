/*
 * XREFs of CcScheduleReadAhead @ 0x1405379D0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x140328DDC (CcScheduleReadAheadNuma.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadNuma((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL, 0LL);
}
