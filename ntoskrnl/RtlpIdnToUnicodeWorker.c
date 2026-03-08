/*
 * XREFs of RtlpIdnToUnicodeWorker @ 0x1405AD830
 * Callers:
 *     RtlIdnToUnicode @ 0x1409BC420 (RtlIdnToUnicode.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     punycode_decode @ 0x1409BC720 (punycode_decode.c)
 *     RtlIsNormalizedString @ 0x1409BEC40 (RtlIsNormalizedString.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpIdnToUnicodeWorker(
        int a1,
        const wchar_t *a2,
        int a3,
        void *a4,
        int *a5,
        PCWSTR SourceString,
        BOOLEAN Normalized)
{
  void *v7; // r15
  wchar_t *v8; // r11
  char v9; // di
  int *v10; // rsi
  const WCHAR *v11; // r13
  wchar_t v12; // r14
  __int64 result; // rax
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r15
  _BYTE *Pool2; // r14
  __int64 i; // rcx
  __int16 v21; // dx
  __int64 j; // rax
  __int64 v23; // [rsp+48h] [rbp-8h] BYREF
  size_t pcchLength; // [rsp+98h] [rbp+48h] BYREF
  void *v25; // [rsp+A8h] [rbp+58h]

  v25 = a4;
  v7 = a4;
  v23 = 0LL;
  v8 = (wchar_t *)a2;
  Normalized = 0;
  v9 = a1;
  if ( !a2 )
    return 3221225485LL;
  v10 = a5;
  if ( !a5 || *a5 < 0 || a3 < -1 || *a5 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF0) != 0 )
    return 3221225485LL;
  if ( a3 == -1 )
  {
    pcchLength = 0LL;
    if ( RtlStringCchLengthW(a2, 0x203uLL, &pcchLength) < 0 )
      return 3221227286LL;
    a3 = pcchLength + 1;
  }
  v11 = SourceString;
  LODWORD(pcchLength) = 511;
  v12 = v8[a3 - 1];
  result = punycode_decode(v8, (v9 & 4) != 0, (v9 & 2) != 0, (__int64)&Normalized, (__int64)&v23);
  if ( (int)result < 0 )
    return result;
  if ( !v12 )
  {
    v14 = pcchLength;
    if ( (int)pcchLength < 511 )
    {
      v11[(int)pcchLength] = 0;
      v15 = v14 + 1;
      goto LABEL_16;
    }
    return 3221227286LL;
  }
  v15 = pcchLength;
LABEL_16:
  if ( (v9 & 8) != 0 || Normalized )
    goto LABEL_38;
  Normalized = 0;
  v16 = v23;
  if ( (v9 & 4) != 0 && (RtlIsNormalizedString(1u, v11, (v23 - (__int64)v11) >> 1, &Normalized) < 0 || !Normalized) )
    return 3221227286LL;
  v17 = (v16 - (__int64)v11) >> 1;
  if ( v17 >= v15 - (v12 == 0) )
    goto LABEL_38;
  v18 = v15 - (2 - (v12 != 0)) - (int)v17;
  LODWORD(pcchLength) = v15 - (2 - (v12 != 0)) - v17;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, v18, 1164862537LL);
  if ( !Pool2 )
    return 3221225495LL;
  if ( v18 > 0 )
  {
    for ( i = 0LL; i < v18; ++i )
    {
      v21 = *(_WORD *)(v16 + 2 * i + 2);
      if ( (unsigned __int16)(v21 - 65) <= 0x19u )
      {
        *(_WORD *)(v16 + 2 * i + 2) = v21 + 32;
        Pool2[i] = 1;
      }
    }
  }
  if ( RtlIsNormalizedString((((v9 & 1) == 0) << 8) + 13, (PCWSTR)(v16 + 2), pcchLength, &Normalized) < 0 || !Normalized )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221227286LL;
  }
  if ( v18 > 0 )
  {
    for ( j = 0LL; j < v18; ++j )
    {
      if ( Pool2[j] == 1 )
        *(_WORD *)(v16 + 2 * j + 2) -= 32;
    }
  }
  ExFreePoolWithTag(Pool2, 0);
  v7 = v25;
LABEL_38:
  if ( v7 && *v10 )
  {
    if ( v15 > *v10 )
      return 3221225507LL;
    memmove(v7, v11, 2LL * v15);
  }
  *v10 = v15;
  return 0LL;
}
