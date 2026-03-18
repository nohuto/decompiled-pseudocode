/*
 * XREFs of RtlpGetWindowsPolicy @ 0x140830FE0
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1403C64C0 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14041E2C0 (ZwQueryLicenseValue.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, unsigned int *a3, _QWORD *a4)
{
  void *v4; // rbx
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  PVOID PoolWithTag; // rax
  unsigned int v12; // edi
  UNICODE_STRING v13; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v13, SourceString);
  result = ZwQueryLicenseValue((__int64)&v13, a2);
  if ( (int)result >= 0 )
  {
    v9 = *a3;
    if ( !*a3 )
    {
      *a4 = 0LL;
      return result;
    }
LABEL_8:
    v10 = v9;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x72746C6Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, v10);
    if ( v4 )
      goto LABEL_11;
    return 3221225495LL;
  }
  if ( (_DWORD)result == -1073741789 )
  {
    v9 = *a3;
    if ( !*a3 )
      return 3221225495LL;
    goto LABEL_8;
  }
LABEL_11:
  result = ZwQueryLicenseValue((__int64)&v13, a2);
  v12 = result;
  if ( (int)result < 0 )
  {
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      return v12;
    }
  }
  else
  {
    *a4 = v4;
  }
  return result;
}
