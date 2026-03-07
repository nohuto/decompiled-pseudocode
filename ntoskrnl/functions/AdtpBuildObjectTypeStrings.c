__int64 __fastcall AdtpBuildObjectTypeStrings(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        char *a3,
        unsigned int a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6)
{
  const UNICODE_STRING *v6; // rbx
  size_t v7; // r15
  _BYTE *v9; // rdi
  __int64 v11; // r14
  int v12; // r12d
  char *v13; // rsi
  int v14; // r8d
  char v15; // di
  int appended; // ebx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-50h]
  char v21[4]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  UNICODE_STRING v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a2;
  v22 = 0;
  v7 = a4;
  v23 = 0LL;
  LOBYTE(v26) = 0;
  RtlInitUnicodeString(DestinationString, &word_14001ECF4);
  v9 = a6;
  *a6 = 0;
  if ( !(_DWORD)v7 )
    return 0LL;
  qsort(a3, v7, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareObjectTypes);
  v11 = 0LL;
  v12 = *((_DWORD *)a3 + 5) - 1;
  v13 = a3 + 18;
  do
  {
    v14 = *(_DWORD *)(v13 + 2);
    if ( v14 != v12 )
    {
      v15 = 0;
      v12 = *(_DWORD *)(v13 + 2);
      if ( v14 )
      {
        appended = AdtpBuildAccessesString(a1, v6, v14, 1, &v23, 0LL, 0LL, 0LL, &v26);
        if ( appended < 0 )
          return (unsigned int)appended;
        v15 = v26;
      }
      else
      {
        RtlInitUnicodeString(&v23, L"---\r\n");
        LOBYTE(v26) = 0;
      }
      appended = AdtpAppendString((__int64)DestinationString, (__int64)a6, &v23, &v22);
      if ( v15 )
        ExFreePoolWithTag(v23.Buffer, 0);
      if ( appended < 0 )
        return (unsigned int)appended;
      v9 = a6;
    }
    v17 = *(_WORD *)v13;
    if ( *(_WORD *)v13 >= 4u )
      v17 = 3;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)v9, off_14000B0C8[v17], &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v21[0] = 0;
    appended = AdtpBuildGuidString((unsigned int *)&a3[24 * v11], (__int64)&v23, v18, v19, v20, v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendString((__int64)DestinationString, (__int64)v9, &v23, &v22);
    ExFreePoolWithTag(v23.Buffer, 0);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)v9, L"\r\n", &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v6 = a2;
    v11 = (unsigned int)(v11 + 1);
    v13 += 24;
  }
  while ( (unsigned int)v11 < (unsigned int)v7 );
  return 0;
}
