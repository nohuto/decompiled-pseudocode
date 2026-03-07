bool __fastcall KiCanSelectSoftParkedProcessor(__int64 a1, __int64 a2, int a3)
{
  char v3; // bl
  int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  v6 = a1;
  if ( KeSoftParkedQueueThreshold && !(unsigned __int8)KiAreSoftUnparkingElectionsEnabled(a1) )
  {
    v10[0] = 0LL;
    KiAcquirePrcbLocksForIsolationUnit(a2, 0, v10);
    if ( (*(_BYTE *)(a2 + 35) & 8) != 0 )
    {
      KiReleasePrcbLocksForIsolationUnit(v10);
      a2 = KiSelectCandidateProcessor(a2, v6, a3, 0, (__int64)v10);
    }
    v7 = *(_QWORD *)(a2 + 33144);
    if ( *(_QWORD *)(a2 + 34880) )
    {
      v8 = *(_QWORD *)(a2 + 34888);
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(_QWORD *)v8 );
      }
      v7 += *(_QWORD *)(v8 + 680);
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    }
    KiReleasePrcbLocksForIsolationUnit(v10);
    return v7 > (unsigned int)KeSoftParkedQueueThreshold;
  }
  return v3;
}
