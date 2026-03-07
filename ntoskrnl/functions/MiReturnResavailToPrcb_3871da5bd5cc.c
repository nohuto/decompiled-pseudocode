unsigned __int64 __fastcall MiReturnResavailToPrcb(void *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rcx
  bool v5; // zf
  signed __int32 v6; // eax

  v2 = a2;
  if ( a1 != &MiSystemPartition )
    return v2;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    return v2;
  if ( a2 + CachedResidentAvailable > 0x100 || a2 >= 0x80000 )
  {
LABEL_7:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      return (int)CachedResidentAvailable - 192 + a2;
    }
    return v2;
  }
  while ( 1 )
  {
    v6 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
           a2 + CachedResidentAvailable,
           CachedResidentAvailable);
    v5 = (_DWORD)CachedResidentAvailable == v6;
    LODWORD(CachedResidentAvailable) = v6;
    if ( v5 )
      return 0LL;
    if ( v6 == -1 || a2 + v6 > 0x100 )
      goto LABEL_7;
  }
}
