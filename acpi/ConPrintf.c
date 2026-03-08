/*
 * XREFs of ConPrintf @ 0x1C004D7B8
 * Callers:
 *     InsertReadyQueue @ 0x1C00057E4 (InsertReadyQueue.c)
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C00484D0 (AMLIGetNameSpaceObjectNoLock.c)
 *     AMLIDebugger @ 0x1C004D630 (AMLIDebugger.c)
 *     CatError @ 0x1C004D728 (CatError.c)
 *     DebugInPort @ 0x1C004DA10 (DebugInPort.c)
 *     DebugNotify @ 0x1C004DB10 (DebugNotify.c)
 *     DebugQuit @ 0x1C004DDA0 (DebugQuit.c)
 *     DebugRunMethod @ 0x1C004DE10 (DebugRunMethod.c)
 *     PrintBuffData @ 0x1C004E408 (PrintBuffData.c)
 *     PrintIndent @ 0x1C004E484 (PrintIndent.c)
 *     PrintObject @ 0x1C004E4C8 (PrintObject.c)
 *     RunMethodCallBack @ 0x1C004E5F0 (RunMethodCallBack.c)
 *     AccFieldUnit @ 0x1C0051630 (AccFieldUnit.c)
 *     DumpObject @ 0x1C0051E98 (DumpObject.c)
 *     RunContext @ 0x1C0053F34 (RunContext.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     ProcessEvalObj @ 0x1C0054C60 (ProcessEvalObj.c)
 *     BreakPoint @ 0x1C00554D0 (BreakPoint.c)
 *     ParsePackage @ 0x1C0058160 (ParsePackage.c)
 *     ToDecStr @ 0x1C0058CC0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590B0 (ToHexStr.c)
 *     DbgParseOneArg @ 0x1C0059EC4 (DbgParseOneArg.c)
 *     ParseArgObj @ 0x1C005A5E0 (ParseArgObj.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseField @ 0x1C005AB30 (ParseField.c)
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C005B3A0 (ParseIntObj.c)
 *     ParseInteger @ 0x1C005B588 (ParseInteger.c)
 *     ParseLocalObj @ 0x1C005B7EC (ParseLocalObj.c)
 *     ParseName @ 0x1C005B860 (ParseName.c)
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 *     ParseScope @ 0x1C005C220 (ParseScope.c)
 *     ParseString @ 0x1C005C440 (ParseString.c)
 *     ParseSuperName @ 0x1C005C56C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
 *     AMLILoadDDB @ 0x1C00AB124 (AMLILoadDDB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     RtlStringCchVPrintfA @ 0x1C0047260 (RtlStringCchVPrintfA.c)
 */

ULONG ConPrintf(NTSTRSAFE_PCSTR pszFormat, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, pszFormat);
  RtlStringCchVPrintfA(byte_1C0070460, 0x400uLL, pszFormat, va);
  if ( qword_1C006F918 )
    return qword_1C006F918(byte_1C0070460, qword_1C006F920);
  else
    return DbgPrintEx(0x19u, 3u, byte_1C0070460);
}
