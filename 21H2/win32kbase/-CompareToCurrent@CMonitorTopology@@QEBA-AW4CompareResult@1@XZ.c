/*
 * XREFs of ?CompareToCurrent@CMonitorTopology@@QEBA?AW4CompareResult@1@XZ @ 0x1C0067FB0
 * Callers:
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C0067830 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     ?IdenticalToCurrent@CMonitorTopology@@QEBA_NXZ @ 0x1C0143030 (-IdenticalToCurrent@CMonitorTopology@@QEBA_NXZ.c)
 * Callees:
 *     AreHashesEqual @ 0x1C00681D0 (AreHashesEqual.c)
 */

__int64 __fastcall CMonitorTopology::CompareToCurrent(_DWORD *a1)
{
  _WORD *v1; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rsi
  int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // al

  v1 = qword_1C02965B0;
  if ( a1 == qword_1C02965B0 )
    return 0LL;
  v3 = a1[2];
  v4 = 0;
  if ( v3 == *((_DWORD *)qword_1C02965B0 + 2) )
  {
    v5 = 0LL;
    if ( v3 )
    {
      do
      {
        v6 = v4 | 8;
        if ( LOWORD(a1[18 * v5 + 14]) == v1[36 * v5 + 28] )
          v6 = v4;
        v7 = *(_QWORD *)&a1[18 * v5 + 6] - *(_QWORD *)&v1[36 * v5 + 12];
        if ( !v7 )
          v7 = *(_QWORD *)&a1[18 * v5 + 8] - *(_QWORD *)&v1[36 * v5 + 16];
        if ( v7 )
        {
          if ( *(_QWORD *)&a1[18 * v5 + 6] == *(_QWORD *)&v1[36 * v5 + 12] )
            v6 |= 4u;
          else
            v6 |= 2u;
        }
        v8 = *(_QWORD *)&a1[18 * v5 + 10] - *(_QWORD *)&v1[36 * v5 + 20];
        if ( !v8 )
          v8 = *(_QWORD *)&a1[18 * v5 + 12] - *(_QWORD *)&v1[36 * v5 + 24];
        v4 = v6 | 0x10;
        if ( !v8 )
          v4 = v6;
        if ( LOBYTE(a1[18 * v5 + 20]) != LOBYTE(v1[36 * v5 + 40])
          || (v9 = AreHashesEqual(&a1[18 * v5 + 15], &v1[36 * v5 + 30]), v1 = qword_1C02965B0, !v9) )
        {
          v4 |= 0x20u;
        }
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < a1[2] );
    }
  }
  else
  {
    return 1;
  }
  return v4;
}
