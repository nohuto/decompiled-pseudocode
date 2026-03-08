/*
 * XREFs of IvtUpdateScalableModePasidTablesForPasid @ 0x14052BA10
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x14052BAEC (IvtUpdateScalableModeTranslationStructures.c)
 *     IvtSetupScalableModeDefaultPasidTables @ 0x140A95F30 (IvtSetupScalableModeDefaultPasidTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1405298D4 (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtBuildScalableModePasidTableS1Entry @ 0x14052991C (IvtBuildScalableModePasidTableS1Entry.c)
 *     IvtBuildScalableModePasidTableS2Entry @ 0x140529A20 (IvtBuildScalableModePasidTableS2Entry.c)
 *     IvtSetScalableModePasidTableEntry @ 0x14052B4B0 (IvtSetScalableModePasidTableEntry.c)
 */

LONGLONG __fastcall IvtUpdateScalableModePasidTablesForPasid(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int16 a5,
        __int64 a6)
{
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r9
  LONGLONG result; // rax
  int v14; // [rsp+20h] [rbp-78h]
  LONGLONG v15[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v16[8]; // [rsp+40h] [rbp-58h] BYREF

  v15[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( a4 == 1 )
    IvtBuildScalableModePasidTableS1Entry(a1, 1, 0LL, v9, 0, v16);
  else
    IvtBuildScalableModePasidTableS2Entry(a1, a4, a5, a6, v14, (__int64 *)v16);
  IvtSetScalableModePasidTableEntry(v10, a2, 0, (signed __int64 *)v16);
  IvtBuildScalableModePasidDirectoryEntry(v11, a2, 0, v12, v15);
  result = v15[0];
  **(_QWORD **)(a2 + 48) = v15[0];
  return result;
}
