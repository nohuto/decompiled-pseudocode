/*
 * XREFs of PfpFileCheckAttributesForPrefetch @ 0x1402DC2D0
 * Callers:
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 *     PfpFileBuildReadSupport @ 0x140767138 (PfpFileBuildReadSupport.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 */

NTSTATUS __fastcall PfpFileCheckAttributesForPrefetch(void *a1, int a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  result = NtQueryInformationFile(a1, &v4, &v5, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    if ( result == 259 )
      KeBugCheckEx(0x191u, 0x270EuLL, 0LL, 0LL, 0LL);
    return (a2 & (unsigned int)v5) != 0 ? 0xC00000A4 : 0;
  }
  return result;
}
