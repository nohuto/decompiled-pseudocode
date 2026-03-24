/*
 * XREFs of DxDdCleanupDxGraphics @ 0x1C007D5F4
 * Callers:
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C007D560 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 DxDdCleanupDxGraphics()
{
  if ( qword_1C0251890 )
    qword_1C0251890(qword_1C0251880);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  if ( qword_1C0251890 )
    qword_1C0251890(qword_1C0251880);
  memset(&gDxgkInterface, 0, 0x328uLL);
  if ( gpDxgkFileObject )
    ObfDereferenceObject(gpDxgkFileObject);
  gpDxgkFileObject = 0LL;
  gpDxgkDeviceObject = 0LL;
  return 0LL;
}
