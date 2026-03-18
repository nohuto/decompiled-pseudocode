/*
 * XREFs of PoDeleteThermalRequest @ 0x140982CB0
 * Callers:
 *     <none>
 * Callees:
 *     PoDestroyReasonContext @ 0x14032D130 (PoDestroyReasonContext.c)
 *     PopDeactiveThermalRequest @ 0x140982F78 (PopDeactiveThermalRequest.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PoDeleteThermalRequest(_QWORD **P)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  PopDeactiveThermalRequest();
  PoDestroyReasonContext(P[3], v2, v3, v4);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
