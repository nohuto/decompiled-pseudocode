void __fastcall MiReturnFaultCharges(__int64 a1, __int64 a2, struct _KPRCB *CurrentPrcb)
{
  char v3; // bl
  unsigned __int64 v5; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf
  signed __int32 v8; // eax

  v3 = (char)CurrentPrcb;
  v5 = a2;
  if ( (_UNKNOWN *)a1 != &MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_10:
    if ( v5 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v5);
    goto LABEL_6;
  }
  if ( v5 + CachedResidentAvailable > 0x100 || v5 >= 0x80000 )
  {
LABEL_9:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v5 = a2 + (int)CachedResidentAvailable - 192;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v8 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
           CachedResidentAvailable + a2,
           CachedResidentAvailable);
    v7 = (_DWORD)CachedResidentAvailable == v8;
    LODWORD(CachedResidentAvailable) = v8;
    if ( v7 )
      break;
    if ( v8 == -1 || (unsigned __int64)(a2 + v8) > 0x100 )
      goto LABEL_9;
  }
LABEL_6:
  if ( (v3 & 1) != 0 )
    MiReturnCommit(a1, a2, (__int64)CurrentPrcb);
}
