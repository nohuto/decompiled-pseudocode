/*
 * XREFs of AMLIDebugger @ 0x1C004D650
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     AMLIAsyncEvalObject @ 0x1C0047908 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047BBC (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F58 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484F0 (AMLIGetNameSpaceObjectNoLock.c)
 *     CatError @ 0x1C004D748 (CatError.c)
 *     RunContext @ 0x1C0053F54 (RunContext.c)
 *     BreakPoint @ 0x1C00554F0 (BreakPoint.c)
 *     Load @ 0x1C00556E0 (Load.c)
 *     ProcessLoadTable @ 0x1C0058630 (ProcessLoadTable.c)
 *     ParseOpcode @ 0x1C005BD60 (ParseOpcode.c)
 *     ParseScope @ 0x1C005C240 (ParseScope.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C00AAAC0 (AMLIInitialize.c)
 *     AMLILoadDDB @ 0x1C00AB134 (AMLILoadDDB.c)
 * Callees:
 *     ConPrintf @ 0x1C004D7D8 (ConPrintf.c)
 *     Debugger @ 0x1C004E9C4 (Debugger.c)
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
