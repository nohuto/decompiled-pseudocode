unsigned __int64 __fastcall MiReleaseNonPagedResources(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  bool v8; // zf

  v3 = a2;
  MiReturnCommit(a1, a2, a3);
  result = (unsigned __int64)MiSystemPartition;
  if ( (unsigned __int16 *)a1 != MiSystemPartition
    || (CurrentPrcb = KeGetCurrentPrcb(),
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable,
        (_DWORD)CachedResidentAvailable == -1) )
  {
LABEL_11:
    if ( v3 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v3);
    return result;
  }
  result = v3 + CachedResidentAvailable;
  if ( v3 + CachedResidentAvailable > 0x100 || v3 >= 0x80000 )
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
        v3 += (int)result;
      }
    }
    goto LABEL_11;
  }
  while ( 1 )
  {
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                             CachedResidentAvailable + v3,
                             CachedResidentAvailable);
    v8 = (_DWORD)CachedResidentAvailable == (_DWORD)result;
    CachedResidentAvailable = (int)result;
    if ( v8 )
      return result;
    if ( (_DWORD)result != -1 )
    {
      result = v3 + (int)result;
      if ( v3 + CachedResidentAvailable <= 0x100 )
        continue;
    }
    goto LABEL_8;
  }
}
