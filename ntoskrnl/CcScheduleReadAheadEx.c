/*
 * XREFs of CcScheduleReadAheadEx @ 0x14020D0A0
 * Callers:
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 * Callees:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 */

__int64 __fastcall CcScheduleReadAheadEx(void *a1)
{
  return CcScheduleReadAheadNuma(a1, 0LL);
}
