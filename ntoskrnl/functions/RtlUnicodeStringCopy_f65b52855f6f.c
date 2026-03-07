NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  NTSTATUS v5; // eax
  size_t v6; // rdx
  __int64 v7; // rcx
  ULONG v8; // r8d
  NTSTATUS v9; // r11d
  __int64 v10; // r14
  unsigned __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned __int64 v13; // r10
  wchar_t *Buffer; // r8
  unsigned __int64 v15; // rcx
  __int16 v16; // dx
  __int64 v17; // r14

  v5 = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  v9 = v5;
  if ( v5 >= 0 && v7 )
  {
    v10 = *(_QWORD *)(v7 + 8);
    v11 = (unsigned __int64)*(unsigned __int16 *)(v7 + 2) >> 1;
  }
  else
  {
    v10 = 0LL;
    v11 = 0LL;
    if ( v5 < 0 )
      return v9;
  }
  v12 = RtlUnicodeStringValidateWorker(SourceString, v6, v8);
  v9 = v12;
  if ( v12 >= 0 && SourceString )
  {
    Buffer = SourceString->Buffer;
    v15 = (unsigned __int64)SourceString->Length >> 1;
LABEL_7:
    v9 = v13;
    v16 = v13;
    if ( v11 )
    {
      v17 = v10 - (_QWORD)Buffer;
      while ( v15 )
      {
        --v15;
        *(wchar_t *)((char *)Buffer + v17) = *Buffer;
        ++v16;
        ++Buffer;
        if ( !--v11 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( v15 )
        v9 = -2147483643;
    }
    LOWORD(v13) = v16;
    goto LABEL_14;
  }
  Buffer = (wchar_t *)v13;
  v15 = v13;
  if ( v12 >= 0 )
    goto LABEL_7;
LABEL_14:
  DestinationString->Length = 2 * v13;
  return v9;
}
