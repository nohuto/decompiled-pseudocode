/*
 * XREFs of BootApplicationPersistentDataProcess @ 0x140B38D8C
 * Callers:
 *     ExInitSystemPhase2 @ 0x140B37968 (ExInitSystemPhase2.c)
 *     IoInitSystemPreDrivers @ 0x140B4F014 (IoInitSystemPreDrivers.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 * Callees:
 *     BapdpMarshallBootDataToRegistry @ 0x140373A58 (BapdpMarshallBootDataToRegistry.c)
 *     BapdpProcessSpacesBootInformation @ 0x140373C20 (BapdpProcessSpacesBootInformation.c)
 *     BapdpProcessEtwEvents @ 0x140373CE8 (BapdpProcessEtwEvents.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     ExpInitializeMemoryMirroring @ 0x140B37BD4 (ExpInitializeMemoryMirroring.c)
 *     BapdpProcessEDrvHintInfo @ 0x140B385F8 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140B38688 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140B38718 (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140B38800 (BapdpProcessBootMetadata.c)
 *     BapdpRecordIumStatus @ 0x140B38C84 (BapdpRecordIumStatus.c)
 *     BapdpProcessBCDCache @ 0x140B38EBC (BapdpProcessBCDCache.c)
 *     BapdpProcessResumeInformation @ 0x140B38FBC (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140B39090 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessHSTIResults @ 0x140B39164 (BapdpProcessHSTIResults.c)
 *     BapdpRegisterWbclData @ 0x140B39238 (BapdpRegisterWbclData.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B39350 (BapdpProcessVsmKeyBlobs.c)
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

  if ( (__int64 *)qword_140D161B0 == &qword_140D161B0 )
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
      v3 = (PVOID *)qword_140D161B8;
      v4 = (PVOID *)*((_QWORD *)qword_140D161B8 + 1);
      if ( *(__int64 **)qword_140D161B8 == &qword_140D161B0 )
      {
        while ( *v4 == v3 )
        {
          qword_140D161B8 = v4;
          *v4 = &qword_140D161B0;
          if ( v3 == (PVOID *)&qword_140D161B0 )
            return;
          ExFreePoolWithTag(v3[2], 0);
          ExFreePoolWithTag(v3, 0);
          v3 = (PVOID *)qword_140D161B8;
          if ( *(__int64 **)qword_140D161B8 != &qword_140D161B0 )
            break;
          v4 = (PVOID *)*((_QWORD *)qword_140D161B8 + 1);
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
