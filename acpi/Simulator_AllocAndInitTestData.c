/*
 * XREFs of Simulator_AllocAndInitTestData @ 0x1C0048EC4
 * Callers:
 *     Simulator_NotifyNamespaceCollision @ 0x1C00493A0 (Simulator_NotifyNamespaceCollision.c)
 *     Simulator_Pre_AsyncEvalObject @ 0x1C00495FC (Simulator_Pre_AsyncEvalObject.c)
 *     Simulator_Pre_EvalNameSpaceObject @ 0x1C00496F8 (Simulator_Pre_EvalNameSpaceObject.c)
 *     Simulator_Pre_RegEventHandler @ 0x1C00497CC (Simulator_Pre_RegEventHandler.c)
 *     Simulator_RefreshTree @ 0x1C0049870 (Simulator_RefreshTree.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1C00AB360 (Simulator_NotifyTablesAreLoaded.c)
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
