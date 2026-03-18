/*
 * XREFs of SmKmStoreDereference @ 0x1405FBB0C
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x1405FBC00 (SmKmStoreTerminateWorker.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14035F5E8 (SmKmStoreRefFromStoreIndex.c)
 */

void __fastcall SmKmStoreDereference(__int64 a1, __int16 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rax

  v2 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, a2 & 0x3FF);
  ExReleaseRundownProtection(v2 + 1);
}
