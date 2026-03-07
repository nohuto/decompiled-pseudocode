__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 Md5Checksum; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  DestinationString = 0LL;
  v4 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 1u);
  Md5Checksum = v4;
  if ( v4 < 0
    || (Md5Checksum = (int)CcdCreateMd5Checksum(
                             (const unsigned __int8 *)DestinationString.Buffer,
                             DestinationString.Length,
                             (unsigned __int8 *)a2 + 4),
        RtlFreeUnicodeString(&DestinationString),
        (int)Md5Checksum < 0) )
  {
    WdLogSingleEntry2(2LL, Md5Checksum, SourceString);
  }
  else
  {
    *(_DWORD *)a2 = 1;
  }
  return (unsigned int)Md5Checksum;
}
