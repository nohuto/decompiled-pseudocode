/*
 * XREFs of RaidAdapterStop @ 0x1C0013C2C
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00134DC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidAdapterReleaseResources @ 0x1C0078E14 (RaidAdapterReleaseResources.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C007914C (RaidAdapterStopDeviceIrp.c)
 * Callees:
 *     RaidAdapterStopAdapter @ 0x1C0013C7C (RaidAdapterStopAdapter.c)
 *     RaidIsAdapterControlSupported @ 0x1C0019480 (RaidIsAdapterControlSupported.c)
 */

__int64 __fastcall RaidAdapterStop(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 552) || !*(_QWORD *)(a1 + 560) )
    return 0LL;
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 1LL) )
    return (unsigned int)RaidAdapterStopAdapter(a1);
  return v1;
}
