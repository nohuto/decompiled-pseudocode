/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140B44538
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     ExInitSystemPhase2 @ 0x140B64A84 (ExInitSystemPhase2.c)
 * Callees:
 *     BapdpProcessSpacesBootInformation @ 0x1403800A8 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessEtwEvents @ 0x140380170 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1403A5FC4 (BapdpMarshallBootDataToRegistry.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     BapdpProcessEDrvHintInfo @ 0x140B42A34 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140B42AC4 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140B42B54 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140B42C3C (BapdpProcessBootMetadata.c)
 *     BapdpRecordIumStatus @ 0x140B44430 (BapdpRecordIumStatus.c)
 *     BapdpProcessBCDCache @ 0x140B44668 (BapdpProcessBCDCache.c)
 *     BapdpProcessResumeInformation @ 0x140B44768 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140B4483C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessHSTIResults @ 0x140B44910 (BapdpProcessHSTIResults.c)
 *     BapdpRegisterWbclData @ 0x140B449E4 (BapdpRegisterWbclData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B44AFC (BapdpProcessVsmKeyBlobs.c)
 *     ExpInitializeMemoryMirroring @ 0x140B7267C (ExpInitializeMemoryMirroring.c)
 */

void __fastcall BootApplicationPersistentDataProcess(int a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 Pool2; // rax

  if ( (__int64 *)qword_140D15DF0 == &qword_140D15DF0 )
  {
LABEL_11:
    if ( a1 == 2 )
    {
      BapdpProcessBCDCache(1LL);
      BapdpProcessVsmKeyBlobs(1LL);
    }
    return;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      ExpInitializeMemoryMirroring();
      BapdpProcessBootMetadata();
      BapdpProcessSpacesBootInformation(v1);
      BapdpRecordIumStatus();
      BapdpProcessEtwEvents(v2);
      BapdpProcessHSTIResults();
      BapdpMarshallBootDataToRegistry();
      v3 = (PVOID *)qword_140D15DF8;
      v4 = (PVOID *)*((_QWORD *)qword_140D15DF8 + 1);
      if ( *(__int64 **)qword_140D15DF8 == &qword_140D15DF0 )
      {
        while ( *v4 == v3 )
        {
          qword_140D15DF8 = v4;
          *v4 = &qword_140D15DF0;
          if ( v3 == (PVOID *)&qword_140D15DF0 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140D15DF8;
          if ( *(__int64 **)qword_140D15DF8 != &qword_140D15DF0 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140D15DF8 + 1);
        }
      }
      __fastfail(3u);
    }
    goto LABEL_11;
  }
  BapdpProcessWmdResults();
  BapdpProcessResumeInformation();
  BapdpProcessBitlockerStatus();
  BapdpRegisterWbclData(0LL);
  BapdpRegisterWbclData(1LL);
  BapdpProcessBCDCache(0LL);
  BapdpProcessVsmKeyBlobs(0LL);
  BapdpProcessEDrvHintInfo(v5);
  BapdpProcessFwUpdateResults(v6);
  v7 = *(_QWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3696LL);
  if ( v7 )
  {
    Pool2 = ExAllocatePool2(64LL, 0x18uLL, 0x64506142u);
    ExpFwRamdiskInfo = Pool2;
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = *(_OWORD *)v7;
      *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(v7 + 16);
    }
  }
}
