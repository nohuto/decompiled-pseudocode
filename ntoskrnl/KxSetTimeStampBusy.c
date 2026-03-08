/*
 * XREFs of KxSetTimeStampBusy @ 0x1402DC0CC
 * Callers:
 *     KxFlushNonGlobalTb @ 0x140212260 (KxFlushNonGlobalTb.c)
 *     KeInvalidateAllCaches @ 0x1403010D0 (KeInvalidateAllCaches.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KxFlushEntireTb @ 0x1403AD5FC (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
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
