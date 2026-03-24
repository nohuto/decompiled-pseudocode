/*
 * XREFs of RtlpGetWindowsPolicy @ 0x14078ECE0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1403A76C0 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1403FC4A0 (ZwQueryLicenseValue.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  void *v4; // rbx
  int LicenseValue; // eax
  unsigned int v9; // edi
  unsigned int v10; // eax
  unsigned int v11; // edi
  PVOID PoolWithTag; // rax
  UNICODE_STRING v14; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v14 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
  {
    v9 = -1073741811;
    goto LABEL_14;
  }
  RtlInitUnicodeString(&v14, SourceString);
  LicenseValue = ZwQueryLicenseValue((__int64)&v14, a2);
  v9 = LicenseValue;
  if ( LicenseValue >= 0 )
  {
    v10 = *a3;
    if ( !*a3 )
    {
      *a4 = 0LL;
      return v9;
    }
LABEL_8:
    v11 = v10;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x72746C6Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v11);
    goto LABEL_10;
  }
  if ( LicenseValue != -1073741789 )
    goto LABEL_11;
  v10 = *a3;
  if ( *a3 )
    goto LABEL_8;
LABEL_10:
  if ( !v4 )
    return (unsigned int)-1073741801;
LABEL_11:
  v9 = ZwQueryLicenseValue((__int64)&v14, a2);
  if ( (v9 & 0x80000000) == 0 )
  {
    *a4 = v4;
    return v9;
  }
LABEL_14:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v9;
}
