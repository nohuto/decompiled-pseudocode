/*
 * XREFs of AlpcpFreeCompletionList @ 0x1409766D0
 * Callers:
 *     NtAlpcSetInformation @ 0x140689DC0 (NtAlpcSetInformation.c)
 *     AlpcpDoPortCleanup @ 0x140716E08 (AlpcpDoPortCleanup.c)
 * Callees:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     AlpcpUnregisterCompletionListDatabase @ 0x140976FBC (AlpcpUnregisterCompletionListDatabase.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
