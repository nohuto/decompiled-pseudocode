__int64 __fastcall CMonitorTopology::CompareToCurrent(CMonitorTopology *a1, int a2)
{
  CMonitorTopology *v2; // r9
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = qword_1C0361320;
  if ( a1 == qword_1C0361320 )
    return 0LL;
  v5 = *((_DWORD *)a1 + 2);
  v6 = 0;
  if ( v5 != *((_DWORD *)qword_1C0361320 + 2) )
    return 1LL;
  v7 = 0LL;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !a2 )
      {
        v9 = v6 | 8;
        if ( *((_WORD *)a1 + 36 * v7 + 28) == *((_WORD *)v2 + 36 * v7 + 28) )
          v9 = v6;
        v6 = v9;
        v10 = *((_QWORD *)a1 + 9 * v7 + 3) - *((_QWORD *)v2 + 9 * v7 + 3);
        if ( !v10 )
          v10 = *((_QWORD *)a1 + 9 * v7 + 4) - *((_QWORD *)v2 + 9 * v7 + 4);
        if ( v10 )
        {
          if ( *((_QWORD *)a1 + 9 * v7 + 3) == *((_QWORD *)v2 + 9 * v7 + 3) )
            v6 = v9 | 4;
          else
            v6 = v9 | 2;
        }
        v11 = *((_QWORD *)a1 + 9 * v7 + 5) - *((_QWORD *)v2 + 9 * v7 + 5);
        if ( !v11 )
          v11 = *((_QWORD *)a1 + 9 * v7 + 6) - *((_QWORD *)v2 + 9 * v7 + 6);
        if ( v11 )
          v6 |= 0x10u;
      }
      if ( !CMonitorTopology::MonitorId::Compare(
              (CMonitorTopology *)((char *)a1 + 72 * v7 + 60),
              (CMonitorTopology *)((char *)v2 + 72 * v7 + 60)) )
        v6 |= 0x20u;
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *((_DWORD *)a1 + 2) )
        break;
      v2 = qword_1C0361320;
    }
  }
  return v6;
}
