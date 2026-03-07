char __fastcall PspUnlockJobMemoryLimitsShared(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *v4; // rax

  v2 = a1 + 1248;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1248), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 1248));
  LOBYTE(v4) = KeAbPostRelease(v2);
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
    {
      v4 = (_QWORD *)(a2 + 152);
      if ( (_QWORD *)*v4 != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v4;
}
