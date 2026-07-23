/*
 * XREFs of RtlInitNlsTables @ 0x1800E5370
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800D1D10 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x1800E5270 (RtlInitCodePageTable.c)
 */

void __cdecl RtlInitNlsTables(
        PUSHORT AnsiNlsBase,
        PUSHORT OemNlsBase,
        PUSHORT LanguageNlsBase,
        PNLSTABLEINFO TableInfo)
{
  USHORT *v7; // rax
  USHORT *v8; // rdi

  RtlInitCodePageTable(AnsiNlsBase, &TableInfo->AnsiTableInfo);
  RtlInitCodePageTable(OemNlsBase, &TableInfo->OemTableInfo);
  v7 = 0LL;
  if ( LanguageNlsBase )
  {
    v7 = &LanguageNlsBase[(unsigned __int16)(LanguageNlsBase[1] + 1) + 1];
    v8 = LanguageNlsBase + 2;
  }
  else
  {
    v8 = 0LL;
  }
  TableInfo->UpperCaseTable = v8;
  TableInfo->LowerCaseTable = v7;
}
