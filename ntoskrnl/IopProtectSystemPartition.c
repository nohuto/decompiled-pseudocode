/*
 * XREFs of IopProtectSystemPartition @ 0x140B70DDC
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1406E6C50 (NtQueryValueKey.c)
 *     NtOpenKey @ 0x140758B00 (NtOpenKey.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     IopApplySystemPartitionProt @ 0x140B90CC0 (IopApplySystemPartitionProt.c)
 */

char __fastcall IopProtectSystemPartition(__int64 a1)
{
  size_t Size; // [rsp+20h] [rbp-79h]
  __int64 v4; // [rsp+30h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-61h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-59h] BYREF
  UNICODE_STRING v7; // [rsp+50h] [rbp-49h] BYREF
  __int64 v8; // [rsp+60h] [rbp-39h]
  __int64 v9; // [rsp+68h] [rbp-31h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-29h]
  int v11; // [rsp+78h] [rbp-21h]
  int v12; // [rsp+7Ch] [rbp-1Dh]
  __int128 v13; // [rsp+80h] [rbp-19h]
  _BYTE v14[80]; // [rsp+90h] [rbp-9h] BYREF

  Handle = 0LL;
  v12 = 0;
  LODWORD(v4) = 0;
  v8 = 48LL;
  DestinationString = 0LL;
  v7 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa");
  v9 = 0LL;
  p_DestinationString = &DestinationString;
  v11 = 64;
  v13 = 0LL;
  if ( (int)NtOpenKey() >= 0 )
  {
    RtlInitUnicodeString(&v7, L"Protect System Partition");
    LODWORD(Size) = 20;
    if ( (int)NtQueryValueKey(Handle, &v7, 2u, (unsigned __int64)v14, Size, (unsigned int *)&v4) >= 0 && v14[12] )
      IopApplySystemPartitionProt(a1);
    NtClose(Handle);
  }
  return 1;
}
