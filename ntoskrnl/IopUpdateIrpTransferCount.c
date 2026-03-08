/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1402F9C50
 * Callers:
 *     IopCopyCompleteReadRequest @ 0x1402F9BA0 (IopCopyCompleteReadRequest.c)
 *     IopIoRingCompleteIrp @ 0x1405570DC (IopIoRingCompleteIrp.c)
 * Callees:
 *     IopUpdateReadTransferCount @ 0x1402F9C78 (IopUpdateReadTransferCount.c)
 *     IopUpdateOtherTransferCount @ 0x140554138 (IopUpdateOtherTransferCount.c)
 *     IopUpdateWriteTransferCount @ 0x140554170 (IopUpdateWriteTransferCount.c)
 */

__int64 __fastcall IopUpdateIrpTransferCount(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 0x100) != 0 )
    return IopUpdateReadTransferCount(*(unsigned int *)(a1 + 56));
  if ( (result & 0x200) != 0 )
    return IopUpdateWriteTransferCount(*(unsigned int *)(a1 + 56));
  if ( *(__int64 *)(a1 + 56) >= 0 )
    return IopUpdateOtherTransferCount(*(unsigned int *)(a1 + 56));
  return result;
}
