/*
 * XREFs of PoDeleteThermalRequest @ 0x1408E2A20
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14034BC54 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x1408E2C38 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
