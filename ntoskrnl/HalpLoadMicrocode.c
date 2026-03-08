/*
 * XREFs of HalpLoadMicrocode @ 0x140931BD0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     KeIpiGenericCall @ 0x140396D40 (KeIpiGenericCall.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpMcGetLoadConfiguration @ 0x140519574 (HalpMcGetLoadConfiguration.c)
 *     HalpMcParallelLoadSupported @ 0x1405196CC (HalpMcParallelLoadSupported.c)
 *     HalpMcPatchConfiguration @ 0x140519704 (HalpMcPatchConfiguration.c)
 *     HalpMcResolveMicrocodeOperation @ 0x1405197AC (HalpMcResolveMicrocodeOperation.c)
 *     HalpMcUpdateLock @ 0x1405197FC (HalpMcUpdateLock.c)
 *     HalpMcUpdateUnlock @ 0x140519854 (HalpMcUpdateUnlock.c)
 *     HalpSetMicrocodeSelfhostFlag @ 0x1405198A0 (HalpSetMicrocodeSelfhostFlag.c)
 *     PrExtControlOperations @ 0x140613148 (PrExtControlOperations.c)
 *     HalpMcUpdateInitialize @ 0x14080A96C (HalpMcUpdateInitialize.c)
 *     HalpMcExportAllData @ 0x14085CB80 (HalpMcExportAllData.c)
 *     HalpLoadMicrocodeSerialized @ 0x140931D78 (HalpLoadMicrocodeSerialized.c)
 *     HalpUnloadMicrocode @ 0x140931E50 (HalpUnloadMicrocode.c)
 *     PoDisableSleepStates @ 0x140980FB0 (PoDisableSleepStates.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpLoadMicrocode(__int64 a1, __int64 a2)
{
  bool IsMicrosoftCompatibleHvLoaded; // al
  char v4; // r14
  bool v5; // bp
  int updated; // ebx
  bool Supported; // di
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rsi
  __int64 v12; // r8
  bool v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = 0;
  v16 = 0LL;
  v14 = 0;
  IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded(a1, a2);
  v4 = HalpMcUpdateSelfHosting;
  v5 = IsMicrosoftCompatibleHvLoaded;
  updated = HalpMcUpdateInitialize(0LL, a1);
  if ( updated < 0 )
    goto LABEL_22;
  HalpMcResolveMicrocodeOperation(a1);
  updated = HalpMcPatchConfiguration();
  if ( updated < 0 )
    goto LABEL_22;
  HalpMcGetLoadConfiguration(&v14);
  Supported = v14;
  if ( v14 )
  {
    Supported = HalpMcParallelLoadSupported();
    v14 = Supported;
  }
  HalpSetMicrocodeSelfhostFlag(v4);
  v8 = *(_QWORD *)(a1 + 48);
  updated = PrExtControlOperations(8, v8, 8);
  if ( updated < 0 )
    goto LABEL_22;
  if ( v5 && qword_140C622F0 )
  {
    v11 = HalpMcExportAllData(&v15, 64LL);
    if ( v11 )
    {
      LOBYTE(v12) = Supported;
      updated = ((__int64 (__fastcall *)(void *, _QWORD, __int64))qword_140C622F0)(v11, v15, v12);
      ExFreePoolWithTag(v11, 0x636C6148u);
    }
    else
    {
      updated = -1073741801;
    }
    HalpUnloadMicrocode();
  }
  else
  {
    updated = HalpMcUpdateLock(v10, v9);
    if ( updated < 0 )
    {
LABEL_22:
      HalpMcUpdateInitialize(0LL, 0LL);
      return (unsigned int)updated;
    }
    if ( Supported )
    {
      HalpMcLoadSyncBarrier = KeQueryActiveProcessorCountEx(0xFFFFu);
      HalpMcSyncBarrier = HalpMcLoadSyncBarrier;
      KeIpiGenericCall((PKIPI_BROADCAST_WORKER)HalpMcLoadMicrocodeWorker, 0LL);
    }
    else
    {
      HalpLoadMicrocodeSerialized();
    }
    updated = PrExtControlOperations(9, v8, 8);
    HalpMcUpdateUnlock();
  }
  if ( updated < 0 )
    goto LABEL_22;
  if ( v5 && !HalMcSleepDisabled )
  {
    updated = PoDisableSleepStates(1LL, 14LL, &v16);
    if ( updated >= 0 )
      HalMcSleepDisabled = 1;
  }
  return (unsigned int)updated;
}
