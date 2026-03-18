/*
 * XREFs of HalGetDmaTransferInfo @ 0x14045B420
 * Callers:
 *     HalCalculateScatterGatherListSizeV3 @ 0x1403B0410 (HalCalculateScatterGatherListSizeV3.c)
 * Callees:
 *     HalGetDmaTransferInfoInternal @ 0x14045B45C (HalGetDmaTransferInfoInternal.c)
 */

__int64 __fastcall HalGetDmaTransferInfo(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  __int64 result; // rax

  result = HalGetDmaTransferInfoInternal(a1, a2, a3, a4);
  if ( (*a6 == 1 || *a6 == 2) && !a6[1] )
    a6[1] = 1;
  return result;
}
