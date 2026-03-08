/*
 * XREFs of EtwpApplyStackWalkFilterOnUserEvent @ 0x1409F2310
 * Callers:
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpApplyStackWalkIdFilter @ 0x140601EC8 (EtwpApplyStackWalkIdFilter.c)
 */

bool __fastcall EtwpApplyStackWalkFilterOnUserEvent(__int64 a1, __int64 a2, unsigned int a3)
{
  return EtwpApplyStackWalkIdFilter(*(_WORD *)(a1 + 40), a2, a3, 1);
}
