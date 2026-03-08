/*
 * XREFs of AMLIDebugger @ 0x1C004D630
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484D0 (AMLIGetNameSpaceObjectNoLock.c)
 *     CatError @ 0x1C004D728 (CatError.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     BreakPoint @ 0x1C00554D0 (BreakPoint.c)
 *     Load @ 0x1C00556C0 (Load.c)
 *     ProcessLoadTable @ 0x1C0058610 (ProcessLoadTable.c)
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 *     ParseScope @ 0x1C005C220 (ParseScope.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00AB124 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C004D7B8 (ConPrintf.c)
 *     Debugger @ 0x1C004E9A4 (Debugger.c)
 */

__int64 AMLIDebugger()
{
  __int64 result; // rax

  result = (unsigned int)gdwfAMLIInit;
  if ( (gdwfAMLIInit & 0x40) != 0 )
  {
    if ( (gDebugger & 4) != 0 )
    {
      return ConPrintf("\nRe-entering AML debugger is not allowed.\nType 'g' to go back to the AML debugger.\n");
    }
    else
    {
      _InterlockedAnd(&gDebugger, 0xFFFFFFFD);
      _InterlockedOr(&gDebugger, 1u);
      result = Debugger();
      _InterlockedAnd(&gDebugger, 0xFFFFFFFC);
    }
  }
  return result;
}
