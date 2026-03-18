/*
 * XREFs of RtlCompareUnicodeStrings @ 0x1407CD7A0
 * Callers:
 *     ApiSetpSearchForApiSet @ 0x14025179C (ApiSetpSearchForApiSet.c)
 *     EtwpAvlCompareKeyNames @ 0x1403CB110 (EtwpAvlCompareKeyNames.c)
 *     ApiSetpSearchForApiSetHost @ 0x1406470A8 (ApiSetpSearchForApiSetHost.c)
 *     AsiSortValueList @ 0x140647A40 (AsiSortValueList.c)
 *     PnpCheckDeviceIdsChanged @ 0x14076C544 (PnpCheckDeviceIdsChanged.c)
 *     CmpFindNameInListFromIndex @ 0x1407C94E0 (CmpFindNameInListFromIndex.c)
 *     PiDevCfgResolveVariableExpression @ 0x140804350 (PiDevCfgResolveVariableExpression.c)
 *     sub_14083F230 @ 0x14083F230 (sub_14083F230.c)
 *     PnpCompareMultiSz @ 0x140957E34 (PnpCompareMultiSz.c)
 *     PopDirectedDripsUmTestDeviceCompare @ 0x14099F320 (PopDirectedDripsUmTestDeviceCompare.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140A360D8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140A36378 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

LONG __stdcall RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  int v5; // r15d
  int v7; // r14d
  __int64 v8; // rdi
  unsigned __int64 v9; // r9
  unsigned __int16 *v10; // r10
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int16 *v13; // r11
  char *v14; // rbx
  int v15; // eax
  int v16; // ecx
  int v18; // ebp
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // si

  v5 = String2Length;
  v7 = String1Length;
  v8 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 154);
  v12 = v11;
  if ( v11 > v9 )
    v12 = v9;
  v13 = &v10[v12];
  if ( v10 >= v13 )
    return v7 - v5;
  v14 = (char *)((char *)String2 - (char *)v10);
  if ( CaseInSensitive )
  {
    do
    {
      v20 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v14);
      if ( *v10 != v20 )
      {
        v18 = NLS_UPCASE(v8, *v10);
        v19 = NLS_UPCASE(v8, v20);
        if ( (_WORD)v18 != v19 )
        {
          v16 = v19;
          v15 = v18;
          return v15 - v16;
        }
      }
      ++v10;
    }
    while ( v10 < v13 );
    return v7 - v5;
  }
  else
  {
    while ( 1 )
    {
      v15 = *v10;
      v16 = *(unsigned __int16 *)((char *)v10 + (_QWORD)v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
      if ( ++v10 >= v13 )
        return v7 - v5;
    }
    return v15 - v16;
  }
}
