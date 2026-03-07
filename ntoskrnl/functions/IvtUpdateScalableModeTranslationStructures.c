__int64 __fastcall IvtUpdateScalableModeTranslationStructures(
        __int64 a1,
        int *a2,
        __int64 a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        int a8,
        int a9)
{
  __int64 *ScalableModePasidTables; // rsi
  __int64 v12; // rcx
  char v13; // di
  int v14; // edx
  int PasidGranularTranslationType; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int16 v18; // r10
  __int64 v20; // [rsp+28h] [rbp-20h]
  __int64 v21; // [rsp+30h] [rbp-18h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  ScalableModePasidTables = a4;
  if ( !a4 )
    ScalableModePasidTables = IvtGetScalableModePasidTables(a1, *a2);
  v12 = 0LL;
  v13 = 0;
  v22 = 0LL;
  if ( a7 )
  {
    v14 = *(_DWORD *)(a7 + 4);
    if ( v14 == 1 )
    {
      v13 = 1;
      IvtGetBlockedDomain(a1, (unsigned int *)a2, (unsigned __int64 *)&v22);
      v12 = v22;
    }
    else if ( v14 )
    {
      v13 = 1;
      v12 = *(_QWORD *)(a7 + 40) >> 12;
    }
    else if ( *(_BYTE *)(a1 + 319) )
    {
      v13 = 1;
      v12 = *(__int64 *)(a1 + 328) >> 12;
    }
  }
  PasidGranularTranslationType = IvtGetPasidGranularTranslationType(v12, 0, v13);
  IvtUpdateScalableModePasidTablesForPasid(
    a1,
    (__int64)ScalableModePasidTables,
    v17,
    PasidGranularTranslationType,
    v18,
    v16);
  return IvtUpdateScalableModeContextEntry(a1, (unsigned int *)a2, ScalableModePasidTables, 0, 0, v20, v21, a9);
}
