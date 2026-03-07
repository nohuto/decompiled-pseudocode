char __fastcall KiAcquirePrcbLocksForPreemptionAttemptSlowPath(__int64 a1, int a2, int *a3)
{
  int i; // r9d
  int v7; // edi
  unsigned __int8 v8; // bl
  _BYTE *v9; // rax

  for ( i = *a3 & 1; ; i = v7 )
  {
    v7 = a2;
    v8 = **(_BYTE **)(a1 + 56);
    LODWORD(v9) = v8 >> 7;
    if ( a2 < (int)v9 )
      v7 = **(unsigned __int8 **)(a1 + 56) >> 7;
    if ( v7 == i )
      break;
    if ( v7 < i )
    {
      LOBYTE(v9) = KiDowngradeIsolationUnitLockHandle(a3, v7);
      return (char)v9;
    }
    LOBYTE(v9) = KiTryUpgradeIsolationUnitLockHandle(a3, v7);
    if ( (_BYTE)v9 )
      return (char)v9;
    KiReleasePrcbLocksForIsolationUnit((__int64 *)a3);
    KiAcquirePrcbLocksForIsolationUnit(a1, v7, (__int64 *)a3);
    v9 = *(_BYTE **)(a1 + 56);
    if ( ((*v9 ^ v8) & 0x80u) == 0 )
      return (char)v9;
  }
  return (char)v9;
}
