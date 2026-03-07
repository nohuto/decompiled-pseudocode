void __fastcall AMLIFinalizeObject(_QWORD *a1, char a2)
{
  KIRQL v3; // al
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rbx
  KSPIN_LOCK *v7; // rsi
  KIRQL v8; // al
  signed __int32 v9; // ecx
  _QWORD *v10; // rbx
  bool v11; // di

  dword_1C006F938 = 0;
  pszDest = 0;
  if ( a2 )
  {
    ExAcquireSpinLockShared(&ACPINamespaceLock);
    v3 = SetObjectsFlag(*a1);
    v5 = *(_QWORD *)(v4 + 136);
    if ( v5 )
      v3 = SetObjectsFlag(v5);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v3);
  }
  v6 = *(_QWORD *)(*a1 + 48LL);
  if ( v6 )
  {
    v7 = (KSPIN_LOCK *)(v6 + 40);
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 40));
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 48), 0xFFFFFFFF);
    v10 = (_QWORD *)(v6 + 56);
    v11 = v9 == 1 && *v10;
    KeReleaseSpinLock(v7, v8);
    if ( v11 )
      AMLIRestartContext(*v10);
  }
}
