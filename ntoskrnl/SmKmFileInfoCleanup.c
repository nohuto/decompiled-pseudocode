/*
 * XREFs of SmKmFileInfoCleanup @ 0x1409D5B90
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmFileInfoDuplicate @ 0x1409D5C34 (SmKmFileInfoDuplicate.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D6D88 (SmKmStoreFileCreateForIoType.c)
 *     SmcCacheCleanup @ 0x1409D7CF4 (SmcCacheCleanup.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoReuseIrp @ 0x1402B1EB0 (IoReuseIrp.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     IoUnregisterPlugPlayNotification @ 0x1406F4390 (IoUnregisterPlugPlayNotification.c)
 *     SmKmSendUsageNotification @ 0x1409D6804 (SmKmSendUsageNotification.c)
 */

BOOLEAN __fastcall SmKmFileInfoCleanup(__int64 a1)
{
  BOOLEAN v2; // al
  void *v3; // rcx
  BOOLEAN v4; // di
  void *v5; // rcx
  IRP *v6; // rcx
  void *v7; // rcx
  struct _PRIVILEGE_SET *v8; // rcx

  v2 = IoSetThreadHardErrorMode(0);
  v3 = *(void **)(a1 + 32);
  v4 = v2;
  if ( v3 )
    IoUnregisterPlugPlayNotification(v3);
  v5 = *(void **)(a1 + 16);
  if ( v5 )
    ObfDereferenceObject(v5);
  v6 = *(IRP **)(a1 + 40);
  if ( v6 )
  {
    IoReuseIrp(v6, 0);
    SmKmSendUsageNotification(*(PIRP *)(a1 + 40), *(PFILE_OBJECT *)(a1 + 8));
    IoFreeIrp(*(PIRP *)(a1 + 40));
  }
  v7 = *(void **)(a1 + 8);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( *(_QWORD *)a1 )
    ZwClose(*(HANDLE *)a1);
  v8 = *(struct _PRIVILEGE_SET **)(a1 + 48);
  if ( v8 )
    CmSiFreeMemory(v8);
  return IoSetThreadHardErrorMode(v4);
}
