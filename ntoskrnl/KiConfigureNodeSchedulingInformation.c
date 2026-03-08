/*
 * XREFs of KiConfigureNodeSchedulingInformation @ 0x1403AC474
 * Callers:
 *     KiConfigureAllSchedulingInformation @ 0x140B41844 (KiConfigureAllSchedulingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiConfigureNodeSchedulingInformation(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // rbx
  char v3; // r14
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned __int64 v7; // r8
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbp
  int v13; // esi
  unsigned __int64 v14; // r8
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 136);
  v2 = *(_QWORD *)(a1 + 128);
  v3 = HalpInterruptHyperThreading;
  v4 = 0LL;
  v5 = 4LL * *(unsigned __int16 *)(a1 + 136);
  v7 = v2;
  if ( v2 )
  {
    do
    {
      _BitScanForward64((unsigned __int64 *)&v8, v7);
      v9 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)((v1 << 6) + v8)]];
      if ( v3 )
      {
        v10 = *(_QWORD *)(v9 + 34912);
        if ( v10 != *(_QWORD *)(v9 + 200) )
          *(_BYTE *)(a1 + 184) |= 1u;
      }
      else
      {
        v10 = v2 & *(_QWORD *)(v9 + 8LL * *(unsigned __int8 *)(v9 + 208) + 34584);
      }
      v4 |= 1LL << v8;
      v7 &= ~v10;
    }
    while ( v7 );
    v11 = 0LL;
    v12 = v2;
    v13 = v1 << 6;
    do
    {
      _BitScanForward64(&v14, v12);
      v11 |= 1LL << v14;
      v12 &= ~*(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v13 + v14)]] + 34928);
    }
    while ( v12 );
    v15 = 0LL;
    do
    {
      _BitScanForward64(&v16, v2);
      v17 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[(unsigned int)(v13 + v16)]] + 34880);
      v15 |= v17;
      v2 &= ~v17 & ~(1LL << v16);
    }
    while ( v2 );
  }
  else
  {
    v11 = 0LL;
    v15 = 0LL;
  }
  *(_QWORD *)(a1 + 160) = v4;
  *(_QWORD *)(a1 + 168) = v11;
  *(_QWORD *)(a1 + 152) = v15;
  qword_140D20580[v5] |= v4;
  result = KeNodeBlock[*(unsigned __int16 *)(a1 + 138)];
  if ( (*(_BYTE *)(result + 10) & 1) != 0 )
  {
    result = *(_QWORD *)(a1 + 128);
    *(_QWORD *)((char *)&unk_140D20588 + v5 * 8) |= result;
  }
  return result;
}
