/*
 * XREFs of KiHeteroReduceToMaximallyPreferredByClass @ 0x140574EC0
 * Callers:
 *     KiHeteroIdleSetReduction @ 0x14045974C (KiHeteroIdleSetReduction.c)
 *     KiTallyHeteroSoftParkElectionVotes @ 0x14057C0D8 (KiTallyHeteroSoftParkElectionVotes.c)
 * Callees:
 *     KiGetProcessorClassForPolicy @ 0x140459166 (KiGetProcessorClassForPolicy.c)
 */

__int64 __fastcall KiHeteroReduceToMaximallyPreferredByClass(
        unsigned __int16 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int8 a4)
{
  __int64 v4; // r10
  unsigned int v5; // esi
  unsigned __int64 v8; // r11
  int v9; // edi
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int8 ProcessorClassForPolicy; // al
  __int64 v13; // r11

  v4 = 0LL;
  v5 = 0;
  v8 = a2;
  if ( a2 )
  {
    v9 = a1 << 6;
    do
    {
      _BitScanForward64(&v10, v8);
      v11 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v9 + (v10 & 0x3F)]];
      ProcessorClassForPolicy = KiGetProcessorClassForPolicy(v11, a3, a4);
      if ( ProcessorClassForPolicy <= v5 )
      {
        if ( ProcessorClassForPolicy == v5 )
          v4 |= *(_QWORD *)(v11 + 200);
      }
      else
      {
        v4 = *(_QWORD *)(v11 + 200);
        v5 = ProcessorClassForPolicy;
      }
      v8 = ~*(_QWORD *)(v11 + 200) & v13;
    }
    while ( v8 );
  }
  return v4;
}
