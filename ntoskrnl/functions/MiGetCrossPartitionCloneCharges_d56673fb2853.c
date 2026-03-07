__int64 __fastcall MiGetCrossPartitionCloneCharges(volatile signed __int64 *a1, char a2)
{
  unsigned __int64 v2; // rbx
  int v5; // esi
  __int64 v6; // r8
  __int64 v7; // r8
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v10; // zf
  signed __int32 v11; // eax

  v2 = 1LL;
  v5 = a2 & 1;
  if ( (a2 & 1) != 0 && !(unsigned int)MiChargeCommit((unsigned __int64)a1, 1uLL, 0LL) )
    return 0LL;
  if ( (a2 & 2) != 0 )
  {
    if ( !(unsigned int)MiChargeResident((void *)a1, 1uLL, 0LL) )
    {
      if ( v5 )
        MiReturnCommit((__int64)a1, 1LL, v6);
      return 0LL;
    }
    if ( (int)MiGetCrossPartitionCharges((__int64)a1, 6, 0, 1LL) < 0 )
    {
      if ( v5 )
        MiReturnCommit((__int64)a1, 1LL, v7);
      if ( a1 != (volatile signed __int64 *)MiSystemPartition )
        goto LABEL_18;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable == -1 )
        goto LABEL_18;
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v11 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v10 = (_DWORD)CachedResidentAvailable == v11;
          LODWORD(CachedResidentAvailable) = v11;
          if ( v10 )
            return 0LL;
        }
        while ( v11 != -1 && (unsigned __int64)(v11 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v2 = (int)CachedResidentAvailable - 192 + 1LL;
      }
      if ( v2 )
LABEL_18:
        _InterlockedExchangeAdd64(a1 + 2160, v2);
      return 0LL;
    }
  }
  return 1LL;
}
