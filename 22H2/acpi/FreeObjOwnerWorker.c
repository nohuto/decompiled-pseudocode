/*
 * XREFs of FreeObjOwnerWorker @ 0x1C004B810
 * Callers:
 *     <none>
 * Callees:
 *     AMLIRestartContext @ 0x1C0048D2C (AMLIRestartContext.c)
 *     FreeObjOwner @ 0x1C004B670 (FreeObjOwner.c)
 */

void __fastcall FreeObjOwnerWorker(struct _EX_RUNDOWN_REF *StartContext)
{
  __int64 Count; // rbx

  Count = StartContext[7].Count;
  FreeObjOwner(0LL, StartContext);
  AMLIRestartContext(Count);
}
