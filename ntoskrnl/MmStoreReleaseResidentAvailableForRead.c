unsigned __int64 __fastcall MmStoreReleaseResidentAvailableForRead(unsigned __int16 **a1, __int64 a2)
{
  unsigned __int16 *v2; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // r10
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf

  v2 = *a1;
  result = (unsigned __int64)MiSystemPartition;
  v4 = a2 + 48;
  if ( *a1 != MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_11:
    if ( v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)v2 + 2160, v4);
    return result;
  }
  result = v4 + CachedResidentAvailable;
  if ( v4 + CachedResidentAvailable > 0x100 || v4 >= 0x80000 )
  {
LABEL_8:
    if ( (int)CachedResidentAvailable > 192 )
    {
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                               192,
                               CachedResidentAvailable);
      if ( (_DWORD)CachedResidentAvailable == (_DWORD)result )
      {
        result = (unsigned int)(CachedResidentAvailable - 192);
        v4 += (int)result;
      }
    }
    goto LABEL_11;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + v4,
                             CachedResidentAvailable);
    v7 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v7 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = v4 + (int)result;
      if ( v4 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_8;
  }
}
