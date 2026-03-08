/*
 * XREFs of DpiMiracastStartSessionRequestCallback @ 0x1C039B630
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastTearDownAssociation @ 0x1C0060BE0 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastStartSessionRequestCallback(_DWORD *P, int *a2)
{
  __int64 v2; // rsi
  IRP *v5; // rcx
  int v6; // r8d

  v2 = *(_QWORD *)P;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)P + 32LL);
  v5 = *(IRP **)(v2 + 424);
  *(_QWORD *)(v2 + 88) = KeGetCurrentThread();
  IoFreeIrp(v5);
  *(_QWORD *)(v2 + 424) = 0LL;
  *(_QWORD *)(v2 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v2 + 32);
  if ( *a2 < 0 )
  {
    v6 = -2147483637;
    if ( *a2 != -1073741536 )
      v6 = -2147483647;
    DpiMiracastTearDownAssociation((char *)v2, P[2], v6, 1u, 0);
  }
  DpiMiracastReleaseMiracastDeviceContext((int *)v2, v2);
  ExFreePoolWithTag(P, 0);
}
