__int64 __fastcall WdipSemAddScenarioToTable(__int64 a1)
{
  int v1; // edi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rbp
  __int64 v6; // r8

  v1 = 0;
  if ( a1 )
  {
    v3 = 0LL;
    if ( dword_140C32A80 )
    {
      while ( 1 )
      {
        v4 = WdipSemScenarioTable[v3];
        v5 = (unsigned int)v3;
        v6 = *(_QWORD *)v4 - *(_QWORD *)a1;
        if ( *(_QWORD *)v4 == *(_QWORD *)a1 )
          v6 = *(_QWORD *)(v4 + 8) - *(_QWORD *)(a1 + 8);
        if ( !v6 && *(_WORD *)(v4 + 16) == *(_WORD *)(a1 + 16) )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= dword_140C32A80 )
          goto LABEL_7;
      }
      v1 = WdipSemMergeScenarios(a1, WdipSemScenarioTable[v3], 0LL);
      if ( v1 >= 0 )
      {
        WdipSemScenarioTable[v5] = a1;
        WdipSemFreeScenario(v4);
      }
    }
    else
    {
LABEL_7:
      if ( (unsigned int)dword_140C32A80 >= 0x40 )
        return (unsigned int)-1073741823;
      else
        WdipSemScenarioTable[dword_140C32A80++] = a1;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
