NTSTATUS __fastcall RtlIsPartialPlaceholderFileHandle(void *a1, bool *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  result = NtQueryInformationFile(a1, &v4, &v5, 8u, FileAttributeTagInformation);
  if ( result >= 0 )
  {
    *a2 = (v5 & 0x440000) != 0;
  }
  else
  {
    if ( result != -1073741811 )
      return result;
    *a2 = 0;
  }
  return 0;
}
