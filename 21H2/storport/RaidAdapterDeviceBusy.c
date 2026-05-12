/*
 * XREFs of RaidAdapterDeviceBusy @ 0x1C002C3EC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00027A0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006674 (RaidAdapterFindUnit.c)
 *     WPP_SF_ddd @ 0x1C00335BC (WPP_SF_ddd.c)
 */

void __fastcall RaidAdapterDeviceBusy(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int8 v4; // bl
  __int64 Unit; // rax
  __int64 v6; // rsi
  int v7; // edi
  volatile LONG *v8; // rbx
  KIRQL v9; // al

  v4 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v6 = Unit;
  if ( Unit )
  {
    v7 = 0x7FFFFFFF;
    v8 = (volatile LONG *)(Unit + 728);
    if ( a3 < 0x7FFFFFFF )
      v7 = a3;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(Unit + 728));
    if ( v7 > *(_DWORD *)(v6 + 732) )
      v7 = *(_DWORD *)(v6 + 732);
    *(_DWORD *)(v6 + 688) = v7;
    ExReleaseSpinLockExclusive(v8, v9);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      54LL,
      &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
      v4,
      BYTE1(a2),
      BYTE2(a2));
  }
}
