/*
 * XREFs of ApiSetEditionDestroyEdgePalmRejectionZones @ 0x1C0205E0C
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CD924 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionDestroyEdgePalmRejectionZones(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296B50 && (int)qword_1C0296B50() >= 0 && qword_1C0296B58 )
    return (unsigned int)qword_1C0296B58(a1);
  return v1;
}
