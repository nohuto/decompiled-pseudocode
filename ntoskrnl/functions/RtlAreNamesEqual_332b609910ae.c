BOOLEAN __stdcall RtlAreNamesEqual(
        PCUNICODE_STRING ConstantNameA,
        PCUNICODE_STRING ConstantNameB,
        BOOLEAN IgnoreCase,
        PCWCH UpcaseTable)
{
  unsigned int Length; // eax
  char v5; // di
  PCUNICODE_STRING v6; // rbx
  unsigned int v7; // r10d
  __int64 v8; // rax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  BOOLEAN v13; // bl
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING v15; // [rsp+30h] [rbp-18h] BYREF

  Length = ConstantNameA->Length;
  v5 = 0;
  v6 = ConstantNameB;
  UnicodeString = 0LL;
  v15 = 0LL;
  if ( (_WORD)Length != ConstantNameB->Length )
    return 0;
  v7 = Length >> 1;
  if ( IgnoreCase )
  {
    if ( UpcaseTable )
    {
      v8 = 0LL;
      if ( !v7 )
        return 1;
      while ( UpcaseTable[ConstantNameA->Buffer[v8]] == UpcaseTable[ConstantNameB->Buffer[v8]] )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          return 1;
      }
      return 0;
    }
    v10 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, ConstantNameA);
    if ( v10 < 0 )
      RtlRaiseStatus(v10);
    v11 = RtlpUpcaseUnicodeStringPrivate(&v15, v6);
    ConstantNameA = &UnicodeString;
    v12 = v11;
    if ( v11 < 0 )
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlRaiseStatus(v12);
    }
    LOWORD(Length) = UnicodeString.Length;
    v6 = &v15;
    v5 = 1;
  }
  v13 = memcmp(ConstantNameA->Buffer, v6->Buffer, (unsigned __int16)Length) == 0;
  if ( v5 )
  {
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v15);
  }
  return v13;
}
