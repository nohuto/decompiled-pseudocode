bool __fastcall ExpCovIsModulePresent(__int64 a1, __int64 a2, int a3, const UNICODE_STRING *a4, void *Source1)
{
  char v6; // bl
  int v7; // r8d
  UNICODE_STRING String2; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&String2.Length = 0LL;
  String2.Buffer = 0LL;
  v6 = 0;
  if ( !a3 )
    goto LABEL_6;
  v7 = a3 - 1;
  if ( !v7 )
    return RtlCompareMemory(Source1, (const void *)(a2 + 8), 0x10uLL) == 16;
  if ( v7 == 1 )
  {
    if ( (int)ExpCovReadFriendlyName(a2, a1, &String2) < 0 || RtlCompareUnicodeString(a4, &String2, 1u) )
    {
LABEL_7:
      if ( String2.Buffer )
        RtlFreeUnicodeString(&String2);
      return v6;
    }
LABEL_6:
    v6 = 1;
    goto LABEL_7;
  }
  return v6;
}
