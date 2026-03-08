/*
 * XREFs of _anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting @ 0x1C022E1DC
 * Callers:
 *     ?AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ @ 0x1C022B148 (-AppCompatWheelRoutingRequested@CMouseProcessor@@AEBA_NXZ.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C023042C (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall anonymous_namespace_::HasThreadRequestedFocusMouseWheelRouting(__int64 a1)
{
  char v1; // bl

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 812LL) & 0x8000) != 0 )
    return 1;
  v1 = 0;
  if ( qword_1C02D6FC8 )
  {
    if ( (qword_1C02D6FC8(a1) & 0x10000000000000LL) != 0 )
      return 1;
  }
  return v1;
}
