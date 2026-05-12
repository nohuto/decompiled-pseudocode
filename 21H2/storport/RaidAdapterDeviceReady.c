/*
 * XREFs of RaidAdapterDeviceReady @ 0x1C002C4C0
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006674 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C0007938 (RaidRestartIoQueue.c)
 *     WPP_SF_ddd @ 0x1C00335BC (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceReady(__int64 a1, int a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi
  volatile LONG *v5; // rbx
  KIRQL v6; // al

  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    v5 = (volatile LONG *)(Unit + 728);
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 728));
    *(_DWORD *)(v4 + 688) = 0;
    ExReleaseSpinLockExclusive(v5, v6);
    RaidRestartIoQueue(v4, 0);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      55LL,
      &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
      v2,
      BYTE1(a2),
      BYTE2(a2));
  }
}
