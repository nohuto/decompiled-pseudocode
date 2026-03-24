/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C007ECD4
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C007EC40 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C02508B0 )
    qword_1C02508B0(qword_1C02508A0);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C02508B0 )
    qword_1C02508B0(qword_1C02508A0);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
