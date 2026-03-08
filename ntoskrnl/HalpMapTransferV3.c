/*
 * XREFs of HalpMapTransferV3 @ 0x140512CCC
 * Callers:
 *     IoMapTransferInternal @ 0x140452EBE (IoMapTransferInternal.c)
 * Callees:
 *     HalpDmaMapContiguousTransferV3 @ 0x1404FDFEC (HalpDmaMapContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x1404FE110 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaZeroMapBuffers @ 0x14050F420 (HalpDmaZeroMapBuffers.c)
 */

__int64 __fastcall HalpMapTransferV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5, char a6, char a7)
{
  __int16 v7; // bp
  _QWORD *v10; // r15
  __int64 v11; // rcx
  __int64 v12[3]; // [rsp+40h] [rbp-18h] BYREF

  v7 = a4;
  v12[0] = 0LL;
  if ( !*a5 )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 512) )
  {
    *a5 = 0;
    return 0LL;
  }
  v10 = *(_QWORD **)(a3 + 56);
  if ( *(_BYTE *)(a1 + 442) )
    HalpDmaMapScatterTransferV3(a1, a2, a3, a4, a5, a6, a7, v12);
  else
    HalpDmaMapContiguousTransferV3(a1, a2, a3, a4, a5, a6, a7, v12);
  if ( !*(_BYTE *)(a1 + 441) && !a6 )
  {
    if ( *(_BYTE *)(a1 + 444) )
      HalpDmaZeroMapBuffers(v11, v10, v7 & 0xFFF, *a5);
  }
  return v12[0];
}
