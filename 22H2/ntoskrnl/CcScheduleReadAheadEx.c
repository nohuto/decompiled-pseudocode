/*
 * XREFs of CcScheduleReadAheadEx @ 0x140328DC0
 * Callers:
 *     CcMdlRead @ 0x14073EEB0 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x140328DDC (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
