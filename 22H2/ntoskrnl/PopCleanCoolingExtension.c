/*
 * XREFs of PopCleanCoolingExtension @ 0x1408E2B0C
 * Callers:
 *     PopAssociateThermalRequest @ 0x14079AC80 (PopAssociateThermalRequest.c)
 *     PopDeactiveThermalRequest @ 0x1408E2C38 (PopDeactiveThermalRequest.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14037F3E0 (PnpUnregisterPlugPlayNotification.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PopCleanCoolingExtension(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[7];
  if ( v2 )
    PnpUnregisterPlugPlayNotification(v2, 1);
  if ( *((_BYTE *)P + 64) )
    ((void (__fastcall *)(_QWORD))P[14])(P[12]);
  ExFreePoolWithTag(P, 0x6C6F4350u);
}
