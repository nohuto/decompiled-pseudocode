/*
 * XREFs of KxSetTimeStampBusy @ 0x1403461A4
 * Callers:
 *     KeFlushTb @ 0x140279850 (KeFlushTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EB4C4 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x14036D4F0 (KeInvalidateAllCaches.c)
 *     KxFlushEntireTb @ 0x1403B241C (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403CB9F0 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 */

char __fastcall KxSetTimeStampBusy(int *a1)
{
  int v2; // ecx
  int v3; // edi
  int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  _m_prefetchw(a1);
  v2 = *a1;
  v3 = v2;
  do
  {
    if ( (v2 & 1) == 0 && !_interlockedbittestandset(a1, 0) )
      return 1;
    KeYieldProcessorEx(&v6);
    v2 = *a1;
    v5 = *a1 - v3;
  }
  while ( v5 < 3 && (v5 < 2 || (v3 & 1) != 0) );
  return 0;
}
