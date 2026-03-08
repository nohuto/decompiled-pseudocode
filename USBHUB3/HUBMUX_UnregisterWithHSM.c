/*
 * XREFs of HUBMUX_UnregisterWithHSM @ 0x1C0011748
 * Callers:
 *     HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup @ 0x1C0020640 (HUBDSM_UnregisteringWithHSMOnDetachAfterCleanup.c)
 *     HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C0020670 (HUBDSM_UnregsiteringWithHsmOnDetach.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_UnregisterWithHSM(__int64 a1)
{
  __int64 v2; // rdi
  char v3; // bp
  bool v4; // si
  KIRQL v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // edx

  if ( (*(_DWORD *)(a1 + 1636) & 0x40) != 0 )
  {
    *(_OWORD *)(a1 + 1516) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1636), 0xFFFFFFBF);
  }
  v2 = *(_QWORD *)a1 + 2320LL;
  v3 = 0;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (*(_DWORD *)(a1 + 240) & 2) != 0 )
  {
    --*(_DWORD *)(v2 + 28);
    v3 = 1;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFFD);
  }
  if ( (*(_DWORD *)(a1 + 240) & 4) != 0 )
    v4 = _InterlockedAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 240), 0xFFFFFFF7);
  v6 = *(_QWORD *)(a1 + 192);
  if ( *(_QWORD *)(v6 + 8) != a1 + 192 || (v7 = *(_QWORD **)(a1 + 200), *v7 != a1 + 192) )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
             WdfDriverGlobals,
             v8,
             "DSM Registration Tag",
             2712LL,
             "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
  if ( v4 )
  {
    if ( v3 )
      v10 = 2018;
    else
      v10 = 2014;
    return HUBSM_AddEvent(*(_QWORD *)a1 + 1264LL, v10);
  }
  return result;
}
