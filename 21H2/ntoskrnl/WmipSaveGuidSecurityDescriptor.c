/*
 * XREFs of WmipSaveGuidSecurityDescriptor @ 0x1407D3054
 * Callers:
 *     WmipSecurityMethod @ 0x14069D030 (WmipSecurityMethod.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x14063F9C0 (RtlGetPersistedStateLocation.c)
 *     RtlLengthSecurityDescriptor @ 0x1406600D0 (RtlLengthSecurityDescriptor.c)
 *     RtlWriteRegistryValue @ 0x1406B4930 (RtlWriteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipSaveGuidSecurityDescriptor(__int64 a1, void *a2)
{
  PVOID PoolWithTag; // rbx
  ULONG ValueLength; // r14d
  unsigned int v6; // edi
  unsigned int PersistedStateLocation; // eax
  unsigned int v8; // edi
  __int64 v10; // [rsp+70h] [rbp+18h] BYREF

  PoolWithTag = 0LL;
  ValueLength = RtlLengthSecurityDescriptor(a2);
  v6 = 0;
  LODWORD(v10) = 0;
  while ( 1 )
  {
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x70696D57u);
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"ETWSecurityPath",
                               0LL,
                               0LL,
                               0,
                               PoolWithTag,
                               v6,
                               (unsigned int *)&v10);
    v8 = PersistedStateLocation;
    if ( PersistedStateLocation != -2147483643 )
      break;
    if ( PoolWithTag )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    v6 = v10;
  }
  if ( !PersistedStateLocation )
    v8 = RtlWriteRegistryValue(0, (PCWSTR)PoolWithTag, *(PCWSTR *)(a1 + 8), 3u, a2, ValueLength);
  if ( v8 == -1073741772 )
    v8 = RtlWriteRegistryValue(2u, L"WMI\\Security", *(PCWSTR *)(a1 + 8), 3u, a2, ValueLength);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v8;
}
