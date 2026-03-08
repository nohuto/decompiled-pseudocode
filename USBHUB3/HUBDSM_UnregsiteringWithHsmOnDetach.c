/*
 * XREFs of HUBDSM_UnregsiteringWithHsmOnDetach @ 0x1C0020670
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_UnregisterWithHSM @ 0x1C0011748 (HUBMUX_UnregisterWithHSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_UnregsiteringWithHsmOnDetach(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_UnregisterWithHSM(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3006LL);
  return 4077LL;
}
