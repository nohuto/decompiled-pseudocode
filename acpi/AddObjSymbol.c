void __fastcall AddObjSymbol(__int64 a1, __int64 a2)
{
  _QWORD *Pool2; // rax
  __int64 v5; // rbx
  KIRQL v6; // dl

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1399614785LL);
  v5 = (__int64)Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0LL;
    Pool2[1] = 0LL;
    Pool2[2] = a1;
    Pool2[3] = a2;
    v6 = ExAcquireSpinLockExclusive(&ACPINamespaceLock);
    if ( qword_1C006F860 )
    {
      *(_QWORD *)(v5 + 8) = qword_1C006F860;
      *(_QWORD *)qword_1C006F860 = v5;
    }
    qword_1C006F860 = v5;
    ExReleaseSpinLockExclusive(&ACPINamespaceLock, v6);
  }
}
