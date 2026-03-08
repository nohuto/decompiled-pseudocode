/*
 * XREFs of IoMapTransferInternal @ 0x140452EBE
 * Callers:
 *     IopMapTransfer @ 0x1404FFB20 (IopMapTransfer.c)
 *     HalMapTransferEx @ 0x140512200 (HalMapTransferEx.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x1403B4514 (HalpDmaGetAdapterVersion.c)
 *     HalpMapTransferV2 @ 0x140454DA4 (HalpMapTransferV2.c)
 *     HalpDmaFlushBuffer @ 0x14050E7A0 (HalpDmaFlushBuffer.c)
 *     HalpMapTransferV3 @ 0x140512CCC (HalpMapTransferV3.c)
 */

__int64 __fastcall IoMapTransferInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        char a6,
        char a7)
{
  unsigned int v10; // r10d
  __int64 *v11; // r14
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rbx
  int v17; // r8d
  int v18; // r9d
  int v19; // r11d

  if ( a3 )
  {
    if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
      return HalpMapTransferV2(v19, a2, v17, v18, (__int64)a5, a6);
    else
      return HalpMapTransferV3(v19, a2, v17, v18, (__int64)a5, a6, a7);
  }
  else
  {
    v10 = 4096 - (a4 & 0xFFF);
    v11 = (__int64 *)(a2 + 8 * (((unsigned __int64)(a4 - *(_QWORD *)(a2 + 32)) >> 12) + 6));
    v12 = *a5;
    v13 = *v11;
    v14 = *a5;
    v15 = (a4 & 0xFFF) + (*v11 << 12);
    if ( v10 < *a5 )
    {
      do
      {
        if ( v13 + 1 != *++v11 )
          break;
        v13 ^= *v11;
        if ( (v13 & 0xFFFFFFFFFFF00000uLL) != 0 )
          break;
        v10 += 4096;
        v13 = *v11;
      }
      while ( v10 < v12 );
      if ( v10 < v12 )
      {
        *a5 = v10;
        v14 = v10;
      }
    }
    if ( !*(_BYTE *)(a1 + 445) )
      HalpDmaFlushBuffer(v13, a2, a4, v14, a6, a7);
    return v15;
  }
}
