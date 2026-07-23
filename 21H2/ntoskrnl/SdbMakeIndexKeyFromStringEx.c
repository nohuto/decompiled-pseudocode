/*
 * XREFs of SdbMakeIndexKeyFromStringEx @ 0x14075A690
 * Callers:
 *     SdbFindFirstStringIndexedTag @ 0x140759DC0 (SdbFindFirstStringIndexedTag.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     Feature_CompatBuildInVb__private_IsEnabledDeviceUsage @ 0x1403F989C (Feature_CompatBuildInVb__private_IsEnabledDeviceUsage.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbMakeIndexKeyFromStringEx(PCWSTR SourceString, char a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rsi
  __int64 v4; // rbx
  unsigned __int16 *v5; // r14
  int v6; // edx
  const WCHAR *v7; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  bool v12; // cc
  unsigned __int64 v13; // rax
  char v14; // cl
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int16 v17; // cx
  __int16 v18; // cx
  UNICODE_STRING SourceStringa; // [rsp+38h] [rbp-19h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  UNICODE_STRING v21; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp+17h] BYREF
  char v23; // [rsp+78h] [rbp+27h] BYREF

  v2 = -1LL;
  v3 = (char *)&v21.MaximumLength + 5;
  v4 = 0LL;
  do
    ++v2;
  while ( SourceString[v2] );
  v5 = (unsigned __int16 *)v22;
  v6 = a2 & 2;
  DestinationString = 0LL;
  SourceStringa = 0LL;
  v21 = 0LL;
  if ( v2 > 8 && v6 )
    v7 = &SourceString[v2 - 8];
  else
    v7 = SourceString;
  RtlInitUnicodeString(&DestinationString, v7);
  SourceStringa.Buffer = (wchar_t *)&v23;
  SourceStringa.MaximumLength = 16;
  RtlCopyUnicodeString(&SourceStringa, &DestinationString);
  v21.MaximumLength = 16;
  v21.Buffer = (wchar_t *)v22;
  if ( RtlUpcaseUnicodeString(&v21, &SourceStringa, 0) < 0 )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v9 = (unsigned __int64)v21.Length >> 1;
  if ( (unsigned int)Feature_CompatBuildInVb__private_IsEnabledDeviceUsage() && (v10 = 0LL, (v11 = v9) != 0) )
  {
    while ( 1 )
    {
      v12 = v9 <= 8;
      if ( v9 >= 8 )
        break;
      v13 = v10++;
      v14 = HIBYTE(v21.Buffer[v13]);
      v15 = v9 + 1;
      if ( !v14 )
        v15 = v9;
      v9 = v15;
      if ( v10 >= v11 )
        goto LABEL_16;
    }
  }
  else
  {
LABEL_16:
    v12 = v9 <= 8;
  }
  if ( !v12 )
    return 0LL;
  *(_QWORD *)&v21.Length = 0LL;
  v16 = 0LL;
  if ( v9 )
  {
    do
    {
      v17 = *v5++;
      *v3-- = v17;
      v18 = HIBYTE(v17);
      if ( (_BYTE)v18 )
      {
        if ( v16 < 7 )
        {
          *v3-- = v18;
          ++v16;
        }
      }
      ++v16;
    }
    while ( v16 < v9 );
    return *(_QWORD *)&v21.Length;
  }
  return v4;
}
