__int64 __fastcall ScAnsiToUnicodeString(char *SourceString, struct _UNICODE_STRING *a2)
{
  ULONG v4; // eax
  unsigned int v5; // edx
  unsigned __int8 v6; // r8
  NTSTATUS v7; // ebx
  wchar_t *v8; // rcx
  wchar_t *Buffer; // rcx
  UNICODE_STRING v11; // [rsp+20h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  ScTrimString(SourceString);
  RtlInitAnsiString(&DestinationString, SourceString);
  v4 = RtlxOemStringToUnicodeSize(&DestinationString);
  v11.MaximumLength = v4;
  v11.Buffer = (wchar_t *)SC_ENV::Allocate(v4, v5, v6);
  if ( v11.Buffer )
  {
    v7 = RtlAnsiStringToUnicodeString(&v11, &DestinationString, 0);
    if ( v7 < 0 )
    {
      Buffer = v11.Buffer;
    }
    else
    {
      v8 = a2->Buffer;
      if ( v8 )
        SC_ENV::Free(v8);
      Buffer = 0LL;
      *a2 = v11;
    }
    if ( Buffer )
      SC_ENV::Free(Buffer);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
