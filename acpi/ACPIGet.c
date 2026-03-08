/*
 * XREFs of ACPIGet @ 0x1C0029384
 * Callers:
 *     ACPIDockIrpRemoveDevice @ 0x1C0009590 (ACPIDockIrpRemoveDevice.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EF00 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000F4D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000F6A0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010890 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C00109B0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0010B20 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0011880 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0012E40 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPICMButtonStartWorker @ 0x1C0018F20 (ACPICMButtonStartWorker.c)
 *     ACPICMLidSetPower @ 0x1C0019820 (ACPICMLidSetPower.c)
 *     ACPICMLidWorker @ 0x1C00199B0 (ACPICMLidWorker.c)
 *     CmosGetOpRegionType @ 0x1C0019D58 (CmosGetOpRegionType.c)
 *     ACPIDetectDockDevices @ 0x1C0019FD0 (ACPIDetectDockDevices.c)
 *     ACPIDetectFilterDevices @ 0x1C001AA10 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C001EE10 (ACPIDevicePowerProcessPhase0DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0020D80 (ACPIDevicePowerProcessPhase5DeviceSubPhase4.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0021870 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase1.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0021A10 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     GetPciAddressWorker @ 0x1C0034E00 (GetPciAddressWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C0035350 (IsPciBusAsyncWorker.c)
 *     IsPciDeviceWorker @ 0x1C0035980 (IsPciDeviceWorker.c)
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     LinkNodepRunSrsWorker @ 0x1C005DB40 (LinkNodepRunSrsWorker.c)
 *     ACPIDockIntfUpdateDeparture @ 0x1C007AA00 (ACPIDockIntfUpdateDeparture.c)
 *     ACPIDockIrpEject @ 0x1C007AAC0 (ACPIDockIrpEject.c)
 *     ACPIDockIrpQueryID @ 0x1C007B410 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpStartDevice @ 0x1C007BA10 (ACPIDockIrpStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x1C007D4D0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C007D7A0 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1C007DF10 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE84 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007F574 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C007FC3C (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C008060C (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryResources @ 0x1C0080E80 (ACPIBusIrpQueryResources.c)
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00824A0 (ACPIDetectCouldExtensionBeInRelation.c)
 *     ACPIInitStopDevice @ 0x1C0087AE4 (ACPIInitStopDevice.c)
 *     ACPIInternalSetProximityDomain @ 0x1C00883E8 (ACPIInternalSetProximityDomain.c)
 *     ACPIProcessorGetInitialApicId @ 0x1C008C748 (ACPIProcessorGetInitialApicId.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C008ED68 (PnpBiosGetDeviceResourceList.c)
 *     ACPISystemPowerGetDeviceWake @ 0x1C0094F08 (ACPISystemPowerGetDeviceWake.c)
 *     ACPISystemPowerGetSxD @ 0x1C0094FC0 (ACPISystemPowerGetSxD.c)
 *     ACPIThermalGetParameter @ 0x1C00959A4 (ACPIThermalGetParameter.c)
 *     ACPIThermalWorker @ 0x1C00962E0 (ACPIThermalWorker.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00972E0 (AcpiEjectBusNumberTranslator.c)
 *     TranslateEjectInterface @ 0x1C0097A38 (TranslateEjectInterface.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C0098134 (ACPIProcessPhysicalDeviceLocation.c)
 *     LinkNodeGetPossibleResources @ 0x1C00994B8 (LinkNodeGetPossibleResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     AMLIAsyncEvalObject @ 0x1C00478E8 (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIGet(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  void (__fastcall *v14)(__int64, _QWORD, char *, char *); // r13
  __int64 v15; // rsi
  __int16 v16; // ax
  __int64 Pool2; // rax
  char *v18; // r14
  KIRQL v19; // al
  char **v20; // rcx
  char *v21; // r12
  unsigned int v22; // eax
  __int64 v23; // rax
  char *v24; // rdx
  unsigned int v25; // ebx
  KIRQL v26; // al
  __int64 v27; // r8
  char **v28; // rdx
  int v29; // [rsp+30h] [rbp-40h]
  __int128 *v30; // [rsp+38h] [rbp-38h]
  __int64 v31; // [rsp+40h] [rbp-30h]
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  __int128 v33; // [rsp+58h] [rbp-18h]
  __int64 v34; // [rsp+68h] [rbp-8h]
  int v36; // [rsp+C0h] [rbp+50h]

  v30 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v10 = a1;
  v29 = a3 & 0x20000000;
  v36 = a3 & 0x4000000;
  v32 = 0LL;
  v33 = 0LL;
  if ( (a3 & 0x4000000) == 0 )
    v10 = *(_QWORD *)(a1 + 760);
  v11 = 0LL;
  if ( (a3 & 0x4000000) == 0 )
    v11 = a1;
  v12 = a3 & 0x1F0000;
  if ( (a3 & 0x1F0000) == 0x10000 )
  {
    v14 = (void (__fastcall *)(__int64, _QWORD, char *, char *))&ACPIGetWorkerForBuffer;
    goto LABEL_18;
  }
  if ( v12 == 0x20000 )
  {
    v14 = (void (__fastcall *)(__int64, _QWORD, char *, char *))&ACPIGetWorkerForData;
LABEL_18:
    v15 = v11;
    goto LABEL_19;
  }
  if ( v12 != 0x40000 )
  {
    if ( v12 == 0x80000 )
    {
      v14 = (void (__fastcall *)(__int64, _QWORD, char *, char *))&ACPIGetWorkerForString;
    }
    else
    {
      if ( v12 != 0x100000 )
        return 3221225713LL;
      v14 = (void (__fastcall *)(__int64, _QWORD, char *, char *))&ACPIGetWorkerForNothing;
    }
    goto LABEL_18;
  }
  v14 = (void (__fastcall *)(__int64, _QWORD, char *, char *))&ACPIGetWorkerForInteger;
  v15 = v11;
  if ( (a3 & 0x4000800) == 0x800 && _bittest64((const signed __int64 *)(v11 + 8), 0x39u) )
  {
    v15 = *(_QWORD *)(v11 + 184);
    v10 = *(_QWORD *)(v15 + 760);
  }
LABEL_19:
  v16 = 3;
  if ( (a3 & 0x3800000) != 0 )
  {
    v31 = 1LL;
    if ( (a3 & 0x800000) != 0 )
    {
      WORD1(v32) = 1;
      *(_QWORD *)&v33 = a4;
    }
    else
    {
      if ( (a3 & 0x1000000) != 0 )
      {
        v16 = 2;
      }
      else if ( (a3 & 0x2000000) == 0 )
      {
        KeBugCheckEx(0xA3u, 1uLL, 0x600BFuLL, 0LL, 0LL);
      }
      WORD1(v32) = v16;
      DWORD2(v33) = a5;
      v34 = a4;
    }
    v30 = &v32;
  }
  Pool2 = ExAllocatePool2(64LL, 120LL, 1299211073LL);
  v18 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a3;
  *(_DWORD *)(Pool2 + 4) = a2;
  *(_QWORD *)(Pool2 + 40) = a6;
  *(_QWORD *)(Pool2 + 48) = a7;
  *(_QWORD *)(Pool2 + 56) = a8;
  *(_QWORD *)(Pool2 + 64) = a9;
  *(_QWORD *)(Pool2 + 24) = v11;
  *(_QWORD *)(Pool2 + 32) = v10;
  v19 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
  v20 = (char **)qword_1C006F788;
  v21 = v18 + 8;
  if ( *(__int64 **)qword_1C006F788 != &AcpiGetListEntry )
    goto LABEL_51;
  *(_QWORD *)v21 = &AcpiGetListEntry;
  *((_QWORD *)v18 + 2) = v20;
  *v20 = v21;
  qword_1C006F788 = (__int64)(v18 + 8);
  KeReleaseSpinLock(&AcpiGetLock, v19);
  if ( !v36 && (*(_QWORD *)(v11 + 8) & 0x208000000000000LL) == 0x8000000000000LL
    || (v23 = AMLIGetNamedChild(v10, a2), (v10 = v23) == 0) )
  {
    v22 = -1073741772;
    goto LABEL_46;
  }
  if ( *(_WORD *)(*(_QWORD *)v23 + 66LL) == 8
    && v15
    && a3 >= 0
    && *(_QWORD *)(v15 + 648)
    && (*(_BYTE *)(v15 + 1008) & 0x40) == 0 )
  {
    v22 = -1073741661;
    goto LABEL_46;
  }
  v24 = v18 + 80;
  if ( !v29 )
  {
    v22 = AMLIEvalNameSpaceObject(v23, v24, v31, v30);
LABEL_46:
    *(_DWORD *)v18 |= 0x10000000u;
    v14(v10, v22, v18 + 80, v18);
    if ( v10 )
      AMLIDereferenceHandleEx(v10);
    v25 = *((_DWORD *)v18 + 18);
    v26 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v27 = *(_QWORD *)v21;
    if ( *(char **)(*(_QWORD *)v21 + 8LL) == v21 )
    {
      v28 = (char **)*((_QWORD *)v18 + 2);
      if ( *v28 == v21 )
      {
        *v28 = (char *)v27;
        *(_QWORD *)(v27 + 8) = v28;
        KeReleaseSpinLock(&AcpiGetLock, v26);
        ExFreePoolWithTag(v18, 0);
        return v25;
      }
    }
LABEL_51:
    __fastfail(3u);
  }
  v22 = AMLIAsyncEvalObject(v23, (_DWORD)v24, v31, (_DWORD)v30, (__int64)v14, (__int64)v18);
  v25 = 259;
  if ( v22 != 259 )
    goto LABEL_46;
  AMLIDereferenceHandleEx(v10);
  return v25;
}
