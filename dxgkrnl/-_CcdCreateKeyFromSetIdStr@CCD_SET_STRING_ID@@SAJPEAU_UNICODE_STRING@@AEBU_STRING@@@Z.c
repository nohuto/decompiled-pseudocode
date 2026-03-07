__int64 __fastcall CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(
        PUNICODE_STRING DestinationString,
        const struct _STRING *a2)
{
  USHORT Length; // si
  unsigned __int64 v5; // rax
  wchar_t *v6; // rax
  NTSTATUS v7; // eax
  unsigned int v8; // r14d
  wchar_t *Buffer; // rax
  int Md5Checksum; // eax
  unsigned int v11; // esi
  __int64 result; // rax
  struct _STRING SourceString; // [rsp+30h] [rbp-38h] BYREF

  Length = a2->Length;
  if ( a2->Length >= 0x80u )
    Length = 128;
  v5 = 2LL * (unsigned __int16)(Length + 34);
  if ( !is_mul_ok((unsigned __int16)(Length + 34), 2uLL) )
    v5 = -1LL;
  v6 = (wchar_t *)operator new[](v5, 0x63644356u, 256LL);
  DestinationString->Buffer = v6;
  if ( v6 )
  {
    DestinationString->Length = 0;
    SourceString.Length = Length;
    SourceString.MaximumLength = Length;
    DestinationString->MaximumLength = 2 * (Length + 1);
    *(_DWORD *)(&SourceString.MaximumLength + 1) = 0;
    SourceString.Buffer = a2->Buffer;
    v7 = RtlAnsiStringToUnicodeString(DestinationString, &SourceString, 0);
    v8 = v7;
    if ( v7 < 0 )
    {
      WdLogSingleEntry5(1LL, v7, a2, a2->Length, Length, DestinationString->MaximumLength);
      operator delete(DestinationString->Buffer);
      result = v8;
      *DestinationString = 0LL;
    }
    else
    {
      Buffer = DestinationString->Buffer;
      DestinationString->MaximumLength = 2 * (Length + 34);
      Buffer[Length] = 94;
      Md5Checksum = CcdCreateMd5Checksum(
                      (const unsigned __int8 *)a2->Buffer,
                      a2->Length,
                      &DestinationString->Buffer[Length + 1]);
      v11 = Md5Checksum;
      if ( Md5Checksum < 0 )
      {
        WdLogSingleEntry4(1LL, Md5Checksum, a2, a2->Buffer, a2->Length);
        operator delete(DestinationString->Buffer);
        result = v11;
        *DestinationString = 0LL;
      }
      else
      {
        DestinationString->Length = DestinationString->MaximumLength - 2;
        return 0LL;
      }
    }
  }
  else
  {
    WdLogSingleEntry3(6LL, a2, a2->Length, (unsigned __int16)(Length + 34));
    return 3221225495LL;
  }
  return result;
}
