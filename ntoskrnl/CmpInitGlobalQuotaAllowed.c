/*
 * XREFs of CmpInitGlobalQuotaAllowed @ 0x140B50998
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140768AB0 (MmGetNumberOfPhysicalPages.c)
 */

__int64 CmpInitGlobalQuotaAllowed()
{
  unsigned __int64 v0; // rdx
  char v1; // al
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 result; // rax

  CmpSizeOfPagedPoolInBytes = MmSizeOfPagedPoolInBytes;
  v0 = (((unsigned __int64)MmSizeOfPagedPoolInBytes * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( CmRegistrySizeLimitLength == 4 && CmRegistrySizeLimitType == 4 && CmRegistrySizeLimit )
  {
    v1 = 1;
  }
  else
  {
    v1 = 0;
    if ( CmRegistrySizeLimitLength == 8 && CmRegistrySizeLimitType == 11 && CmRegistrySizeLimit )
      goto LABEL_21;
  }
  if ( !v1 )
  {
    v0 = MmSizeOfPagedPoolInBytes / 3uLL;
LABEL_5:
    CmpGlobalQuota = v0;
    goto LABEL_6;
  }
LABEL_21:
  CmpQuotaExplicitlySet = 1;
  if ( CmRegistrySizeLimit >= v0 )
    goto LABEL_5;
  CmpGlobalQuota = CmRegistrySizeLimit;
  v0 = CmRegistrySizeLimit;
LABEL_6:
  v2 = 0xFFFFFFFFLL;
  if ( v0 <= 0xFFFFFFFF )
  {
    v2 = v0;
    if ( v0 < 0x1000000 )
    {
      CmpGlobalQuota = 0x1000000LL;
      v2 = 0x1000000LL;
    }
  }
  else
  {
    CmpGlobalQuota = 0xFFFFFFFFLL;
  }
  CmpGlobalQuotaWarning = 95 * (v2 / 0x64);
  if ( CmSystemHiveLimitSize )
  {
    result = (unsigned int)(CmSystemHiveLimitSize << 20);
  }
  else
  {
    if ( (MmGetNumberOfPhysicalPages(0) & 0xFFFFFFFFFFFFFFFEuLL) < 0xC0000 )
      v3 = (unsigned __int64)MmGetNumberOfPhysicalPages(0) >> 1;
    else
      LODWORD(v3) = 393216;
    result = (unsigned int)((_DWORD)v3 << 12);
  }
  CmSystemHiveLimitSize = result;
  return result;
}
