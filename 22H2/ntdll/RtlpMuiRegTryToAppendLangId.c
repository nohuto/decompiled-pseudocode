/*
 * XREFs of RtlpMuiRegTryToAppendLangId @ 0x180036AEC
 * Callers:
 *     RtlpMuiRegTryToAppendLanguageToMuiszFromLangList @ 0x180036A2C (RtlpMuiRegTryToAppendLanguageToMuiszFromLangList.c)
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x180104BC8 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     RtlIntegerToUnicode @ 0x180037440 (RtlIntegerToUnicode.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003A494 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

__int64 __fastcall RtlpMuiRegTryToAppendLangId(__int64 a1, __int64 a2, unsigned int *a3, wchar_t *a4, unsigned int a5)
{
  __int64 v7; // r12
  DWORD v8; // ebp
  unsigned int v9; // ebx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // edi
  DWORD Lcid; // [rsp+20h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+28h] [rbp-60h] BYREF
  __int64 Src; // [rsp+38h] [rbp-50h] BYREF
  __int16 v18; // [rsp+40h] [rbp-48h]

  Src = 0LL;
  v18 = 0;
  Lcid = 0;
  if ( a2 && a1 && a3 )
  {
    v7 = *a3;
    if ( *(_WORD *)(a2 + 4) )
    {
      v8 = *(unsigned __int16 *)(a2 + 4);
    }
    else
    {
      if ( *(__int16 *)(a2 + 6) <= 0 )
        return (unsigned int)-1073741595;
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) + 2LL * *(__int16 *)(a2 + 6))));
      if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
        return (unsigned int)-1073741811;
      v8 = Lcid;
    }
    v9 = RtlIntegerToUnicode(v8, 16LL, 4294967292LL, &Src);
    if ( (v9 & 0x80000000) != 0 )
      return v9;
    v10 = -1LL;
    do
      ++v10;
    while ( *((_WORD *)&Src + v10) );
    v11 = 2 * v10;
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    if ( v8 != 4096 && *a3 && *a3 <= a5 && (unsigned __int8)RtlpLangNameInMultiSzString_Size(a4, (wchar_t *)&Src) )
      return v9;
    v12 = (unsigned __int16)v11;
    v13 = ((unsigned __int16)v11 >> 1) + v7 + 1;
    if ( a4 && (unsigned int)v7 < v13 )
    {
      if ( v13 < a5 )
      {
        memmove(&a4[v7], &Src, v12);
        a4[v13 - 1] = 0;
LABEL_19:
        *a3 = v13;
        return v9;
      }
    }
    else if ( v13 < a5 )
    {
      goto LABEL_19;
    }
    if ( a4 )
      v9 = -1073741789;
    goto LABEL_19;
  }
  return 3221225485LL;
}
