__int64 __fastcall KiReparkIdlingProcessorIfNecessary(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v7; // r9
  __int64 v8; // rbp

  v2 = a1[24];
  v4 = a1[25];
  if ( (v4 & *(_QWORD *)(v2 + 80)) == 0 || (v4 & *(_QWORD *)(v2 + 96)) == 0 )
    return 0LL;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 112));
  KiAcquirePrcbLocksForIsolationUnit((__int64)a1, 0, a2);
  v8 = a1[2];
  if ( !v8 || v8 == a1[3] )
  {
    LOBYTE(v7) = 1;
    KiParkCurrentProcessor(a1, v2, a2, v7);
    return 0LL;
  }
  else
  {
    KiDowngradeIsolationUnitLockHandle(a2, 0);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v2 + 112));
    return v8;
  }
}
