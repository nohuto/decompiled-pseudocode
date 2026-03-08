/*
 * XREFs of _RtlpMuiRegInitAnyLanguage @ 0x140844394
 * Callers:
 *     RtlpMuiRegAddLanguageByName @ 0x1408437B0 (RtlpMuiRegAddLanguageByName.c)
 *     _RtlpMuiRegAddBaseLanguage @ 0x140A726D0 (_RtlpMuiRegAddBaseLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x1407FE570 (RtlCultureNameToLCID.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x140844470 (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegGetOrAddString @ 0x140844498 (RtlpMuiRegGetOrAddString.c)
 */

__int64 __fastcall RtlpMuiRegInitAnyLanguage(__int64 a1, __int64 a2, const WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // r8d
  __int16 v12[2]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+24h] [rbp-24h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  DestinationString = 0LL;
  v13 = 0;
  v12[0] = -1;
  RtlInitUnicodeString(&DestinationString, a3);
  if ( RtlCultureNameToLCID(&DestinationString.Length, &v13) )
  {
    LOBYTE(v8) = 1;
    v9 = RtlpMuiRegGetOrAddString(a1, a3, v8, v12);
    v10 = v9;
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = v13;
      *(_WORD *)(a2 + 6) = v12[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        RtlpMuiRegAddNeutralLanguage(a1, a2, (unsigned int)v9);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return v10;
}
