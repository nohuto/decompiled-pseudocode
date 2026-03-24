/*
 * XREFs of AlpcpFreeCompletionList @ 0x1406A6214
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1405E20E8 (AlpcpDoPortCleanup.c)
 *     NtAlpcSetInformation @ 0x1406FF480 (NtAlpcSetInformation.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x1406A6270 (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpFreeCompletionList(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  AlpcpUnregisterCompletionListDatabase(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
