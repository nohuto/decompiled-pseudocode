void __fastcall CmpLogTransactionAbortedWithChildName(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5)
{
  wchar_t *Buffer; // rbx
  int v9; // eax
  __int64 v10; // r8
  UNICODE_STRING *v11; // rdi
  unsigned __int64 v12; // rdx
  const wchar_t *v13; // r8
  __int16 v14; // r11
  __int64 v15; // r9
  __int16 v16; // dx
  char *v17; // r10
  char *v18; // rcx
  PCUNICODE_STRING p_DestinationString; // rcx
  size_t v20; // [rsp+20h] [rbp-30h]
  ULONG v21; // [rsp+28h] [rbp-28h]
  size_t pcchDestLength; // [rsp+30h] [rbp-20h] BYREF
  wchar_t *ppszDest; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  PCUNICODE_STRING SourceString; // [rsp+88h] [rbp+38h] BYREF

  DestinationString = 0LL;
  SourceString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !a5 || (unsigned int)dword_140C04328 <= 4 || !tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
  {
    Buffer = DestinationString.Buffer;
    goto LABEL_3;
  }
  v9 = CmpConstructNameFromKcbNameBlocks(a1, &SourceString);
  v11 = (UNICODE_STRING *)SourceString;
  if ( v9 < 0 )
    goto LABEL_21;
  if ( !a2 )
  {
    p_DestinationString = SourceString;
LABEL_20:
    CmpLogTransactionAbortedByName(p_DestinationString, a3, v10, a5);
    goto LABEL_21;
  }
  v12 = SourceString->Length + 2LL + a2->Length;
  if ( v12 <= 0xFFFF )
  {
    DestinationString.MaximumLength = SourceString->Length + 2 + a2->Length;
    DestinationString.Buffer = (wchar_t *)CmpAllocatePool(256LL, (unsigned __int16)v12, 1649298755LL);
    Buffer = DestinationString.Buffer;
    if ( !DestinationString.Buffer )
      goto LABEL_22;
    RtlUnicodeStringCopy(&DestinationString, v11);
    ppszDest = 0LL;
    SourceString = 0LL;
    pcchDestLength = 0LL;
    if ( RtlUnicodeStringValidateDestWorker(
           &DestinationString,
           &ppszDest,
           (size_t *)&SourceString,
           &pcchDestLength,
           v20,
           v21) >= 0 )
    {
      v13 = L"\\";
      v14 = pcchDestLength;
      v15 = 0x7FFFLL;
      v16 = 0;
      v17 = (char *)SourceString - pcchDestLength;
      if ( SourceString != (PCUNICODE_STRING)pcchDestLength )
      {
        v18 = (char *)ppszDest + 2 * pcchDestLength - (_QWORD)L"\\";
        do
        {
          if ( !v15 )
            break;
          if ( !*v13 )
            break;
          *(const wchar_t *)((char *)v13 + (_QWORD)v18) = *v13;
          --v15;
          ++v13;
          ++v16;
        }
        while ( &v17[v15 - 0x7FFF] );
      }
      DestinationString.Length = 2 * (v14 + v16);
    }
    RtlUnicodeStringCat(&DestinationString, a2);
    p_DestinationString = &DestinationString;
    goto LABEL_20;
  }
LABEL_21:
  Buffer = DestinationString.Buffer;
LABEL_22:
  if ( v11 )
    CmpFreeTransientPoolWithTag(v11, 0x624E4D43u);
LABEL_3:
  if ( Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)Buffer);
}
