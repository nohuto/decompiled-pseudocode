/*
 * XREFs of KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x14039E710
 * Callers:
 *     KeUpdateThreadCpuSets @ 0x14039DDF8 (KeUpdateThreadCpuSets.c)
 *     KiUpdateThreadCpuSetAffinitiesProcess @ 0x14039E6C0 (KiUpdateThreadCpuSetAffinitiesProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     KiUpdateThreadCpuSets @ 0x14039E750 (KiUpdateThreadCpuSets.c)
 */

__int64 __fastcall KiUpdateThreadCpuSetAffinitiesFromDpcLevel(__int64 a1, __int64 a2)
{
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( *(_QWORD *)(a1 + 64) );
  }
  return KiUpdateThreadCpuSets(a1, a2);
}
