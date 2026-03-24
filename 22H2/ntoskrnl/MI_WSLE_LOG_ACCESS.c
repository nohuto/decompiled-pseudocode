/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140289700
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x1402702C4 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x140286100 (MiDeleteSystemPagableVm.c)
 *     MiEmptyWorkingSetHelper @ 0x140286BB4 (MiEmptyWorkingSetHelper.c)
 *     MiRemoveMappedPtes @ 0x140288B80 (MiRemoveMappedPtes.c)
 *     MiTrimPte @ 0x140288F80 (MiTrimPte.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MmProtectPool @ 0x140362438 (MmProtectPool.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14053660C (MiDeprioritizeVirtualAddresses.c)
 *     MiTrimPteWorker @ 0x14053C128 (MiTrimPteWorker.c)
 * Callees:
 *     MiGetVaAge @ 0x140289770 (MiGetVaAge.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 */

__int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _BYTE *a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax

  v4 = (__int64)((_QWORD)a2 << 25) >> 16;
  if ( v4 >= 0xFFFFF68000000000uLL && (result = 0xFFFFF6FFFFFFFFFFuLL, v4 <= 0xFFFFF6FFFFFFFFFFuLL)
    || (result = MiGetVaAge(0xFFFFF68000000000uLL, v4), (_BYTE)result != 7) )
  {
    if ( (*a2 & 0x20) != 0 )
      return MiLogPageAccess(a1, a2);
  }
  return result;
}
