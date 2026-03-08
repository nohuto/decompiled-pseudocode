/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x14079F418
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x14079F36C (SdbFindFirstStringIndexedTag.c)
 *     SdbMergeIsEntryUpdated @ 0x140A50A7C (SdbMergeIsEntryUpdated.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x14079CA00 (AslLogCallPrintf.c)
 *     RtlUpcaseUnicodeString @ 0x1407A3D00 (RtlUpcaseUnicodeString.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(PCWSTR SourceString, char a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rdi
  __int64 v4; // rbx
  unsigned __int16 *v5; // r14
  int v6; // edx
  const WCHAR *v7; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rdx
  bool v11; // cc
  unsigned __int64 v12; // rax
  char v13; // cl
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int16 v16; // cx
  __int16 v17; // cx
  UNICODE_STRING SourceStringa; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING v20; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp+17h] BYREF
  char v22; // [rsp+78h] [rbp+27h] BYREF

  v2 = -1LL;
  v3 = (char *)&v20.MaximumLength + 5;
  v4 = 0LL;
  do
    ++v2;
  while ( SourceString[v2] );
  v5 = (unsigned __int16 *)v21;
  v6 = a2 & 2;
  DestinationString = 0LL;
  SourceStringa = 0LL;
  v20 = 0LL;
  if ( v2 > 8 && v6 )
    v7 = &SourceString[v2 - 8];
  else
    v7 = SourceString;
  RtlInitUnicodeString(&DestinationString, v7);
  SourceStringa.Buffer = (wchar_t *)&v22;
  SourceStringa.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceStringa, &DestinationString);
  v20.MaximumLength = 16;
  v20.Buffer = (wchar_t *)v21;
  if ( RtlUpcaseUnicodeString(&v20, &SourceStringa, 0) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v9 = 0LL;
  v10 = (unsigned __int64)v20.Length >> 1;
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = v10 <= 8;
      if ( v10 >= 8 )
        break;
      v12 = v9++;
      v13 = HIBYTE(v20.Buffer[v12]);
      v14 = v10 + 1;
      if ( !v13 )
        v14 = v10;
      v10 = v14;
      if ( v9 >= (unsigned __int64)v20.Length >> 1 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v11 = v10 <= 8;
  }
  if ( !v11 )
    return 0LL;
  *(_QWORD *)&v20.Length = 0LL;
  v15 = 0LL;
  if ( v10 )
  {
    do
    {
      v16 = *v5++;
      *v3-- = v16;
      v17 = HIBYTE(v16);
      if ( (_BYTE)v17 )
      {
        if ( v15 < 7 )
        {
          *v3-- = v17;
          ++v15;
        }
      }
      ++v15;
    }
    while ( v15 < v10 );
    return *(_QWORD *)&v20.Length;
  }
  return v4;
}
