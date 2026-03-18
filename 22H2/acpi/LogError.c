/*
 * XREFs of LogError @ 0x1C004E244
 * Callers:
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     WriteCookAccess @ 0x1C0005DA0 (WriteCookAccess.c)
 *     Notify @ 0x1C00062C0 (Notify.c)
 *     SleepStall @ 0x1C0006400 (SleepStall.c)
 *     ObjTypeSizeOf @ 0x1C00067D0 (ObjTypeSizeOf.c)
 *     AMLIEvalPackageElement @ 0x1C0047D84 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F58 (AMLIEvalPkgDataElement.c)
 *     AMLIRegEventHandler @ 0x1C0048A9C (AMLIRegEventHandler.c)
 *     AMLIAddNamespaceOverride @ 0x1C004A2C8 (AMLIAddNamespaceOverride.c)
 *     AcquireGL @ 0x1C004ACD0 (AcquireGL.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C004AD68 (AmlpValidateFirmwareMemoryAddress.c)
 *     DupObjData @ 0x1C004AF24 (DupObjData.c)
 *     FreeObjData @ 0x1C004B564 (FreeObjData.c)
 *     GetFieldUnitRegionObj @ 0x1C004B964 (GetFieldUnitRegionObj.c)
 *     MapUnmapPhysMem @ 0x1C004BF60 (MapUnmapPhysMem.c)
 *     NewObjData @ 0x1C004C1BC (NewObjData.c)
 *     NewObjOwner @ 0x1C004C344 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C004CA14 (PerformMutexDriverCallbacks.c)
 *     RegEventHandler @ 0x1C004CC2C (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x1C004CC88 (RegOpcodeHandler.c)
 *     RegRSAccess @ 0x1C004CD44 (RegRSAccess.c)
 *     ValidateArgTypes @ 0x1C004CF0C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D510 (ValidateTarget.c)
 *     NewGlobalHeap @ 0x1C004EFC4 (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C004F07C (NewLocalHeap.c)
 *     CreateNameSpaceObject @ 0x1C004F12C (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004F860 (GetNameSpaceObjectNoLock.c)
 *     LoadDDB @ 0x1C004FA60 (LoadDDB.c)
 *     LoadFieldUnitDDB @ 0x1C004FB88 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004FD6C (LoadMemDDB.c)
 *     BankField @ 0x1C004FED0 (BankField.c)
 *     CreateField @ 0x1C0050220 (CreateField.c)
 *     CreateXField @ 0x1C0050394 (CreateXField.c)
 *     Field @ 0x1C00505D0 (Field.c)
 *     IndexField @ 0x1C0050760 (IndexField.c)
 *     InitEvent @ 0x1C005095C (InitEvent.c)
 *     InitMutex @ 0x1C0050A1C (InitMutex.c)
 *     Method @ 0x1C0050B00 (Method.c)
 *     OpRegion @ 0x1C0050D20 (OpRegion.c)
 *     PowerRes @ 0x1C0050EA0 (PowerRes.c)
 *     Processor @ 0x1C0051010 (Processor.c)
 *     AccessBaseField @ 0x1C00517D0 (AccessBaseField.c)
 *     RawFieldAccess @ 0x1C0052780 (RawFieldAccess.c)
 *     ReadBuffField @ 0x1C0052A34 (ReadBuffField.c)
 *     ReadField @ 0x1C0052B00 (ReadField.c)
 *     WriteBuffField @ 0x1C0052FDC (WriteBuffField.c)
 *     WriteField @ 0x1C00530B0 (WriteField.c)
 *     WriteObject @ 0x1C00532C0 (WriteObject.c)
 *     PushCall @ 0x1C0053B18 (PushCall.c)
 *     PushFrame @ 0x1C0053C54 (PushFrame.c)
 *     PushTerm @ 0x1C0053E38 (PushTerm.c)
 *     AcquireASLMutex @ 0x1C0054288 (AcquireASLMutex.c)
 *     AsyncEvalObject @ 0x1C00544F0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005498C (NestAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054EAC (SyncEvalObject.c)
 *     IfElse @ 0x1C0055590 (IfElse.c)
 *     Load @ 0x1C00556E0 (Load.c)
 *     Release @ 0x1C0055870 (Release.c)
 *     ResetSignal @ 0x1C00559E0 (ResetSignal.c)
 *     Acquire @ 0x1C0055CB0 (Acquire.c)
 *     Buffer @ 0x1C0055E10 (Buffer.c)
 *     Concat @ 0x1C0055F80 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C00562B0 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0056570 (CopyObject.c)
 *     Index @ 0x1C0056C20 (Index.c)
 *     LoadTable @ 0x1C0056EA0 (LoadTable.c)
 *     LogOp2_32 @ 0x1C0057348 (LogOp2_32.c)
 *     MidString @ 0x1C0057B60 (MidString.c)
 *     Package @ 0x1C0058010 (Package.c)
 *     ParsePackage @ 0x1C0058180 (ParsePackage.c)
 *     ProcessIncDec @ 0x1C0058530 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C0058630 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0058CE0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590D0 (ToHexStr.c)
 *     ToString @ 0x1C0059470 (ToString.c)
 *     Wait @ 0x1C0059650 (Wait.c)
 *     ParseAcquire @ 0x1C005A110 (ParseAcquire.c)
 *     ParseAndGetNameSpaceObject @ 0x1C005A3D4 (ParseAndGetNameSpaceObject.c)
 *     ParseArg @ 0x1C005A48C (ParseArg.c)
 *     ParseArgObj @ 0x1C005A600 (ParseArgObj.c)
 *     ParseCall @ 0x1C005A6C0 (ParseCall.c)
 *     ParseField @ 0x1C005AB50 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005AF80 (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C005B250 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C005B3C0 (ParseIntObj.c)
 *     ParseName @ 0x1C005B880 (ParseName.c)
 *     ParseNameTail @ 0x1C005BA28 (ParseNameTail.c)
 *     ParseObjName @ 0x1C005BC24 (ParseObjName.c)
 *     ParseOpcode @ 0x1C005BD60 (ParseOpcode.c)
 *     ParseRelease @ 0x1C005BF90 (ParseRelease.c)
 *     ParseString @ 0x1C005C460 (ParseString.c)
 *     ParseSuperName @ 0x1C005C58C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C7B0 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C00AAAC0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AB6B0 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00AB83C (SyncLoadDDB.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C000B5D8 (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1C004E750 (WPP_RECORDER_SF_Ds.c)
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
  dword_1C006F938 = a1;
  if ( off_1C006E108 )
  {
    v3 = 0LL;
    v4 = 0LL;
    while ( a1 != *(_DWORD *)((char *)&unk_1C006E100 + v4) )
    {
      ++v3;
      ++v1;
      v4 = 16 * v3;
      if ( !*((_QWORD *)&unk_1C006E100 + 2 * v3 + 1) )
        return;
    }
    v5 = 2LL * v1;
    RtlStringCchPrintfA(pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", a1, *((const char **)&unk_1C006E100 + 2 * v1 + 1));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Ds(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v9, a1, *((_QWORD *)&unk_1C006E100 + v5 + 1));
  }
}
