__int64 __fastcall PiDqQueryEnumObject(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int AddObjectToResultSet; // ebx
  char v7; // al
  int v8; // eax
  char v9; // al
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  LOBYTE(v11) = 1;
  if ( !*(_DWORD *)(v3 + 20) && (*(_DWORD *)(v3 + 16) == 1 || (unsigned int)(*(_DWORD *)(v3 + 16) - 2) < 2) )
  {
    v5 = PiPnpRtlApplyMandatoryFilters(
           PiPnpRtlCtx,
           *(_QWORD *)(a2 + 16),
           *(_DWORD *)(a2 + 28),
           0,
           (int)a1 + 32,
           (__int64)&v11);
    AddObjectToResultSet = v5;
    if ( v5 == -1073741772 || v5 == -1073741275 )
    {
      v7 = 0;
      LOBYTE(v11) = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( v5 < 0 )
        return AddObjectToResultSet;
      v7 = v11;
    }
    if ( !v7 )
      return AddObjectToResultSet;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL) )
  {
    v8 = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v11);
    AddObjectToResultSet = v8;
    if ( v8 == -1073741772 )
    {
      v9 = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( v8 < 0 )
        return AddObjectToResultSet;
      v9 = v11;
    }
    if ( !v9 )
      return AddObjectToResultSet;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 40LL) & 1) == 0
    || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), (AddObjectToResultSet & 0x80000000) == 0) )
  {
    AddObjectToResultSet = PiDqQueryActionQueueEntryCreate(1LL, a2, 0LL, &v12);
    if ( (AddObjectToResultSet & 0x80000000) == 0 )
      PiDqQueryAppendActionEntry(a1, v12);
  }
  return AddObjectToResultSet;
}
