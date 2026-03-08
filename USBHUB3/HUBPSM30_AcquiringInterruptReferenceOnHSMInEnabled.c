/*
 * XREFs of HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled @ 0x1C0011A70
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_AcquireInterruptReference @ 0x1C0010F3C (HUBMUX_AcquireInterruptReference.c)
 */

__int64 __fastcall HUBPSM30_AcquiringInterruptReferenceOnHSMInEnabled(__int64 a1)
{
  return HUBMUX_AcquireInterruptReference(*(volatile signed __int32 **)(a1 + 960));
}
