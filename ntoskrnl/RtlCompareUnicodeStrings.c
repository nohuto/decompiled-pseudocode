/*
 * XREFs of RtlCompareUnicodeStrings @ 0x140684CA0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x1402F3974 (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x140391230 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x140612500 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140612EA0 (AsiSortValueList.c)
 *     PnpCheckDeviceIdsChanged @ 0x140684A9C (PnpCheckDeviceIdsChanged.c)
 *     CmpFindNameInListFromIndex @ 0x1407B42D0 (CmpFindNameInListFromIndex.c)
 *     sub_140831820 @ 0x140831820 (sub_140831820.c)
 *     PiDevCfgResolveVariableExpression @ 0x14095D1E0 (PiDevCfgResolveVariableExpression.c)
 *     PnpCompareMultiSz @ 0x140969650 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x14099CAF0 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A72A0C (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A72CB8 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // r14d
  int v6; // ebp
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v8; // r9
  unsigned __int16 *v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // r9
  __int64 v14; // r11
  int v15; // eax
  int v16; // ecx
  int v18; // esi
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // di

  v5 = String2Length;
  v6 = String1Length;
  Flink = PsGetCurrentServerSiloGlobals()[77].Flink;
  v12 = v11;
  if ( v11 > v8 )
    v12 = v8;
  v13 = &v9[v12];
  if ( v9 >= v13 )
    return v6 - v5;
  v14 = v10 - (_QWORD)v9;
  if ( CaseInSensitive )
  {
    do
    {
      v20 = *(unsigned __int16 *)((char *)v9 + v14);
      if ( *v9 != v20 )
      {
        v18 = NLS_UPCASE((__int64)Flink, *v9);
        v19 = NLS_UPCASE((__int64)Flink, v20);
        if ( (_WORD)v18 != v19 )
        {
          v16 = v19;
          v15 = v18;
          return v15 - v16;
        }
      }
      ++v9;
    }
    while ( v9 < v13 );
    return v6 - v5;
  }
  else
  {
    while ( 1 )
    {
      v15 = *v9;
      v16 = *(unsigned __int16 *)((char *)v9 + v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
      if ( ++v9 >= v13 )
        return v6 - v5;
    }
    return v15 - v16;
  }
}
