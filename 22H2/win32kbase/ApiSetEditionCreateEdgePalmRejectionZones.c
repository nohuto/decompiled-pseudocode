/*
 * XREFs of ApiSetEditionCreateEdgePalmRejectionZones @ 0x1C0205D68
 * Callers:
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CDA78 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionCreateEdgePalmRejectionZones(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296B40 && (int)qword_1C0296B40() >= 0 && qword_1C0296B48 )
    return (unsigned int)qword_1C0296B48(a1);
  return v1;
}
