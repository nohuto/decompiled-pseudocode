unsigned __int64 CmpUpdateGlobalQuotaAllowed()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rcx

  result = MmSizeOfPagedPoolInBytes;
  if ( !CmpQuotaExplicitlySet )
  {
    result = MmSizeOfPagedPoolInBytes;
    if ( MmSizeOfPagedPoolInBytes != CmpSizeOfPagedPoolInBytes )
    {
      v1 = 0xFFFFFFFFLL;
      if ( MmSizeOfPagedPoolInBytes / 3uLL <= 0xFFFFFFFF )
      {
        v1 = MmSizeOfPagedPoolInBytes / 3uLL;
        if ( MmSizeOfPagedPoolInBytes / 3uLL < 0x1000000 )
          v1 = 0x1000000LL;
      }
      CmpGlobalQuota = v1;
      CmpGlobalQuotaAllowed = v1;
      CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
      result = 95 * (v1 / 0x64);
      CmpGlobalQuotaWarning = result;
    }
  }
  return result;
}
