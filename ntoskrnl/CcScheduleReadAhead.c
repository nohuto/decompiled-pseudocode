/*
 * XREFs of CcScheduleReadAhead @ 0x140535500
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadNuma(FileObject, FileOffset, Length, 0LL, 0LL);
}
