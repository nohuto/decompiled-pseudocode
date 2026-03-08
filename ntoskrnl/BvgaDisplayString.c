/*
 * XREFs of BvgaDisplayString @ 0x14054CE50
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessDispatch @ 0x140372650 (HeadlessDispatch.c)
 *     BvgaAcquireLock @ 0x14054CD30 (BvgaAcquireLock.c)
 *     BvgaReleaseLock @ 0x14054D030 (BvgaReleaseLock.c)
 */

char __fastcall BvgaDisplayString(__int64 a1)
{
  __int64 v2; // r8

  if ( BvgaDisplayState )
    return 0;
  BvgaAcquireLock();
  if ( BvgaBootDriverInstalled )
    VidDisplayString(a1);
  v2 = -1LL;
  do
    ++v2;
  while ( *(_BYTE *)(a1 + v2) );
  HeadlessDispatch(3LL, a1, v2 + 1, 0LL, 0LL);
  BvgaReleaseLock();
  return 1;
}
