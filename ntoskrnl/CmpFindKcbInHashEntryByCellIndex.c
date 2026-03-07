__int64 __fastcall CmpFindKcbInHashEntryByCellIndex(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  __int64 i; // r8

  v3 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1648)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_DWORD *)(i + 24) == a3 )
      return i - 16;
  }
  return v3;
}
