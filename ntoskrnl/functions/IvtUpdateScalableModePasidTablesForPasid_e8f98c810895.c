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
