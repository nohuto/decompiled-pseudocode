/*
 * XREFs of MiReturnCrossPartitionCloneCharges @ 0x14029DD9C
 * Callers:
 *     MiDecrementCloneBlock @ 0x14029DC04 (MiDecrementCloneBlock.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x140662368 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140658D80 (MiReturnCrossPartitionCharges.c)
 */

void __fastcall MiReturnCrossPartitionCloneCharges(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // r8
  bool v8; // zf
  signed __int32 v9; // eax

  if ( (a2 & 1) != 0 )
    MiReturnCommit(a1, 1LL, a3);
  if ( (a2 & 2) != 0 )
  {
    v5 = 1LL;
    if ( (_UNKNOWN *)a1 != &MiSystemPartition )
      goto LABEL_14;
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable == -1 )
      goto LABEL_14;
    if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
    {
      do
      {
        v9 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
               CachedResidentAvailable + 1,
               CachedResidentAvailable);
        v8 = (_DWORD)CachedResidentAvailable == v9;
        LODWORD(CachedResidentAvailable) = v9;
        if ( v8 )
          goto LABEL_15;
      }
      while ( v9 != -1 && (unsigned __int64)(v9 + 1LL) <= 0x100 );
    }
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = (int)CachedResidentAvailable - 192 + 1LL;
    }
    if ( v5 )
LABEL_14:
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v5);
LABEL_15:
    MiReturnCrossPartitionCharges(a1, 6LL, 0LL, 1LL);
  }
}
