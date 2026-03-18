/*
 * XREFs of ApiSetGetUserHandedness @ 0x1C0207DA4
 * Callers:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C017B7B0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     rimAbIsPointInPenDeadzone @ 0x1C017B92C (rimAbIsPointInPenDeadzone.c)
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C019B738 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?_Report@PalmTelemetry@@AEAAXK@Z @ 0x1C01B1588 (-_Report@PalmTelemetry@@AEAAXK@Z.c)
 *     ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C01B193C (-_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     GetUserHandedness @ 0x1C0233098 (GetUserHandedness.c)
 */

__int64 ApiSetGetUserHandedness()
{
  unsigned int v0; // ebx

  v0 = 1;
  if ( qword_1C02962C8 && (int)qword_1C02962C8() >= 0 )
    return (unsigned int)GetUserHandedness();
  return v0;
}
