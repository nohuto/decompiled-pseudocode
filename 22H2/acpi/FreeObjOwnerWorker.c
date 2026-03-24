/*
 * XREFs of FreeObjOwnerWorker @ 0x1C0065330
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C0063670 (AMLIRestartContext.c)
 *     FreeObjOwner @ 0x1C006517C (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
