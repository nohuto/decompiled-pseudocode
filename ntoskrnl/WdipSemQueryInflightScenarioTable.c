/*
 * XREFs of WdipSemQueryInflightScenarioTable @ 0x1409DAFF4
 * Callers:
 *     WdipSemUpdateInflightScenarioTable @ 0x1409DB118 (WdipSemUpdateInflightScenarioTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WdipSemQueryInflightScenarioTable(_QWORD *a1, __int16 a2, _DWORD *a3)
{
  __int64 v3; // r9
  unsigned int v6; // r11d
  unsigned int v7; // r10d
  _QWORD *v8; // rcx
  __int64 v9; // rdx

  v3 = 0LL;
  if ( a1 )
  {
    if ( a3 )
    {
      v6 = a3[250];
      v7 = 0;
      if ( v6 )
      {
        while ( 1 )
        {
          v8 = *(_QWORD **)a3;
          v9 = *a1 - **(_QWORD **)a3;
          if ( *a1 == **(_QWORD **)a3 )
            v9 = a1[1] - v8[1];
          if ( !v9 && a2 == *((_WORD *)v8 + 8) )
            break;
          ++v7;
          a3 += 2;
          if ( v7 >= v6 )
            return v3;
        }
        return *(_QWORD *)a3;
      }
    }
  }
  return v3;
}
