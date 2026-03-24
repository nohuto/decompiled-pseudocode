/*
 * XREFs of IopUpdateIrpTransferCount @ 0x1403F08A0
 * Callers:
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1040 (IopCopyCompleteReadRequest.c)
 * Callees:
 *     IopUpdateOtherTransferCount @ 0x1402C5D50 (IopUpdateOtherTransferCount.c)
 *     IopUpdateWriteTransferCount @ 0x140344D20 (IopUpdateWriteTransferCount.c)
 *     IopUpdateReadTransferCount @ 0x140345430 (IopUpdateReadTransferCount.c)
 */

struct _KTHREAD *__fastcall IopUpdateIrpTransferCount(__int64 a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  result = (struct _KTHREAD *)*(unsigned int *)(a1 + 16);
  if ( ((unsigned __int16)result & 0x100) != 0 )
    return IopUpdateReadTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( ((unsigned __int16)result & 0x200) != 0 )
    return (struct _KTHREAD *)IopUpdateWriteTransferCount(*(_DWORD *)(a1 + 56), a2);
  if ( *(__int64 *)(a1 + 56) >= 0 )
    return IopUpdateOtherTransferCount(*(_DWORD *)(a1 + 56), a2);
  return result;
}
