__int64 __fastcall WindowStationOpenProcedure(__int64 a1)
{
  _DWORD *v2; // rbx
  _QWORD *i; // rcx

  v2 = *(_DWORD **)(a1 + 16);
  if ( *(_WORD *)(a1 + 24)
    && !(unsigned __int8)PsIsSystemProcess(*(_QWORD *)(a1 + 8))
    && (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) != *v2 )
  {
    return 3221225506LL;
  }
  if ( (v2[16] & 0x100) == 0 )
    return 0LL;
  for ( i = (_QWORD *)grpWinStaList; *i; i = (_QWORD *)(*i + 8LL) )
    ;
  LockObjectAssignment(i, v2);
  v2[16] &= ~0x100u;
  return 0x40000000LL;
}
