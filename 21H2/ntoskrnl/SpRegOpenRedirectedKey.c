/*
 * XREFs of SpRegOpenRedirectedKey @ 0x14085E1D0
 * Callers:
 *     ExpOsProductCacheProviderHelper @ 0x14085E124 (ExpOsProductCacheProviderHelper.c)
 *     sub_1409FA10C @ 0x1409FA10C (sub_1409FA10C.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     SpRegOpenKey @ 0x14085E294 (SpRegOpenKey.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SpRegOpenRedirectedKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  PVOID PoolWithTag; // rdi
  int PersistedStateLocation; // eax
  int v6; // ebx
  UNICODE_STRING *p_DestinationString; // rcx
  void *v8; // rcx
  unsigned int v10; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  void *v12; // [rsp+70h] [rbp+20h] BYREF
  unsigned int NumberOfBytes; // [rsp+78h] [rbp+28h] BYREF
  int NumberOfBytes_4; // [rsp+7Ch] [rbp+2Ch]

  NumberOfBytes_4 = HIDWORD(a2);
  v12 = 0LL;
  PoolWithTag = 0LL;
  NumberOfBytes = 0;
  DestinationString = 0LL;
  PersistedStateLocation = RtlGetPersistedStateLocation(off_140D3B610, L"TargetNtPath", 0LL, 0, 0LL, 0, &NumberOfBytes);
  v6 = PersistedStateLocation;
  if ( PersistedStateLocation == -2147483643 )
  {
    v10 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x20534C53u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    v6 = RtlGetPersistedStateLocation(off_140D3B610, L"TargetNtPath", 0LL, 0, PoolWithTag, v10, &NumberOfBytes);
    if ( v6 < 0 )
    {
LABEL_17:
      ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
      return (unsigned int)v6;
    }
    RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
    p_DestinationString = &DestinationString;
  }
  else
  {
    if ( PersistedStateLocation != -1073741772 )
    {
      if ( PersistedStateLocation < 0 )
        return (unsigned int)v6;
      goto LABEL_5;
    }
    p_DestinationString = (UNICODE_STRING *)&unk_140D3B618;
  }
  v6 = SpRegOpenKey(p_DestinationString, &v12);
  if ( v6 >= 0 )
  {
LABEL_5:
    v8 = 0LL;
    *a3 = v12;
    goto LABEL_6;
  }
  v8 = v12;
LABEL_6:
  if ( v8 )
    ZwClose(v8);
  if ( PoolWithTag )
    goto LABEL_17;
  return (unsigned int)v6;
}
