/*
 * XREFs of RtlCompareUnicodeStrings @ 0x14065F910
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x1403A2C30 (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x1403BC700 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x1405BE40C (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x1405BEDB0 (AsiSortValueList.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     EtwpExpandFileName @ 0x14065F6D8 (EtwpExpandFileName.c)
 *     PnpCheckDeviceIdsChanged @ 0x140769CA8 (PnpCheckDeviceIdsChanged.c)
 *     sub_1407B1F20 @ 0x1407B1F20 (sub_1407B1F20.c)
 *     PiDevCfgResolveVariableExpression @ 0x1408A8160 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x1408B22D4 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x1408F8A90 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1409820EC (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x14098238C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rax
  int v6; // ebp
  int v7; // esi
  unsigned __int16 *v8; // r10
  const WCHAR *v9; // r11
  signed __int64 v10; // rbx
  int v11; // eax
  int v12; // ecx
  int v14; // edi
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // ax

  v5 = String1Length;
  v6 = String2Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String1Length;
  v8 = (unsigned __int16 *)String1;
  v9 = &String1[v5];
  if ( String1 >= v9 )
    return String1Length - String2Length;
  v10 = (char *)String2 - (char *)String1;
  if ( CaseInSensitive )
  {
    do
    {
      if ( *v8 != *(unsigned __int16 *)((char *)v8 + v10) )
      {
        v14 = NLS_UPCASE(*v8);
        v16 = NLS_UPCASE(v15);
        if ( (_WORD)v14 != v16 )
        {
          v12 = v16;
          v11 = v14;
          return v11 - v12;
        }
      }
      ++v8;
    }
    while ( v8 < v9 );
    return v7 - v6;
  }
  else
  {
    while ( 1 )
    {
      v11 = *v8;
      v12 = *(unsigned __int16 *)((char *)v8 + v10);
      if ( (_WORD)v11 != (_WORD)v12 )
        break;
      if ( ++v8 >= v9 )
        return String1Length - String2Length;
    }
    return v11 - v12;
  }
}
