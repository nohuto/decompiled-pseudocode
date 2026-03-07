char __fastcall MiUnlockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx
  _QWORD *v4; // rax

  v2 = (signed __int64 *)(a1 + 216);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 216), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  LOBYTE(v4) = KeAbPostRelease((ULONG_PTR)v2);
  if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF )
  {
    v4 = (_QWORD *)(a2 + 152);
    if ( (_QWORD *)*v4 != v4 )
      LOBYTE(v4) = KiCheckForKernelApcDelivery();
  }
  return (char)v4;
}
