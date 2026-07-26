/*
 * XREFs of ?ndisAoAcIsDataPathPdcActivatorPresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005B380
 * Callers:
 *     ?ndisMInitializePmParametersForSuspend@@YA?AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A63D4 (-ndisMInitializePmParametersForSuspend@@YA-AU_NDIS_PM_PARAMETERS@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisAoAcIsDataPathPdcActivatorPresent(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  char v2; // bl
  KIRQL v3; // al

  AoAc = a1->AoAc;
  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  if ( *((int *)AoAc + 140) > 0 || *((int *)AoAc + 141) > 0 && ndisPowerRefManagementState == 1 )
    v2 = 1;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v3);
  return v2;
}
