/*
 * XREFs of RtlInitCodePageTable @ 0x1407CC9F0
 * Callers:
 *     RtlInitNlsTables @ 0x1407CC984 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlInitCodePageTable(PUSHORT TableBase, PCPTABLEINFO CodePageTable)
{
  USHORT *v2; // r9
  USHORT v4; // cx
  __int64 v5; // rax
  USHORT v6; // r11
  unsigned __int16 v7; // r11
  USHORT *v8; // rax
  USHORT *v9; // r8
  USHORT v10; // ax

  v2 = 0LL;
  if ( !TableBase || (v4 = TableBase[1], v4 == 0xFDE9) )
  {
    *(_DWORD *)&CodePageTable->CodePage = 327145;
    *(_DWORD *)&CodePageTable->DefaultChar = -196545;
    *(_DWORD *)&CodePageTable->TransDefaultChar = 4128831;
    CodePageTable->DBCSCodePage = 0;
    CodePageTable->MultiByteTable = 0LL;
    CodePageTable->DBCSRanges = 0LL;
    CodePageTable->DBCSOffsets = 0LL;
  }
  else
  {
    v5 = *TableBase;
    v6 = TableBase[v5];
    CodePageTable->CodePage = v4;
    v7 = v5 + v6;
    CodePageTable->MaximumCharacterSize = TableBase[2];
    CodePageTable->DefaultChar = TableBase[3];
    CodePageTable->UniDefaultChar = TableBase[4];
    CodePageTable->TransDefaultChar = TableBase[5];
    CodePageTable->TransUniDefaultChar = TableBase[6];
    *(_QWORD *)CodePageTable->LeadByte = *(_QWORD *)(TableBase + 7);
    *(_DWORD *)&CodePageTable->LeadByte[8] = *(_DWORD *)(TableBase + 11);
    v8 = &TableBase[v5 + 1];
    CodePageTable->MultiByteTable = v8;
    v9 = (USHORT *)((char *)v8 + (v8[256] != 0 ? 514LL : 2LL) + 512);
    CodePageTable->DBCSRanges = v9;
    if ( *v9 )
    {
      v10 = 1;
      v2 = v9 + 1;
    }
    else
    {
      v10 = 0;
    }
    CodePageTable->DBCSOffsets = v2;
    CodePageTable->DBCSCodePage = v10;
    v2 = &TableBase[v7 + 1];
  }
  CodePageTable->WideCharTable = v2;
}
