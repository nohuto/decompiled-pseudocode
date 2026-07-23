/*
 * XREFs of RtlpMuiRegGetInstalledLanguageIndex @ 0x140981488
 * Callers:
 *     RtlpMuiRegValidateConfigNode @ 0x1405CA7DC (RtlpMuiRegValidateConfigNode.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140980D50 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14098107C (RtlpMuiRegConfigMatchesInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x14078EC20 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14078FA88 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 */

__int64 __fastcall RtlpMuiRegGetInstalledLanguageIndex(__int64 a1, int a2, __int16 a3, _WORD *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  char v8; // r8
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  const WCHAR *v14; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a3;
  Lcid = 0;
  v8 = 1;
  DestinationString = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 24);
  if ( a2 == 3 )
  {
    v10 = 0;
    if ( *(_WORD *)(v9 + 6) )
    {
      v11 = *(_QWORD *)(v9 + 16);
      while ( 1 )
      {
        v12 = 28LL * v10;
        if ( (*(_WORD *)(v12 + v11) & 0x1020) == 0x20 && *(_WORD *)(v12 + v11 + 6) == (_WORD)v5 && a4 )
          break;
        if ( ++v10 >= *(unsigned __int16 *)(v9 + 6) )
          goto LABEL_10;
      }
      *a4 = v10;
      return v4;
    }
LABEL_10:
    v13 = *(_QWORD *)(a1 + 32);
    if ( v13 && (v5 & 0x8000u) == 0LL && (int)v5 < *(unsigned __int16 *)(v13 + 6) )
      v14 = (const WCHAR *)(*(_QWORD *)(v13 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v13 + 16) + 2 * v5));
    else
      v14 = 0LL;
    if ( !v14 )
      return (unsigned int)-1073741772;
    RtlInitUnicodeString(&DestinationString, v14);
    if ( !RtlCultureNameToLCID(&DestinationString, &Lcid) )
      return (unsigned int)-1073741772;
    LOWORD(v5) = Lcid;
    a2 = 1;
    v8 = 0;
  }
  if ( a2 == 1 )
    return (unsigned int)RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v5, v8, a4);
  if ( a2 != 2 )
    return (unsigned int)-1073741772;
  if ( (__int16)v5 <= 0 || (__int16)v5 >= (int)*(unsigned __int16 *)(v9 + 6) )
    return (unsigned int)-1073741811;
  if ( a4 )
    *a4 = v5;
  return v4;
}
