/*
 * XREFs of ConPrintf @ 0x1C0065D60
 * Callers:
 *     ProcessEvalObj @ 0x1C0001CF0 (ProcessEvalObj.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     InsertReadyQueue @ 0x1C00047A0 (InsertReadyQueue.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     ParseSuperName @ 0x1C0009350 (ParseSuperName.c)
 *     AccFieldUnit @ 0x1C000A0B0 (AccFieldUnit.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AF30 (AMLIGetNameSpaceObjectNoLock.c)
 *     ReadObject @ 0x1C000B4C0 (ReadObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 *     ParseName @ 0x1C00214C4 (ParseName.c)
 *     ParseFieldList @ 0x1C0021C38 (ParseFieldList.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     ParsePackage @ 0x1C0022100 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0022530 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C0022724 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C00227E4 (ParseArgObj.c)
 *     ParseLocalObj @ 0x1C00232CC (ParseLocalObj.c)
 *     ParseInteger @ 0x1C002CA40 (ParseInteger.c)
 *     AMLIDebugger @ 0x1C0065C80 (AMLIDebugger.c)
 *     CatError @ 0x1C0065CD0 (CatError.c)
 *     DebugInPort @ 0x1C0066040 (DebugInPort.c)
 *     DebugNotify @ 0x1C0066140 (DebugNotify.c)
 *     DebugQuit @ 0x1C00663D0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C0066440 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C0066874 (PrintBuffData.c)
 *     PrintIndent @ 0x1C00668F0 (PrintIndent.c)
 *     PrintObject @ 0x1C0066934 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C0066A50 (RunMethodCallBack.c)
 *     DumpObject @ 0x1C0067738 (DumpObject.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 *     BreakPoint @ 0x1C0068960 (BreakPoint.c)
 *     ToDecStr @ 0x1C006A850 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AC20 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C006B810 (DbgParseOneArg.c)
 *     AMLILoadDDB @ 0x1C00BE388 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0063134 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0083500, 0x400uLL, pszFormat, va);
  if ( qword_1C00828E8 )
    return qword_1C00828E8(byte_1C0083500, qword_1C00828F0);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0083500);
}
