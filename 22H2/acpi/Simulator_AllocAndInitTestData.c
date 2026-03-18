/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x1C0048EE4
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C00493C0 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C004961C (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C0049718 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C00497EC (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C0049890 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AB370 (Simulator_NotifyTablesAreLoaded.c)
 * Callees:
 *     memset @ 0x1C0002180 (memset.c)
 */

void *Simulator_AllocAndInitTestData()
{
  void *Pool2; // rax
  void *v1; // rbx

  Pool2 = (void *)ExAllocatePool2(64LL, 80LL, 1145131841LL);
  v1 = Pool2;
  if ( Pool2 )
    memset(Pool2, 0, 0x50uLL);
  return v1;
}
