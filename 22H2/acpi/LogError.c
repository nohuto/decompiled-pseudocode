/*
 * XREFs of LogError @ 0x1C002A2EC
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     ParseString @ 0x1C00020D8 (ParseString.c)
 *     LogOp2_32 @ 0x1C0002198 (LogOp2_32.c)
 *     FreeObjData @ 0x1C00033D0 (FreeObjData.c)
 *     ParseRelease @ 0x1C0003760 (ParseRelease.c)
 *     SyncEvalObject @ 0x1C0004490 (SyncEvalObject.c)
 *     RunContext @ 0x1C0004DD0 (RunContext.c)
 *     AsyncEvalObject @ 0x1C0005890 (AsyncEvalObject.c)
 *     CreateNameSpaceObject @ 0x1C0006720 (CreateNameSpaceObject.c)
 *     ParseCall @ 0x1C0006B60 (ParseCall.c)
 *     ParseTerm @ 0x1C0007480 (ParseTerm.c)
 *     ParseScope @ 0x1C0008890 (ParseScope.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0009160 (GetNameSpaceObjectNoLock.c)
 *     ParseSuperName @ 0x1C0009350 (ParseSuperName.c)
 *     IfElse @ 0x1C0009C70 (IfElse.c)
 *     ValidateArgTypes @ 0x1C0009F50 (ValidateArgTypes.c)
 *     AccFieldUnit @ 0x1C000A0B0 (AccFieldUnit.c)
 *     DupObjData @ 0x1C000A400 (DupObjData.c)
 *     Return @ 0x1C000A590 (Return.c)
 *     ParseAcquire @ 0x1C000A6C0 (ParseAcquire.c)
 *     NewObjData @ 0x1C000A9E8 (NewObjData.c)
 *     Store @ 0x1C000AAB0 (Store.c)
 *     WriteObject @ 0x1C000AC60 (WriteObject.c)
 *     While @ 0x1C000AE00 (While.c)
 *     Index @ 0x1C000B100 (Index.c)
 *     ValidateTarget @ 0x1C000B264 (ValidateTarget.c)
 *     Buffer @ 0x1C000B340 (Buffer.c)
 *     AMLIEvalPkgDataElement @ 0x1C000F09C (AMLIEvalPkgDataElement.c)
 *     PerformMutexDriverCallbacks @ 0x1C0010328 (PerformMutexDriverCallbacks.c)
 *     InitMutex @ 0x1C0010410 (InitMutex.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     ExprOp2_64 @ 0x1C0020F60 (ExprOp2_64.c)
 *     Package @ 0x1C0021320 (Package.c)
 *     ParseName @ 0x1C00214C4 (ParseName.c)
 *     ParseNameTail @ 0x1C00215A0 (ParseNameTail.c)
 *     SleepStall @ 0x1C0021740 (SleepStall.c)
 *     ParseAndGetNameSpaceObject @ 0x1C00217BC (ParseAndGetNameSpaceObject.c)
 *     PushCall @ 0x1C00219CC (PushCall.c)
 *     Field @ 0x1C0021B10 (Field.c)
 *     ParseFieldList @ 0x1C0021C38 (ParseFieldList.c)
 *     ParseField @ 0x1C0021D30 (ParseField.c)
 *     ParseObjName @ 0x1C0021FB4 (ParseObjName.c)
 *     ParseArg @ 0x1C0022094 (ParseArg.c)
 *     ParsePackage @ 0x1C0022100 (ParsePackage.c)
 *     ParseOpcode @ 0x1C0022530 (ParseOpcode.c)
 *     ParseIntObj @ 0x1C0022724 (ParseIntObj.c)
 *     ParseArgObj @ 0x1C00227E4 (ParseArgObj.c)
 *     PushScope @ 0x1C0022A38 (PushScope.c)
 *     WriteField @ 0x1C0022B30 (WriteField.c)
 *     CopyObjBuffer @ 0x1C0022C68 (CopyObjBuffer.c)
 *     Acquire @ 0x1C0022CF0 (Acquire.c)
 *     PushFrame @ 0x1C0022DD8 (PushFrame.c)
 *     Release @ 0x1C0022E60 (Release.c)
 *     Processor @ 0x1C0023330 (Processor.c)
 *     NewObjOwner @ 0x1C0023628 (NewObjOwner.c)
 *     LoadDDB @ 0x1C002372C (LoadDDB.c)
 *     IndexField @ 0x1C00237F0 (IndexField.c)
 *     PowerRes @ 0x1C0023BB0 (PowerRes.c)
 *     NewGlobalHeap @ 0x1C0024270 (NewGlobalHeap.c)
 *     ReadField @ 0x1C0024420 (ReadField.c)
 *     ReadBuffField @ 0x1C00244E8 (ReadBuffField.c)
 *     GetFieldUnitRegionObj @ 0x1C00248F8 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0024994 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C0024C10 (PushAccFieldObj.c)
 *     LoadMemDDB @ 0x1C0024D60 (LoadMemDDB.c)
 *     Load @ 0x1C0024DC0 (Load.c)
 *     Notify @ 0x1C00250D0 (Notify.c)
 *     WriteFieldLoop @ 0x1C0027250 (WriteFieldLoop.c)
 *     Method @ 0x1C0028A20 (Method.c)
 *     PushTerm @ 0x1C0028F14 (PushTerm.c)
 *     CreateXField @ 0x1C00291A8 (CreateXField.c)
 *     IncDec @ 0x1C00297D0 (IncDec.c)
 *     WriteCookAccess @ 0x1C0029900 (WriteCookAccess.c)
 *     OpRegion @ 0x1C0029EA0 (OpRegion.c)
 *     MapUnmapPhysMem @ 0x1C0029FF0 (MapUnmapPhysMem.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C002A10C (AmlpValidateFirmwareMemoryAddress.c)
 *     ProcessIncDec @ 0x1C002A480 (ProcessIncDec.c)
 *     AMLIRegEventHandler @ 0x1C002C19C (AMLIRegEventHandler.c)
 *     RegEventHandler @ 0x1C002C390 (RegEventHandler.c)
 *     RegRSAccess @ 0x1C002C3B8 (RegRSAccess.c)
 *     AcquireGL @ 0x1C0065094 (AcquireGL.c)
 *     RegOpcodeHandler @ 0x1C0065B80 (RegOpcodeHandler.c)
 *     LoadFieldUnitDDB @ 0x1C0066D9C (LoadFieldUnitDDB.c)
 *     BankField @ 0x1C0066FD0 (BankField.c)
 *     CreateField @ 0x1C00671F0 (CreateField.c)
 *     InitEvent @ 0x1C0067370 (InitEvent.c)
 *     RawFieldAccess @ 0x1C0067D58 (RawFieldAccess.c)
 *     NestAsyncEvalObject @ 0x1C00683FC (NestAsyncEvalObject.c)
 *     ResetSignal @ 0x1C0068A00 (ResetSignal.c)
 *     Concat @ 0x1C0068C00 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0068F10 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0069110 (CopyObject.c)
 *     LoadTable @ 0x1C00695C0 (LoadTable.c)
 *     MidString @ 0x1C0069D60 (MidString.c)
 *     ObjTypeSizeOf @ 0x1C0069FC0 (ObjTypeSizeOf.c)
 *     ProcessLoadTable @ 0x1C006A1F0 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C006A850 (ToDecStr.c)
 *     ToHexStr @ 0x1C006AC20 (ToHexStr.c)
 *     ToString @ 0x1C006AF40 (ToString.c)
 *     Wait @ 0x1C006B120 (Wait.c)
 *     ParseFieldConnection @ 0x1C006BA34 (ParseFieldConnection.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BDA5C (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00BE478 (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000C948 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C002A3A4 (WPP_RECORDER_SF_Ds.c)
 */

void __fastcall LogError(int a1)
{
  int v1; // edx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // [rsp+20h] [rbp-28h]

  v1 = 0;
  dword_1C0082908 = a1;
  if ( off_1C00809F8 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C00809F0 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C00809F0 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(&pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, *((const char **)&unk_1C00809F0 + 2 * v1 + 1));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C00809F0 + v5 + 1));
  }
}
