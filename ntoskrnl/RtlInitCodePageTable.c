/*
 * XREFs of RtlInitCodePageTable @ 0x14080EBB0
 * Callers:
 *     RtlpInitCodePageTables @ 0x14080EA38 (RtlpInitCodePageTables.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  unsigned __int16 *v2; // r10
  __int64 v4; // r11
  __int64 v5; // r8
  unsigned __int16 v6; // r11
  USHORT *v7; // rax
  USHORT *v8; // rcx
  __int64 v9; // r8
  unsigned __int16 v10; // ax

  v2 = 0LL;
  if ( !TableBase || TableBase[1] == 0xFDE9 )
  {
    *CodePageTable = (struct _CPTABLEINFO)Utf8TableInfo;
  }
  else
  {
    v4 = *TableBase;
    v5 = v4 + 1;
    v6 = TableBase[v4] + v4;
    CodePageTable->MaximumCharacterSize = TableBase[2];
    CodePageTable->DefaultChar = TableBase[3];
    CodePageTable->UniDefaultChar = TableBase[4];
    CodePageTable->TransDefaultChar = TableBase[5];
    CodePageTable->TransUniDefaultChar = TableBase[6];
    *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
    *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
    v7 = &TableBase[v5];
    v8 = v7 + 256;
    CodePageTable->MultiByteTable = v7;
    v9 = v7[256] != 0 ? 0x200 : 0;
    if ( *(USHORT *)((char *)v7 + v9 + 514) )
    {
      v10 = 1;
      v2 = (USHORT *)((char *)v8 + v9 + 4);
    }
    else
    {
      v10 = 0;
    }
    CodePageTable->DBCSOffsets = v2;
    CodePageTable->DBCSCodePage = v10;
    CodePageTable->WideCharTable = &TableBase[v6 + 1];
    CodePageTable->CodePage = TableBase[1];
  }
}
