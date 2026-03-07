char __fastcall PspUnlockJobListShared(__int64 a1)
{
  _QWORD *v2; // rax

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
  LOBYTE(v2) = KeAbPostRelease((ULONG_PTR)&PspJobListLock);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    v2 = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*v2 != v2 )
      LOBYTE(v2) = KiCheckForKernelApcDelivery();
  }
  return (char)v2;
}
