__int64 __fastcall WdipSemQueryScenarioTable(_QWORD *a1, __int16 a2)
{
  __int64 v2; // r8
  int v5; // r9d
  __int64 v6; // rdx
  __int64 v7; // rcx

  v2 = 0LL;
  if ( a1 )
  {
    v5 = 0;
    if ( dword_140C32A80 )
    {
      while ( 1 )
      {
        v6 = WdipSemScenarioTable[v5];
        v7 = *a1 - *(_QWORD *)v6;
        if ( *a1 == *(_QWORD *)v6 )
          v7 = a1[1] - *(_QWORD *)(v6 + 8);
        if ( !v7 && a2 == *(_WORD *)(v6 + 16) )
          break;
        if ( ++v5 >= (unsigned int)dword_140C32A80 )
          return v2;
      }
      return WdipSemScenarioTable[v5];
    }
  }
  return v2;
}
