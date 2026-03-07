__int64 __fastcall DxgkpCopyAttributes(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi
  const wchar_t *v6; // r9
  NTSTATUS v7; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _OWORD FileInformation[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v11; // [rsp+80h] [rbp-18h]

  memset(FileInformation, 0, sizeof(FileInformation));
  IoStatusBlock = 0LL;
  v11 = 0LL;
  v3 = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 392LL;
    WdLogSingleEntry2(2LL, v3, 392LL);
    v6 = L"Failed ZwQueryInformationFile for source in DxgkpCopyAttributes: 0x%I64x";
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v4, v5, 0LL, 0LL, 0LL);
    return (unsigned int)v4;
  }
  v7 = ZwSetInformationFile(a2, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = 405LL;
    WdLogSingleEntry2(2LL, v7, 405LL);
    v6 = L"Failed ZwQueryInformationFile for dest in DxgkpCopyAttributes: 0x%I64x";
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
