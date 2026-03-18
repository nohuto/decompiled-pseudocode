/*
 * XREFs of HalpFlushAndWait @ 0x14041A400
 * Callers:
 *     HaliAcpiSleep @ 0x140528000 (HaliAcpiSleep.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x140371FB0 (KeSweepLocalCaches.c)
 */

unsigned __int64 __fastcall HalpFlushAndWait(volatile signed __int32 *a1)
{
  unsigned __int64 result; // rax

  KeSweepLocalCaches();
  _InterlockedIncrement(a1);
  do
    _mm_pause();
  while ( *a1 );
  result = __readcr2();
  __writecr2(result);
  return result;
}
