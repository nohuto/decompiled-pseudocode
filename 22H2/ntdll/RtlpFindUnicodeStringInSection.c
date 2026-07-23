/*
 * XREFs of RtlpFindUnicodeStringInSection @ 0x18001CA18
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007ADD0 (RtlQueryActivationContextApplicationSettings.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlHashUnicodeString @ 0x18001CCB0 (RtlHashUnicodeString.c)
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     bsearch @ 0x18008F390 (bsearch.c)
 */

NTSTATUS __fastcall RtlpFindUnicodeStringInSection(
        __int64 a1,
        unsigned __int64 a2,
        _UNICODE_STRING *a3,
        unsigned int *a4,
        _DWORD *a5,
        ULONG *HashValue)
{
  char v6; // r15
  BOOLEAN v7; // r13
  bool v8; // zf
  _UNICODE_STRING *v10; // r11
  ULONG v12; // r8d
  NTSTATUS result; // eax
  char v14; // dl
  ULONG v15; // r10d
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  int *v22; // r12
  unsigned __int64 v23; // rdx
  int *i; // r13
  unsigned __int64 v25; // rcx
  char *v26; // rbx
  size_t v27; // r8
  char *v28; // rbx
  char *v29; // r15
  char *v30; // rax
  ULONG v31; // r14d
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // r14d
  BOOLEAN CaseInSensitive; // [rsp+50h] [rbp-59h]
  ULONG v37; // [rsp+60h] [rbp-49h] BYREF
  _UNICODE_STRING String2; // [rsp+68h] [rbp-41h] BYREF
  ULONG v39; // [rsp+78h] [rbp-31h]
  unsigned int v40; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int64 v41; // [rsp+80h] [rbp-29h]
  unsigned int *v42; // [rsp+88h] [rbp-21h]
  ULONG Key[6]; // [rsp+90h] [rbp-19h] BYREF

  v6 = 1;
  v7 = *(_BYTE *)(a1 + 16) & 1;
  v8 = *(_DWORD *)a1 == 1682469715;
  v10 = a3;
  v41 = a2;
  CaseInSensitive = v7;
  if ( !v8 )
    return -1072365565;
  if ( !*(_DWORD *)(a1 + 20) )
    return -1072365560;
  v12 = *(_DWORD *)(a1 + 28);
  if ( v12 == -1 )
  {
    v6 = 0;
  }
  else if ( *a5 != v12 )
  {
    result = RtlHashUnicodeString(v10, v7, v12, HashValue);
    if ( result < 0 )
    {
      if ( result != -1073741811 )
        return result;
      result = RtlHashUnicodeString(a3, v7, 0, &v37);
      if ( result < 0 )
        return result;
      DbgPrintEx(
        0x33u,
        0,
        "RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
        *(_DWORD *)(a1 + 28));
      v6 = 0;
    }
    else
    {
      *a5 = *(_DWORD *)(a1 + 28);
    }
    v10 = a3;
  }
  v14 = 0;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    v14 = v6;
  if ( ((unsigned __int8)-(*(_DWORD *)(a1 + 32) != 0) & (unsigned __int8)v14) != 0 )
  {
    v16 = *(unsigned int *)(a1 + 32);
    v17 = 0LL;
    v39 = *HashValue;
    v15 = v39;
    v18 = v39 % *(_DWORD *)(v16 + a1);
    v19 = a1 + *(unsigned int *)(v16 + a1 + 4);
    v37 = v18;
    v20 = (unsigned int *)(v19 + 8 * v18);
    v21 = *v20;
    v22 = (int *)(a1 + v20[1]);
    v42 = v20;
    v40 = v21;
    if ( v21 )
    {
      v23 = v41;
      for ( i = v22; ; ++i )
      {
        v25 = *i;
        if ( v25 > v23 )
          break;
        v26 = (char *)(v25 + a1);
        if ( !v6 || *(_DWORD *)v26 == v15 )
        {
          v32 = *((unsigned int *)v26 + 1);
          if ( v32 > v23 )
          {
            DbgPrintEx(
              0x33u,
              0,
              "SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
              "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v26,
              v32,
              (const void *)a1,
              v37,
              v42,
              v22);
            return -1072365565;
          }
          String2.Length = *((_WORD *)v26 + 4);
          String2.MaximumLength = String2.Length;
          String2.Buffer = (wchar_t *)(v32 + a1);
          if ( !RtlCompareUnicodeString(v10, &String2, CaseInSensitive) )
            goto LABEL_33;
          v15 = v39;
          v23 = v41;
        }
        v10 = a3;
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v40 )
          return -1072365560;
      }
      DbgPrintEx(0x33u, 0, "SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", &v22[v17], v25);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( v6 && (*(_BYTE *)(a1 + 16) & 2) != 0 )
  {
    v27 = *(unsigned int *)(a1 + 20);
    v28 = (char *)(a1 + *(unsigned int *)(a1 + 24));
    v29 = &v28[24 * (unsigned int)(v27 - 1)];
    Key[0] = *HashValue;
    v30 = (char *)bsearch(Key, v28, v27, 0x18uLL, RtlpCompareActivationContextStringSectionEntryByPseudoKey);
    if ( v30 )
    {
      for ( ; v30 != v28; v30 -= 24 )
      {
        if ( *(_DWORD *)v30 != *HashValue )
          break;
      }
      v31 = *HashValue;
      v26 = v30 + 24;
      if ( *(_DWORD *)v30 == *HashValue )
        v26 = v30;
      do
      {
        String2.Length = *((_WORD *)v26 + 4);
        String2.MaximumLength = String2.Length;
        String2.Buffer = (wchar_t *)(a1 + *((unsigned int *)v26 + 1));
        if ( !RtlCompareUnicodeString(a3, &String2, v7) )
          break;
        v26 += 24;
        if ( v26 > v29 )
          goto LABEL_30;
      }
      while ( *(_DWORD *)v26 == v31 );
      if ( v26 > v29 || *(_DWORD *)v26 != v31 )
      {
LABEL_30:
        v26 = 0LL;
        goto LABEL_33;
      }
      goto LABEL_33;
    }
    return -1072365560;
  }
  v34 = *(_DWORD *)(a1 + 20);
  v26 = (char *)(a1 + *(unsigned int *)(a1 + 24));
  if ( !v34 )
    return -1072365560;
  while ( 1 )
  {
    String2.Length = *((_WORD *)v26 + 4);
    String2.MaximumLength = String2.Length;
    String2.Buffer = (wchar_t *)(a1 + *((unsigned int *)v26 + 1));
    if ( (!v6 || *(_DWORD *)v26 == *HashValue) && !RtlCompareUnicodeString(v10, &String2, v7) )
      break;
    v10 = a3;
    v26 += 24;
    if ( !--v34 )
      return -1072365560;
  }
LABEL_33:
  if ( !v26 || !*((_DWORD *)v26 + 3) )
    return -1072365560;
  if ( a4 )
  {
    v33 = *a4;
    a4[1] = *(_DWORD *)(a1 + 12);
    *((_QWORD *)a4 + 1) = a1 + *((unsigned int *)v26 + 3);
    a4[4] = *((_DWORD *)v26 + 4);
    if ( a4 + 17 <= (unsigned int *)((char *)a4 + v33) )
      a4[16] = *((_DWORD *)v26 + 5);
  }
  return 0;
}
