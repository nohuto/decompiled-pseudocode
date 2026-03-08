/*
 * XREFs of CcCanIWriteStream @ 0x140535004
 * Callers:
 *     CcScheduleReadAheadNuma @ 0x14020D0BC (CcScheduleReadAheadNuma.c)
 * Callees:
 *     CcCanIWriteStreamEx @ 0x140363460 (CcCanIWriteStreamEx.c)
 */

bool __fastcall CcCanIWriteStream(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  return CcCanIWriteStreamEx(a1, a2, a3, a4, a5, a6, 0LL);
}
