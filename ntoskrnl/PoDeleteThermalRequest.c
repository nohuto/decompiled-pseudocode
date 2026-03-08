/*
 * XREFs of PoDeleteThermalRequest @ 0x14097FC00
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x1402BDBE4 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x14097FEC8 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
