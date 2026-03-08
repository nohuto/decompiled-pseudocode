/*
 * XREFs of HalpDmaInitDiscard @ 0x140B60DD0
 * Callers:
 *     HalpDmaInitSystem @ 0x140A8D4D0 (HalpDmaInitSystem.c)
 * Callees:
 *     HalpDmaInitMemory @ 0x140B3D81C (HalpDmaInitMemory.c)
 */

__int64 __fastcall HalpDmaInitDiscard(__int64 a1)
{
  __int64 *i; // rdx
  unsigned __int64 v2; // rax
  __int64 v3; // r9

  qword_140C02150 = (__int64)HaliGetDmaAdapter;
  off_140C01D18[0] = (__int64 (__fastcall *)())HalpDmaLinkDeviceObjectByToken;
  off_140C01D20 = (__int64 (__fastcall *)())HalpDmaCheckAdapterToken;
  off_140C01A00[0] = (__int64 (__fastcall *)())HalpAllocateMapRegisters;
  off_140C01C68[0] = (__int64 (__fastcall *)())HalpDmaFreeCrashDumpRegisters;
  for ( i = *(__int64 **)(a1 + 32); i != (__int64 *)(a1 + 32); i = (__int64 *)*i )
  {
    v2 = *((int *)i + 6);
    if ( (unsigned int)v2 <= 0x25 )
    {
      v3 = 0x2BC0400048LL;
      if ( _bittest64(&v3, v2) )
        continue;
    }
    if ( ((i[4] + i[5]) << 12) - 1 > (unsigned __int64)HalpMaximumPhysicalMemoryAddress )
      HalpMaximumPhysicalMemoryAddress = ((i[4] + i[5]) << 12) - 1;
  }
  HalpDmaInitMemory(a1);
  return 0LL;
}
