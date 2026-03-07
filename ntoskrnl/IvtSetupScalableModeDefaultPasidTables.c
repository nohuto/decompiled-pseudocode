__int64 __fastcall IvtSetupScalableModeDefaultPasidTables(__int64 a1, int a2, __int16 a3, __int64 a4)
{
  int ScalableModePasidTables; // esi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF

  v13[0] = 0LL;
  ScalableModePasidTables = IvtAllocateScalableModePasidTables(a1, 0xFFFFFFFF, 0, 0x3Fu, v13);
  if ( ScalableModePasidTables >= 0 )
  {
    v12 = a4;
    v10 = v13[0];
    IvtUpdateScalableModePasidTablesForPasid(a1, v13[0], v9, a2, a3, v12);
    *(_QWORD *)(a1 + 104) = v10;
  }
  return (unsigned int)ScalableModePasidTables;
}
