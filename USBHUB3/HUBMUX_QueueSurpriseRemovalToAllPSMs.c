void __fastcall HUBMUX_QueueSurpriseRemovalToAllPSMs(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 i; // rax
  __int64 v4; // rsi
  KIRQL v5; // al

  v1 = a1 + 2320;
  v2 = a1 + 2360;
  for ( i = *(_QWORD *)(a1 + 2360); ; i = *(_QWORD *)(v4 + 248) )
  {
    v4 = i - 248;
    if ( v2 == i )
      break;
    (*(void (__fastcall **)(__int64, __int64))(v4 + 1240))(v4, 3038LL);
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
  _InterlockedOr((volatile signed __int32 *)(v1 + 32), 8u);
  KeReleaseSpinLock((PKSPIN_LOCK)v1, v5);
}
