NTSTATUS __fastcall WmipGetSMBiosString(__int64 a1, unsigned int a2, const char *a3, UNICODE_STRING *a4)
{
  const char *v5; // r10
  int v6; // ecx
  char v7; // al
  const char *v8; // rdx
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v5 = (const char *)(a1 + *(unsigned __int8 *)(a1 + 1));
  v6 = 1;
  DestinationString = 0LL;
  if ( a2 <= 1 )
  {
LABEL_8:
    v8 = v5;
    while ( *v5 )
    {
      if ( ++v5 == a3 )
        return -1073741275;
    }
    RtlInitAnsiString(&DestinationString, v8);
    return RtlAnsiStringToUnicodeString(a4, &DestinationString, 1u);
  }
  else
  {
    v7 = *v5;
    while ( !v7 )
    {
LABEL_6:
      v7 = *++v5;
      if ( !*v5 )
        return -1073741275;
      if ( ++v6 >= a2 )
        goto LABEL_8;
    }
    while ( ++v5 != a3 )
    {
      if ( !*v5 )
        goto LABEL_6;
    }
    return -1073741275;
  }
}
