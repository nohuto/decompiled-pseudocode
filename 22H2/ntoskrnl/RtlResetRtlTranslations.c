/*
 * XREFs of RtlResetRtlTranslations @ 0x1407CFCC4
 * Callers:
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     memset @ 0x140413800 (memset.c)
 */

__int64 RtlResetRtlTranslations()
{
  USHORT CodePage; // di
  USHORT DBCSCodePage; // si
  unsigned __int16 *v2; // rcx
  __int64 v3; // rbp
  __int16 *v4; // rcx
  USHORT v5; // di
  PVOID WideCharTable; // rax
  bool v7; // bl
  __int64 result; // rax
  PUSHORT DBCSOffsets; // rax
  __int64 v10; // rdx
  __int128 v11; // xmm1
  PUSHORT v12; // rax
  __int128 v13; // xmm1

  if ( CodePageTable.CodePage == 0xFDE9 || (CodePage = InitTableInfo.CodePage, InitTableInfo.CodePage == 0xFDE9) )
  {
    v7 = 0;
    NlsAnsiCodePage = -535;
    LOBYTE(NlsMbCodePageTag) = 0;
    WideCharTable = 0LL;
    NlsMbAnsiCodePageTables = 0LL;
    NlsAnsiToUnicodeData = 0LL;
    NlsUnicodeToAnsiData = 0LL;
    NlsUnicodeToMbAnsiData = 0LL;
    NlsMbOemCodePageTables = 0LL;
    NlsOemToUnicodeData = 0LL;
    NlsOemCodePage = -535;
    NlsActiveCodePageIsUTF8 = 1;
    NlsOemCodePageIsUTF8 = 1;
  }
  else
  {
    DBCSCodePage = CodePageTable.DBCSCodePage;
    v2 = NlsLeadByteInfoTable;
    v3 = 4LL;
    NlsAnsiCodePage = CodePageTable.CodePage;
    if ( CodePageTable.DBCSCodePage )
    {
      DBCSOffsets = CodePageTable.DBCSOffsets;
      v10 = 4LL;
      do
      {
        *(_OWORD *)v2 = *(_OWORD *)DBCSOffsets;
        *((_OWORD *)v2 + 1) = *((_OWORD *)DBCSOffsets + 1);
        *((_OWORD *)v2 + 2) = *((_OWORD *)DBCSOffsets + 2);
        *((_OWORD *)v2 + 3) = *((_OWORD *)DBCSOffsets + 3);
        *((_OWORD *)v2 + 4) = *((_OWORD *)DBCSOffsets + 4);
        *((_OWORD *)v2 + 5) = *((_OWORD *)DBCSOffsets + 5);
        *((_OWORD *)v2 + 6) = *((_OWORD *)DBCSOffsets + 6);
        v2 += 64;
        v11 = *((_OWORD *)DBCSOffsets + 7);
        DBCSOffsets += 64;
        *((_OWORD *)v2 - 1) = v11;
        --v10;
      }
      while ( v10 );
    }
    else
    {
      memset(NlsLeadByteInfoTable, 0, sizeof(NlsLeadByteInfoTable));
    }
    v4 = NlsOemLeadByteInfoTable;
    NlsMbAnsiCodePageTables = (__int64)CodePageTable.DBCSOffsets;
    NlsOemCodePage = CodePage;
    LOBYTE(NlsMbCodePageTag) = DBCSCodePage != 0;
    v5 = InitTableInfo.DBCSCodePage;
    NlsAnsiToUnicodeData = (__int64)CodePageTable.MultiByteTable;
    NlsUnicodeToAnsiData = (__int64)CodePageTable.WideCharTable;
    NlsUnicodeToMbAnsiData = (__int64)CodePageTable.WideCharTable;
    NlsActiveCodePageIsUTF8 = 0;
    if ( InitTableInfo.DBCSCodePage )
    {
      v12 = InitTableInfo.DBCSOffsets;
      do
      {
        *(_OWORD *)v4 = *(_OWORD *)v12;
        *((_OWORD *)v4 + 1) = *((_OWORD *)v12 + 1);
        *((_OWORD *)v4 + 2) = *((_OWORD *)v12 + 2);
        *((_OWORD *)v4 + 3) = *((_OWORD *)v12 + 3);
        *((_OWORD *)v4 + 4) = *((_OWORD *)v12 + 4);
        *((_OWORD *)v4 + 5) = *((_OWORD *)v12 + 5);
        *((_OWORD *)v4 + 6) = *((_OWORD *)v12 + 6);
        v4 += 64;
        v13 = *((_OWORD *)v12 + 7);
        v12 += 64;
        *((_OWORD *)v4 - 1) = v13;
        --v3;
      }
      while ( v3 );
    }
    else
    {
      memset(NlsOemLeadByteInfoTable, 0, 0x200uLL);
    }
    NlsMbOemCodePageTables = (__int64)InitTableInfo.DBCSOffsets;
    NlsOemToUnicodeData = (__int64)InitTableInfo.MultiByteTable;
    WideCharTable = InitTableInfo.WideCharTable;
    NlsOemCodePageIsUTF8 = 0;
    v7 = v5 != 0;
  }
  NlsUnicodeToOemData = (__int64)WideCharTable;
  NlsUnicodeToMbOemData = (__int64)WideCharTable;
  OemDefaultChar = InitTableInfo.DefaultChar;
  OemTransUniDefaultChar = InitTableInfo.TransDefaultChar;
  result = *((_QWORD *)&xmmword_140D58930 + 1);
  Nls844UnicodeUpcaseTable = xmmword_140D58930;
  LOBYTE(NlsMbOemCodePageTag) = v7;
  Nls844UnicodeLowercaseTable = *((_QWORD *)&xmmword_140D58930 + 1);
  return result;
}
