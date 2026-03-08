/*
 * XREFs of AcpiDiagTraceAmlError @ 0x1C0007768
 * Callers:
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     WriteCookAccess @ 0x1C0005DA0 (WriteCookAccess.c)
 *     Notify @ 0x1C00062C0 (Notify.c)
 *     SleepStall @ 0x1C0006400 (SleepStall.c)
 *     ObjTypeSizeOf @ 0x1C00067D0 (ObjTypeSizeOf.c)
 *     AMLIEvalPackageElement @ 0x1C0047D64 (AMLIEvalPackageElement.c)
 *     AMLIEvalPkgDataElement @ 0x1C0047F38 (AMLIEvalPkgDataElement.c)
 *     AMLIRegEventHandler @ 0x1C0048A7C (AMLIRegEventHandler.c)
 *     AcquireGL @ 0x1C004ACB0 (AcquireGL.c)
 *     AmlpValidateFirmwareMemoryAddress @ 0x1C004AD48 (AmlpValidateFirmwareMemoryAddress.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     FreeObjData @ 0x1C004B544 (FreeObjData.c)
 *     GetFieldUnitRegionObj @ 0x1C004B944 (GetFieldUnitRegionObj.c)
 *     MapUnmapPhysMem @ 0x1C004BF40 (MapUnmapPhysMem.c)
 *     NewObjData @ 0x1C004C19C (NewObjData.c)
 *     NewObjOwner @ 0x1C004C324 (NewObjOwner.c)
 *     PerformMutexDriverCallbacks @ 0x1C004C9F4 (PerformMutexDriverCallbacks.c)
 *     RegEventHandler @ 0x1C004CC0C (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x1C004CC68 (RegOpcodeHandler.c)
 *     RegRSAccess @ 0x1C004CD24 (RegRSAccess.c)
 *     ValidateArgTypes @ 0x1C004CEEC (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C004D4F0 (ValidateTarget.c)
 *     NewGlobalHeap @ 0x1C004EFA4 (NewGlobalHeap.c)
 *     NewLocalHeap @ 0x1C004F05C (NewLocalHeap.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004F840 (GetNameSpaceObjectNoLock.c)
 *     LoadDDB @ 0x1C004FA40 (LoadDDB.c)
 *     LoadFieldUnitDDB @ 0x1C004FB68 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004FD4C (LoadMemDDB.c)
 *     BankField @ 0x1C004FEB0 (BankField.c)
 *     CreateField @ 0x1C0050200 (CreateField.c)
 *     CreateXField @ 0x1C0050374 (CreateXField.c)
 *     Field @ 0x1C00505B0 (Field.c)
 *     IndexField @ 0x1C0050740 (IndexField.c)
 *     InitEvent @ 0x1C005093C (InitEvent.c)
 *     InitMutex @ 0x1C00509FC (InitMutex.c)
 *     Method @ 0x1C0050AE0 (Method.c)
 *     OpRegion @ 0x1C0050D00 (OpRegion.c)
 *     PowerRes @ 0x1C0050E80 (PowerRes.c)
 *     Processor @ 0x1C0050FF0 (Processor.c)
 *     AccessBaseField @ 0x1C00517B0 (AccessBaseField.c)
 *     RawFieldAccess @ 0x1C0052760 (RawFieldAccess.c)
 *     ReadBuffField @ 0x1C0052A14 (ReadBuffField.c)
 *     ReadField @ 0x1C0052AE0 (ReadField.c)
 *     WriteBuffField @ 0x1C0052FBC (WriteBuffField.c)
 *     WriteField @ 0x1C0053090 (WriteField.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     PushCall @ 0x1C0053AF8 (PushCall.c)
 *     PushFrame @ 0x1C0053C34 (PushFrame.c)
 *     PushTerm @ 0x1C0053E18 (PushTerm.c)
 *     AcquireASLMutex @ 0x1C0054268 (AcquireASLMutex.c)
 *     AsyncEvalObject @ 0x1C00544D0 (AsyncEvalObject.c)
 *     NestAsyncEvalObject @ 0x1C005496C (NestAsyncEvalObject.c)
 *     SyncEvalObject @ 0x1C0054E8C (SyncEvalObject.c)
 *     IfElse @ 0x1C0055570 (IfElse.c)
 *     Load @ 0x1C00556C0 (Load.c)
 *     Release @ 0x1C0055850 (Release.c)
 *     ResetSignal @ 0x1C00559C0 (ResetSignal.c)
 *     Acquire @ 0x1C0055C90 (Acquire.c)
 *     Buffer @ 0x1C0055DF0 (Buffer.c)
 *     Concat @ 0x1C0055F60 (Concat.c)
 *     ConcatenateResTemplate @ 0x1C0056290 (ConcatenateResTemplate.c)
 *     CopyObject @ 0x1C0056550 (CopyObject.c)
 *     Index @ 0x1C0056C00 (Index.c)
 *     LoadTable @ 0x1C0056E80 (LoadTable.c)
 *     LogOp2_32 @ 0x1C0057328 (LogOp2_32.c)
 *     MidString @ 0x1C0057B40 (MidString.c)
 *     Package @ 0x1C0057FF0 (Package.c)
 *     ParsePackage @ 0x1C0058160 (ParsePackage.c)
 *     ProcessIncDec @ 0x1C0058510 (ProcessIncDec.c)
 *     ProcessLoadTable @ 0x1C0058610 (ProcessLoadTable.c)
 *     ToDecStr @ 0x1C0058CC0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590B0 (ToHexStr.c)
 *     ToString @ 0x1C0059450 (ToString.c)
 *     Wait @ 0x1C0059630 (Wait.c)
 *     ParseAcquire @ 0x1C005A0F0 (ParseAcquire.c)
 *     ParseAndGetNameSpaceObject @ 0x1C005A3B4 (ParseAndGetNameSpaceObject.c)
 *     ParseArg @ 0x1C005A46C (ParseArg.c)
 *     ParseArgObj @ 0x1C005A5E0 (ParseArgObj.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 *     ParseField @ 0x1C005AB30 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005AF60 (ParseFieldConnection.c)
 *     ParseFieldList @ 0x1C005B230 (ParseFieldList.c)
 *     ParseIntObj @ 0x1C005B3A0 (ParseIntObj.c)
 *     ParseName @ 0x1C005B860 (ParseName.c)
 *     ParseNameTail @ 0x1C005BA08 (ParseNameTail.c)
 *     ParseObjName @ 0x1C005BC04 (ParseObjName.c)
 *     ParseOpcode @ 0x1C005BD40 (ParseOpcode.c)
 *     ParseRelease @ 0x1C005BF70 (ParseRelease.c)
 *     ParseString @ 0x1C005C440 (ParseString.c)
 *     ParseSuperName @ 0x1C005C56C (ParseSuperName.c)
 *     ParseTerm @ 0x1C005C790 (ParseTerm.c)
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1C00AB6A0 (InitIllegalIOAddressListFromHAL.c)
 *     SyncLoadDDB @ 0x1C00AB82C (SyncLoadDDB.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall AcpiDiagTraceAmlError(__int64 a1, int a2)
{
  int v2; // r10d
  int v3; // r9d
  __int64 v4; // rax
  char *v5; // rdx
  __int64 *v6; // r8
  __int64 v7; // r9
  __int16 v8; // ax
  __int64 v9; // rax
  char *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int16 v13; // ax
  int v15; // [rsp+30h] [rbp-19h] BYREF
  char v16; // [rsp+34h] [rbp-15h]
  int v17; // [rsp+38h] [rbp-11h] BYREF
  char v18; // [rsp+3Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+50h] [rbp+7h]
  int v21; // [rsp+58h] [rbp+Fh]
  int v22; // [rsp+5Ch] [rbp+13h]
  int *v23; // [rsp+60h] [rbp+17h]
  __int64 v24; // [rsp+68h] [rbp+1Fh]
  __int64 v25; // [rsp+70h] [rbp+27h] BYREF
  __int16 v26; // [rsp+78h] [rbp+2Fh]
  __int64 v27; // [rsp+80h] [rbp+37h] BYREF
  __int16 v28; // [rsp+88h] [rbp+3Fh]
  int v29; // [rsp+B8h] [rbp+6Fh] BYREF

  v29 = a2;
  v28 = 0;
  v27 = 0x41002F004ELL;
  v25 = 0x41002F004ELL;
  v26 = 0;
  v2 = 3;
  v18 = 0;
  v3 = 3;
  v16 = 0;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v5 = (char *)&v15;
      v15 = *(_DWORD *)(v4 + 40);
      v6 = &v25;
      v7 = 4LL;
      do
      {
        v8 = *v5++;
        *(_WORD *)v6 = v8;
        v6 = (__int64 *)((char *)v6 + 2);
        --v7;
      }
      while ( v7 );
      v26 = 0;
      v3 = 5;
    }
    v9 = *(_QWORD *)(a1 + 72);
    if ( v9 )
    {
      v10 = (char *)&v17;
      v17 = *(_DWORD *)(v9 + 40);
      v11 = &v27;
      v12 = 4LL;
      do
      {
        v13 = *v10++;
        *(_WORD *)v11 = v13;
        v11 = (__int64 *)((char *)v11 + 2);
        --v12;
      }
      while ( v12 );
      v28 = 0;
      v2 = 5;
    }
  }
  UserData.Ptr = (unsigned __int64)&v25;
  UserData.Reserved = 0;
  UserData.Size = 2 * v3;
  v22 = 0;
  v20 = &v27;
  v24 = 4LL;
  v21 = 2 * v2;
  v23 = &v29;
  return EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
}
