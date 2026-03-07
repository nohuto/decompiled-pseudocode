char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rdi
  _QWORD *v5; // rax

  if ( a1 != a2 )
  {
    v4 = a1 + 1248;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1248), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1248));
    LOBYTE(v5) = KeAbPostRelease(v4);
  }
  if ( a3 )
  {
    if ( (*(_WORD *)(a3 + 486))++ == 0xFFFF )
    {
      v5 = (_QWORD *)(a3 + 152);
      if ( (_QWORD *)*v5 != v5 )
        LOBYTE(v5) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v5;
}
