void __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3, a3);
  v6 = a3;
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    goto LABEL_13;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_13;
  if ( a3 + CachedResidentAvailable > 0x100 || a3 >= 0x80000 )
  {
LABEL_10:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v6 = a3 + (int)CachedResidentAvailable - 192;
    }
LABEL_13:
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v6);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v10 = _InterlockedCompareExchange(
            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
            CachedResidentAvailable + a3,
            CachedResidentAvailable);
    v9 = (_DWORD)CachedResidentAvailable == v10;
    LODWORD(CachedResidentAvailable) = v10;
    if ( v9 )
      break;
    if ( v10 == -1 || a3 + v10 > 0x100 )
      goto LABEL_10;
  }
LABEL_15:
  MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
