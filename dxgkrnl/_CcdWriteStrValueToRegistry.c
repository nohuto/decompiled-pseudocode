__int64 __fastcall CcdWriteStrValueToRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, PCANSI_STRING SourceString)
{
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // si
  wchar_t *v8; // rdi
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF

  v6 = RtlxAnsiStringToUnicodeSize(SourceString);
  v7 = v6;
  if ( v6 )
  {
    v8 = (wchar_t *)operator new[](v6 + 2LL, 0x63644356u, 256LL);
    if ( v8 )
    {
      DestinationString.Length = 0;
      *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
      DestinationString.MaximumLength = v7;
      DestinationString.Buffer = v8;
      v9 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 0);
      if ( v9 >= 0 )
      {
        v10 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, DestinationString.Buffer, v7 + 2);
        v9 = v10;
        if ( v10 < 0 )
          WdLogSingleEntry1(2LL, v10);
      }
      operator delete(v8);
      return (unsigned int)v9;
    }
    else
    {
      WdLogSingleEntry1(6LL, v7);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    return 3221225485LL;
  }
}
