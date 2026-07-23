/*
 * XREFs of RtlSuffixUnicodeString @ 0x14090FDA0
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1408B7FC4 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  unsigned __int64 Length; // rax
  wchar_t *Buffer; // r10
  wchar_t *v5; // r11
  wchar_t *v6; // rax
  unsigned __int64 v7; // rcx
  signed __int64 v8; // rbx
  unsigned __int16 *v9; // r10
  unsigned __int16 v10; // ax
  __int64 v11; // r10
  unsigned __int64 v12; // r11
  __int16 v13; // r9
  signed __int64 v14; // rdx

  Length = String1->Length;
  if ( String2->Length >= (unsigned __int16)Length )
  {
    Buffer = String1->Buffer;
    v5 = &Buffer[Length >> 1];
    if ( Buffer >= v5 )
      return 1;
    v6 = String2->Buffer;
    v7 = (String2->Length - (unsigned __int64)String1->Length) >> 1;
    if ( CaseInSensitive )
    {
      v8 = (char *)&v6[v7] - (char *)Buffer;
      while ( 1 )
      {
        NLS_UPCASE(*(wchar_t *)((char *)Buffer + v8));
        v10 = NLS_UPCASE(*v9);
        if ( v10 != v13 )
          break;
        Buffer = (wchar_t *)(v11 + 2);
        if ( (unsigned __int64)Buffer >= v12 )
          return 1;
      }
    }
    else
    {
      v14 = (char *)&v6[v7] - (char *)Buffer;
      while ( *Buffer == *(wchar_t *)((char *)Buffer + v14) )
      {
        if ( ++Buffer >= v5 )
          return 1;
      }
    }
  }
  return 0;
}
