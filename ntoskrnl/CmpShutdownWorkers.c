/*
 * XREFs of CmpShutdownWorkers @ 0x140A0EF30
 * Callers:
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 * Callees:
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 */

BOOLEAN CmpShutdownWorkers()
{
  struct _KTIMER *v0; // rbx
  __int64 v1; // rdi
  BOOLEAN result; // al

  v0 = &CmpLazyWriterData;
  v1 = 3LL;
  do
  {
    result = KeCancelTimer(v0);
    v0 += 3;
    --v1;
  }
  while ( v1 );
  return result;
}
