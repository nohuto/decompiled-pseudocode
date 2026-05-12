/*
 * XREFs of StorPortExtendedFunction @ 0x1C000F6F0
 * Callers:
 *     <none>
 * Callees:
 *     StorpRequestTimer @ 0x1C0001008 (StorpRequestTimer.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C0006380 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterFindUnit @ 0x1C0006674 (RaidAdapterFindUnit.c)
 *     StorpAllocatePool @ 0x1C00160C8 (StorpAllocatePool.c)
 *     RaidGetD3ColdInterface @ 0x1C001ACF8 (RaidGetD3ColdInterface.c)
 *     RaidGetStartIoPerfParams @ 0x1C001C5E0 (RaidGetStartIoPerfParams.c)
 *     RaidNtStatusToStorStatus @ 0x1C001C81C (RaidNtStatusToStorStatus.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     RaidAdapterPoFxSetDeviceIdleTimeout @ 0x1C001E634 (RaidAdapterPoFxSetDeviceIdleTimeout.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C002D5DC (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C002D640 (RaidAdapterPoFxIdleComponent.c)
 *     RaidInitializeCryptoEngine @ 0x1C003157C (RaidInitializeCryptoEngine.c)
 *     RaidInitializePerfOpts @ 0x1C00316D4 (RaidInitializePerfOpts.c)
 *     RaidInitializeRpmb @ 0x1C0032714 (RaidInitializeRpmb.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C0033004 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     WPP_SF_ @ 0x1C00334FC (WPP_SF_.c)
 *     WPP_SF_D @ 0x1C0033528 (WPP_SF_D.c)
 *     RaMiniportSaveFeatureList @ 0x1C00371F4 (RaMiniportSaveFeatureList.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003733C (McTemplateK0pqqq_EtwWriteTransfer.c)
 *     RaidAdapterCacheOperationalPowerRange @ 0x1C0037D98 (RaidAdapterCacheOperationalPowerRange.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C0037FE8 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C00381A8 (StorAcquireSpinLockEx.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C00382A4 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorBuildScatterGatherListProxy @ 0x1C0038498 (StorBuildScatterGatherListProxy.c)
 *     StorDelayExecution @ 0x1C00384FC (StorDelayExecution.c)
 *     StorEtwMiniportEventProxy @ 0x1C003864C (StorEtwMiniportEventProxy.c)
 *     StorEtwMiniportLogError @ 0x1C003878C (StorEtwMiniportLogError.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C003A494 (StorPortpInvokeAcpiMethod.c)
 *     StorPortpSetPowerSettingNotificationGuids @ 0x1C003A558 (StorPortpSetPowerSettingNotificationGuids.c)
 *     StorReset @ 0x1C003A630 (StorReset.c)
 *     StorpAcquireMSISpinLock @ 0x1C003A7C8 (StorpAcquireMSISpinLock.c)
 *     StorpAdapterInitializePoFxPower @ 0x1C003A86C (StorpAdapterInitializePoFxPower.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNode @ 0x1C003AB8C (StorpAllocateContiguousMemorySpecifyCacheNode.c)
 *     StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C003AC04 (StorpAllocateContiguousMemorySpecifyCacheNodeEx.c)
 *     StorpAllocateHostMemoryBuffer @ 0x1C003AD30 (StorpAllocateHostMemoryBuffer.c)
 *     StorpAllocateMdl @ 0x1C003B17C (StorpAllocateMdl.c)
 *     StorpBuildMdlForNonPagedPool @ 0x1C003B2B8 (StorpBuildMdlForNonPagedPool.c)
 *     StorpCompleteServiceIrp @ 0x1C003B4B8 (StorpCompleteServiceIrp.c)
 *     StorpFlushDataBufferMdl @ 0x1C003B510 (StorpFlushDataBufferMdl.c)
 *     StorpFreeContiguousMemorySpecifyCacheEx @ 0x1C003B578 (StorpFreeContiguousMemorySpecifyCacheEx.c)
 *     StorpFreeHostMemoryBuffer @ 0x1C003B5EC (StorpFreeHostMemoryBuffer.c)
 *     StorpFreeMdl @ 0x1C003B6B0 (StorpFreeMdl.c)
 *     StorpFreeTimer @ 0x1C003B75C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003B9CC (StorpFreeWorkItem.c)
 *     StorpGetActiveNodeCount @ 0x1C003BBA0 (StorpGetActiveNodeCount.c)
 *     StorpGetDataInSgList @ 0x1C003BC34 (StorpGetDataInSgList.c)
 *     StorpGetGroupAffinity @ 0x1C003BE6C (StorpGetGroupAffinity.c)
 *     StorpGetMSIInfo @ 0x1C003BEC8 (StorpGetMSIInfo.c)
 *     StorpGetOriginalMdl @ 0x1C003BFB0 (StorpGetOriginalMdl.c)
 *     StorpGetPfns @ 0x1C003C030 (StorpGetPfns.c)
 *     StorpGetRequestInfo @ 0x1C003C0D0 (StorpGetRequestInfo.c)
 *     StorpGetSystemAddress @ 0x1C003C334 (StorpGetSystemAddress.c)
 *     StorpInitializeTimer @ 0x1C003C4B0 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003C63C (StorpInitializeWorkItem.c)
 *     StorpLogSystemEvent @ 0x1C003C780 (StorpLogSystemEvent.c)
 *     StorpPutScatterGatherList @ 0x1C003D108 (StorpPutScatterGatherList.c)
 *     StorpQueueWorkItem @ 0x1C003D208 (StorpQueueWorkItem.c)
 *     StorpReleaseMSISpinLock @ 0x1C003D3A4 (StorpReleaseMSISpinLock.c)
 *     StorpSetUnitAttributes @ 0x1C003D43C (StorpSetUnitAttributes.c)
 *     StorpUnitInitializePoFxPower @ 0x1C003D4B8 (StorpUnitInitializePoFxPower.c)
 *     RaidGetD3ColdCapability @ 0x1C003F0D8 (RaidGetD3ColdCapability.c)
 *     RaidRegisterPerfStates @ 0x1C003F758 (RaidRegisterPerfStates.c)
 *     StorpLogRegisterAdapterPerfStates @ 0x1C00534B0 (StorpLogRegisterAdapterPerfStates.c)
 *     StorpTelemetryMiniportEvent @ 0x1C005590C (StorpTelemetryMiniportEvent.c)
 */

__int64 __fastcall StorPortExtendedFunction(
        unsigned int a1,
        __int64 a2,
        KSPIN_LOCK *a3,
        GUID *a4,
        struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *Timeout,
        PULONG a6,
        PHYSICAL_ADDRESS LowAddress,
        PHYSICAL_ADDRESS HighAddress,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // r14d
  __int64 v13; // r15
  unsigned int v14; // edi
  unsigned __int64 Mask; // rbx
  PDEVICE_OBJECT v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 result; // rax
  PDEVICE_OBJECT v19; // rcx
  __int64 v20; // rdx
  struct _GROUP_AFFINITY *v21; // r8
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v22; // r9
  _QWORD *v23; // rcx
  KSPIN_LOCK *v24; // rbx
  unsigned int v25; // edi
  USHORT *v26; // rbx
  KSPIN_LOCK *v27; // rbx
  struct _GROUP_AFFINITY *v28; // rbx
  ULONG ProcessorIndexFromNumber; // eax
  int LockArray_high; // eax
  ULONG *v31; // rbx
  NTSTATUS LogicalProcessorRelationship; // eax
  KSPIN_LOCK v33; // rcx
  KSPIN_LOCK v34; // rcx
  unsigned int v35; // edi
  unsigned int v36; // edi
  struct _GROUP_AFFINITY *v37; // rbx
  struct _GROUP_AFFINITY *v38; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v39; // rbx
  struct _GROUP_AFFINITY *v40; // rbx
  KSPIN_LOCK *v41; // rdx
  int v42; // eax
  LARGE_INTEGER *v43; // rbx
  union _LARGE_INTEGER *v44; // rcx
  int v45; // r12d
  unsigned int v46; // r13d
  __int64 v47; // r9
  char v48; // al
  unsigned __int8 CurrentIrql; // r15
  __int64 Unit; // rax
  __int64 v51; // rsi
  __int64 v52; // r8
  unsigned int v53; // r12d
  __int64 v54; // r9
  __int64 v55; // rax
  unsigned int v56; // edi
  unsigned int v57; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v58; // rsi
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rbx
  _QWORD *v62; // rcx
  __int64 v63; // r9
  unsigned int v64; // edi
  _QWORD *v65; // rcx
  __int64 v66; // rax
  unsigned int v67; // edi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v68; // rsi
  __int64 v69; // r8
  __int64 v70; // rax
  _QWORD *v71; // rcx
  __int64 v72; // r9
  _QWORD *v73; // rcx
  __int64 v74; // rax
  __int64 v75; // r8
  struct _GROUP_AFFINITY *v76; // rdi
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v77; // r12
  PULONG v78; // r13
  _QWORD *v79; // rbx
  __int64 v80; // rax
  unsigned int v81; // eax
  _QWORD *v82; // rcx
  unsigned int v83; // eax
  char v84; // di
  _QWORD *v85; // rax
  __int64 v86; // rbx
  int v87; // ecx
  int v88; // r8d
  unsigned int v89; // edi
  PHYSICAL_ADDRESS v90; // r12
  __int64 v91; // rbx
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 *v94; // rcx
  unsigned __int8 v95; // r9
  unsigned int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  KSPIN_LOCK *v99; // rdx
  struct _GROUP_AFFINITY *v100; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v101; // rsi
  __int64 v102; // rcx
  struct _GROUP_AFFINITY *v103; // rbx
  KSPIN_LOCK *v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rax
  struct _DEVICE_OBJECT *v107; // rcx
  __int64 v108; // rcx
  __int64 v109; // rcx
  KSPIN_LOCK v110; // rcx
  KSPIN_LOCK v111; // rcx
  unsigned int v112; // eax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v113; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v114; // rbx
  struct _GROUP_AFFINITY *v115; // rbx
  struct _GROUP_AFFINITY *v116; // r8
  KSPIN_LOCK v117; // rdx
  unsigned int v118; // eax
  __int64 v119; // rcx
  unsigned int v120; // eax
  __int64 v121; // rcx
  __int64 v122; // rcx
  int v123; // edx
  __int64 v124; // rcx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v125; // rbx
  __int64 Timer; // rax
  _BYTE *QuadPart; // rbx
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v128; // rbx
  char v129; // al
  _BYTE *v130; // rbx
  struct _GROUP_AFFINITY *v131; // rbx
  bool v132; // cc
  unsigned int v133; // edi
  __int64 v134; // rcx
  unsigned int v135; // edi
  int v136; // [rsp+50h] [rbp-19h]
  int v137; // [rsp+50h] [rbp-19h]
  int v138; // [rsp+50h] [rbp-19h]
  int v139; // [rsp+50h] [rbp-19h]
  int v140; // [rsp+50h] [rbp-19h]
  int v141; // [rsp+50h] [rbp-19h]
  int v142; // [rsp+50h] [rbp-19h]
  PHYSICAL_ADDRESS v143; // [rsp+58h] [rbp-11h]
  __int128 v144; // [rsp+60h] [rbp-9h] BYREF
  KSPIN_LOCK *v146; // [rsp+E0h] [rbp+77h] BYREF
  struct _GROUP_AFFINITY *v147; // [rsp+E8h] [rbp+7Fh]

  v146 = a3;
  v147 = (struct _GROUP_AFFINITY *)a4;
  v11 = 0;
  v13 = a2;
  v14 = -1056964606;
  Mask = 0LL;
  if ( !a2 )
    return 3238002694LL;
  v16 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 79LL, &WPP_8537d3e98fbc352c94324671ced0aca0_Traceguids, a1);
    v13 = a2;
  }
  v17 = 0x1C0000000uLL;
  switch ( a1 )
  {
    case 0u:
      return StorpAllocatePool(v16, (unsigned int)v146, (unsigned int)v147, Timeout);
    case 1u:
      if ( !v146 )
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v20 = 29LL;
          goto LABEL_13;
        }
        return 3238002694LL;
      }
      if ( KeGetCurrentIrql() <= 2u )
      {
        ExFreePoolWithTag(v146, 0);
        return 0LL;
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          return 3238002696LL;
        }
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 30LL, &WPP_8537d3e98fbc352c94324671ced0aca0_Traceguids);
        return 3238002696LL;
      }
    case 2u:
      return StorpAllocateMdl(v16, v146, (unsigned int)v147, Timeout);
    case 3u:
      return StorpFreeMdl(v16, v146);
    case 4u:
      return StorpBuildMdlForNonPagedPool(v16, v146);
    case 5u:
      return StorpGetSystemAddress(v16, v146, 0LL, v147);
    case 6u:
      if ( !v147 )
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v20 = 43LL;
          goto LABEL_13;
        }
        return 3238002694LL;
      }
      if ( *((_BYTE *)v146 + 2) == 40 )
        v147->Mask = *(_QWORD *)(v146[12] + 104);
      else
        v147->Mask = *(_QWORD *)(v146[6] + 104);
      return 0LL;
    case 7u:
      return StorpCompleteServiceIrp(v13, v146);
    case 8u:
      v21 = v147;
      v22 = Timeout;
      if ( v13 )
      {
        if ( v146 )
        {
          if ( v147 )
          {
            if ( Timeout )
            {
              v23 = **(_QWORD ***)(v13 - 16);
              *v146 = v23[1];
              v21->Mask = v23[4];
              *(_QWORD *)&v22->Relationship = v23[3];
              return 0LL;
            }
            v19 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v20 = (unsigned int)((_DWORD)Timeout + 48);
              goto LABEL_13;
            }
          }
          else
          {
            v19 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
            {
              v20 = (unsigned int)((_DWORD)v147 + 47);
              goto LABEL_13;
            }
          }
        }
        else
        {
          v19 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          {
            v20 = 46LL;
            goto LABEL_13;
          }
        }
      }
      else
      {
        v19 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v20 = 45LL;
LABEL_13:
          WPP_SF_(v19->AttachedDevice, v20, &WPP_8537d3e98fbc352c94324671ced0aca0_Traceguids);
          return 3238002694LL;
        }
      }
      return 3238002694LL;
    case 9u:
      return StorBuildScatterGatherListProxy(v13, &v146);
    case 0xAu:
      return StorpPutScatterGatherList(v13, v146, (unsigned __int8)v147);
    case 0xBu:
      return StorpAcquireMSISpinLock(v13, (unsigned int)v146, v147);
    case 0xCu:
      return StorpReleaseMSISpinLock(v13, (unsigned int)v146, (unsigned int)v147);
    case 0xDu:
      return StorpGetMSIInfo(v13, (unsigned int)v146, v147);
    case 0xEu:
      return RaidInitializePerfOpts(v13, (unsigned __int8)v146, v147);
    case 0xFu:
      return RaidGetStartIoPerfParams(v13, v146, v147);
    case 0x10u:
      return StorpLogSystemEvent(v13, v146, v147);
    case 0x11u:
      v24 = v146;
      if ( v146 )
        KeGetCurrentProcessorNumberEx((PPROCESSOR_NUMBER)v146);
      v25 = -1056964602;
      if ( v24 )
        return 0;
      return v25;
    case 0x12u:
      v26 = (USHORT *)v146;
      if ( !v146 )
        return 3238002694LL;
      *v26 = KeQueryActiveGroupCount();
      return 0LL;
    case 0x13u:
      return StorpGetGroupAffinity(v16, (unsigned __int16)v146, v147);
    case 0x14u:
      return StorpGetActiveNodeCount(v16, v146);
    case 0x15u:
      if ( !v147 || (unsigned int)v146 > 0xFFFF )
        return 3238002694LL;
      KeQueryNodeActiveAffinity((USHORT)v146, v147, 0LL);
      return 0LL;
    case 0x16u:
      v27 = v146;
      if ( !v146 )
        return 3238002694LL;
      *(_DWORD *)v27 = KeQueryHighestNodeNumber();
      return 0LL;
    case 0x17u:
      LogicalProcessorRelationship = KeQueryLogicalProcessorRelationship(
                                       (PPROCESSOR_NUMBER)v146,
                                       (LOGICAL_PROCESSOR_RELATIONSHIP)v147,
                                       Timeout,
                                       a6);
      if ( LogicalProcessorRelationship == -1073741820 )
        return 3238002692LL;
      if ( LogicalProcessorRelationship == -1073741811 )
        return 3238002694LL;
      return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x18u:
      return StorpAllocateContiguousMemorySpecifyCacheNode(
               (_DWORD)a9,
               (_DWORD)v146,
               (_DWORD)v147,
               (_DWORD)Timeout,
               (__int64)a6,
               LowAddress.LowPart,
               HighAddress.LowPart,
               (__int64)a9);
    case 0x19u:
      MmFreeContiguousMemorySpecifyCache(v146, (SIZE_T)v147, (MEMORY_CACHING_TYPE)Timeout);
      return 0LL;
    case 0x1Au:
      return StorPortpSetPowerSettingNotificationGuids(v13, (unsigned int)v146, v147);
    case 0x1Bu:
      return ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD))StorPortpInvokeAcpiMethod)(
               v13,
               v146,
               (PHYSICAL_ADDRESS)LowAddress.QuadPart,
               Timeout,
               (_DWORD)a6,
               (PHYSICAL_ADDRESS)LowAddress.QuadPart,
               HighAddress.LowPart,
               a9);
    case 0x1Cu:
      return StorpGetRequestInfo(v16, v146, v147);
    case 0x1Du:
      return StorpInitializeWorkItem(v13, v146);
    case 0x1Eu:
      return StorpQueueWorkItem(v13, v146, v147, Timeout);
    case 0x1Fu:
      return StorpFreeWorkItem(v13, v146);
    case 0x20u:
      return StorpInitializeTimer(v13, v146);
    case 0x21u:
      return StorpRequestTimer(
               v13,
               (__int64)v146,
               (signed __int64)v147,
               (__int64)Timeout,
               (__int64)a6,
               LowAddress.QuadPart);
    case 0x22u:
      return StorpFreeTimer(v13, v146);
    case 0x23u:
      InitializeSListHead((PSLIST_HEADER)v146);
      return 0LL;
    case 0x24u:
      v37 = v147;
      v37->Mask = (unsigned __int64)ExpInterlockedFlushSList((PSLIST_HEADER)v146);
      return 0LL;
    case 0x25u:
      v38 = v147;
      v38->Mask = (unsigned __int64)ExpInterlockedPopEntrySList((PSLIST_HEADER)v146);
      return 0LL;
    case 0x26u:
      v39 = Timeout;
      *(_QWORD *)&v39->Relationship = ExpInterlockedPushEntrySList((PSLIST_HEADER)v146, (PSLIST_ENTRY)v147);
      return 0LL;
    case 0x27u:
      v40 = v147;
      LOWORD(v40->Mask) = ExQueryDepthSList((PSLIST_HEADER)v146);
      return 0LL;
    case 0x28u:
      if ( !v146 || !v147 )
        return 3238002694LL;
      if ( *((_BYTE *)v146 + 2) == 40 )
      {
        v33 = v146[10];
      }
      else
      {
        v34 = v146[6];
        if ( !v34 || *(_DWORD *)v34 != 523124044 )
          goto LABEL_112;
        v33 = *(_QWORD *)(v34 + 176);
      }
      if ( v33 )
      {
        v35 = -1056964607;
        if ( (int)IoGetActivityIdIrp(v33, v147) >= 0 )
          return 0;
        return v35;
      }
LABEL_112:
      v36 = -1056964607;
      if ( EtwActivityIdControl(3u, (LPGUID)v147) >= 0 )
        return 0;
      return v36;
    case 0x29u:
      v41 = v146;
      v42 = *(_DWORD *)(**(_QWORD **)(v13 - 16) + 56LL);
      if ( v42 == -1 )
        return 3238002697LL;
      if ( !v146 || *(_WORD *)v146 != 1 || *((_DWORD *)v146 + 1) < 4u )
        return 3238002694LL;
      *((_WORD *)v146 + 1) = v42;
      result = 0LL;
      *((_WORD *)v41 + 4) = -1;
      *((_BYTE *)v41 + 10) = -1;
      return result;
    case 0x2Au:
      LOBYTE(a3) = 1;
      return StorpGetOriginalMdl(v16, v146, a3, v147);
    case 0x2Bu:
      LOBYTE(a3) = 1;
      return StorpGetSystemAddress(v16, v146, a3, v147);
    case 0x2Cu:
      return StorpGetDataInSgList(v13, v146, v147);
    case 0x2Eu:
      return StorpSetUnitAttributes(v13, v146, (unsigned int)v147);
    case 0x2Fu:
      v43 = (LARGE_INTEGER *)v147;
      v44 = (union _LARGE_INTEGER *)v146;
      if ( !v147 )
        return 3238002694LL;
      if ( v146 )
        *v146 = 1LL;
      if ( UseQPCTime )
        *v43 = KeQueryPerformanceCounter(v44);
      else
        v43->QuadPart = KeQueryUnbiasedInterruptTime();
      return 0LL;
    case 0x30u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      if ( v146 )
        return StorpUnitInitializePoFxPower(v13, v146, v147, Timeout);
      else
        return StorpAdapterInitializePoFxPower(v13, v147, Timeout);
    case 0x31u:
      v45 = 0;
      v14 = 0;
      v46 = (unsigned int)Timeout;
      v47 = **(_QWORD **)(v13 - 16);
      if ( !v147 )
        goto LABEL_157;
      v48 = BYTE2(v147->Mask);
      if ( v48 == 40 )
        Mask = v147[6].Mask;
      else
        Mask = v147[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return 3238002694LL;
      if ( v48 == 40 )
        v45 = *(_DWORD *)&v147[1].Group;
      else
        v45 = *(_DWORD *)&v147->Reserved[1];
LABEL_157:
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 2u )
        return 3238002696LL;
      if ( (_DWORD)a6 )
        return 3238002694LL;
      if ( v146 )
      {
        if ( *(_WORD *)v146 != 1 )
          return 3238002694LL;
        if ( *((_DWORD *)v146 + 1) < 4u )
          return 3238002694LL;
        v136 = *((unsigned __int8 *)v146 + 8);
        *(_WORD *)((char *)&v136 + 1) = *(_WORD *)((char *)v146 + 9);
        Unit = RaidAdapterFindUnit(v47, v136);
        v51 = Unit;
        if ( !Unit )
          return 3238002694LL;
        if ( (v45 & 0x100800) == 0 )
          goto LABEL_415;
        if ( RaidUnitCheckAndAcquirePoFx(Unit) )
          goto LABEL_243;
        if ( *(_QWORD *)(*(_QWORD *)(v51 + 24) + 5088LL) )
        {
LABEL_415:
          if ( CurrentIrql == 2 || (*(_BYTE *)(v51 + 449) & 1) != 0 || *(char *)(v51 + 448) < 0 )
            v11 = 2;
          result = RaidUnitPoFxActivateComponentFromMiniport(v51, v46, v11);
          v14 = result;
          if ( Mask )
          {
            *(_BYTE *)(Mask + 16) |= 0x80u;
            return result;
          }
        }
      }
      else
      {
        if ( !*(_QWORD *)(v47 + 5088) || (v45 & 0x100800) != 0 )
          return 3238002695LL;
        if ( CurrentIrql == 2 || (*(_BYTE *)(v47 + 108) & 3) != 0 )
          v52 = 2LL;
        else
          v52 = 0LL;
        v14 = -1056964596;
        if ( (unsigned __int8)RaidAdapterPoFxActivateComponent(v47, (unsigned int)Timeout, v52) )
          v14 = 0;
        if ( Mask )
        {
          *(_BYTE *)(Mask + 16) |= 0x80u;
          return v14;
        }
      }
      return v14;
    case 0x32u:
      v14 = 0;
      v53 = (unsigned int)Timeout;
      v54 = **(_QWORD **)(v13 - 16);
      if ( !v147 )
        goto LABEL_189;
      if ( BYTE2(v147->Mask) == 40 )
        Mask = v147[6].Mask;
      else
        Mask = v147[3].Mask;
      if ( !Mask || *(_DWORD *)Mask != 523124044 )
        return 3238002694LL;
      if ( *(char *)(Mask + 16) >= 0 )
        return v14;
LABEL_189:
      if ( KeGetCurrentIrql() > 2u && !Mask )
        return 3238002696LL;
      if ( (_DWORD)a6 )
        return 3238002694LL;
      if ( !v146 )
      {
        if ( !*(_QWORD *)(v54 + 5088) )
          return 3238002695LL;
        if ( KeGetCurrentIrql() <= 2u )
        {
          v56 = -1056964596;
          if ( (unsigned __int8)RaidAdapterPoFxIdleComponent(**(_QWORD **)(v13 - 16), (unsigned int)Timeout, 0LL) )
            return 0;
          return v56;
        }
        else
        {
          *(_BYTE *)(Mask + 17) |= 1u;
          result = 3238002700LL;
          *(_DWORD *)(Mask + 748) = v53;
        }
        return result;
      }
      if ( *(_WORD *)v146 == 1 && *((_DWORD *)v146 + 1) >= 4u )
      {
        v137 = *((unsigned __int8 *)v146 + 8);
        *(_WORD *)((char *)&v137 + 1) = *(_WORD *)((char *)v146 + 9);
        v55 = RaidAdapterFindUnit(v54, v137);
        if ( v55 )
        {
          if ( KeGetCurrentIrql() <= 2u )
            return RaidUnitPoFxIdleComponentFromMiniport(v55, v53);
          *(_BYTE *)(Mask + 17) |= 2u;
          result = 3238002700LL;
          *(_DWORD *)(Mask + 748) = v53;
          return result;
        }
      }
      return 3238002694LL;
    case 0x33u:
      v57 = (unsigned int)v147;
      v58 = Timeout;
      v59 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v146 )
      {
        v65 = *(_QWORD **)(v59 + 5088);
        if ( !v65 )
          return 3238002695LL;
        v66 = v65[1];
        if ( (unsigned int)((_DWORD)v147 + 1) >= *(_DWORD *)(v66 + 8)
          && (unsigned int)((_DWORD)v147 + 1) <= *(_DWORD *)(v66 + 8) )
        {
          PoFxSetComponentLatency(*v65, (unsigned int)v147, Timeout);
          return 0LL;
        }
        return 3238002694LL;
      }
      if ( *(_WORD *)v146 != 1 )
        return 3238002694LL;
      if ( *((_DWORD *)v146 + 1) < 4u )
        return 3238002694LL;
      v138 = *((unsigned __int8 *)v146 + 8);
      *(_WORD *)((char *)&v138 + 1) = *(_WORD *)((char *)v146 + 9);
      v60 = RaidAdapterFindUnit(v59, v138);
      v61 = v60;
      if ( !v60 )
        return 3238002694LL;
      if ( !RaidUnitCheckAndAcquirePoFx(v60) )
        return 3238002695LL;
      v62 = *(_QWORD **)(v61 + 1744);
      v63 = v62[1];
      if ( v57 + 1 >= *(_DWORD *)(v63 + 8) && v57 + 1 <= *(_DWORD *)(v63 + 8) )
      {
        PoFxSetComponentLatency(*v62, v57, v58);
        v64 = 0;
        goto LABEL_215;
      }
      goto LABEL_214;
    case 0x34u:
      v67 = (unsigned int)v147;
      v68 = Timeout;
      v69 = **(_QWORD **)(v13 - 16);
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v146 )
      {
        v73 = *(_QWORD **)(v69 + 5088);
        if ( !v73 )
          return 3238002695LL;
        v74 = v73[1];
        if ( (unsigned int)((_DWORD)v147 + 1) >= *(_DWORD *)(v74 + 8)
          && (unsigned int)((_DWORD)v147 + 1) <= *(_DWORD *)(v74 + 8) )
        {
          PoFxSetComponentResidency(*v73, (unsigned int)v147, Timeout);
          return 0LL;
        }
        return 3238002694LL;
      }
      if ( *(_WORD *)v146 != 1 )
        return 3238002694LL;
      if ( *((_DWORD *)v146 + 1) < 4u )
        return 3238002694LL;
      v139 = *((unsigned __int8 *)v146 + 8);
      *(_WORD *)((char *)&v139 + 1) = *(_WORD *)((char *)v146 + 9);
      v70 = RaidAdapterFindUnit(v69, v139);
      v61 = v70;
      if ( !v70 )
        return 3238002694LL;
      if ( !RaidUnitCheckAndAcquirePoFx(v70) )
        return 3238002695LL;
      v71 = *(_QWORD **)(v61 + 1744);
      v72 = v71[1];
      if ( v67 + 1 < *(_DWORD *)(v72 + 8) || v67 + 1 > *(_DWORD *)(v72 + 8) )
      {
LABEL_214:
        v64 = -1056964602;
      }
      else
      {
        PoFxSetComponentResidency(*v71, v67, v68);
        v64 = 0;
      }
LABEL_215:
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v61 + 1736));
      return v64;
    case 0x35u:
      v75 = **(_QWORD **)(v13 - 16);
      v76 = v147;
      v77 = Timeout;
      v78 = a6;
      v79 = a9;
      v143 = LowAddress;
      *(PHYSICAL_ADDRESS *)&v144 = HighAddress;
      if ( KeGetCurrentIrql() <= 2u )
      {
        if ( v146 )
        {
          if ( *(_WORD *)v146 != 1 )
            return 3238002694LL;
          if ( *((_DWORD *)v146 + 1) < 4u )
            return 3238002694LL;
          v140 = *((unsigned __int8 *)v146 + 8);
          *(_WORD *)((char *)&v140 + 1) = *(_WORD *)((char *)v146 + 9);
          v80 = RaidAdapterFindUnit(v75, v140);
          v51 = v80;
          if ( !v80 )
            return 3238002694LL;
          if ( RaidUnitCheckAndAcquirePoFx(v80) )
          {
            v81 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    **(_QWORD **)(v51 + 1744),
                    v76,
                    v77,
                    v78,
                    (PHYSICAL_ADDRESS)v143.QuadPart,
                    v144,
                    v79);
            v14 = RaidNtStatusToStorStatus(v81);
LABEL_243:
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v51 + 1736));
            return v14;
          }
        }
        else
        {
          v82 = *(_QWORD **)(v75 + 5088);
          if ( v82 )
          {
            v83 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxPowerControl)(
                    *v82,
                    v147,
                    Timeout,
                    a6,
                    (PHYSICAL_ADDRESS)LowAddress.QuadPart,
                    (PHYSICAL_ADDRESS)HighAddress.QuadPart,
                    a9);
            return RaidNtStatusToStorStatus(v83);
          }
        }
        return 3238002695LL;
      }
      if ( a9 )
        *a9 = 0LL;
      return 3238002696LL;
    case 0x36u:
      return StorpFlushDataBufferMdl(v16, v146);
    case 0x37u:
      v99 = v146;
      v100 = v147;
      v101 = Timeout;
      v102 = **(_QWORD **)(v13 - 16);
      if ( !Timeout )
        return 3238002694LL;
      if ( !v102 )
        return 3238002694LL;
      Timeout->Relationship = RelationProcessorCore;
      if ( v99 )
      {
        if ( *(_WORD *)v99 != 1 )
          return 3238002694LL;
        if ( *((_DWORD *)v99 + 1) < 4u )
          return 3238002694LL;
        v141 = *((unsigned __int8 *)v99 + 8);
        *(_WORD *)((char *)&v141 + 1) = *(_WORD *)((char *)v99 + 9);
        if ( !RaidAdapterFindUnit(v102, v141) )
          return 3238002694LL;
      }
      if ( v100->Mask == 0x481F895FDCAF9C10LL && *(_QWORD *)&v100->Group == 0x3356F5D2CED492A4LL )
      {
        v101->Relationship = (unsigned __int8)g_InWinPE;
        return 0LL;
      }
      if ( v100->Mask == 0x444B2B37D52CE820LL && *(_QWORD *)&v100->Group == 0x7BD091E5920033A6LL )
      {
        v101->Relationship = RelationNumaNode;
        return 0LL;
      }
      if ( v100->Mask != 0x48E8F89B2B9443ACLL || *(_QWORD *)&v100->Group != 0x5AFD6EC9B62C92B2LL )
        return v14;
      v101->Relationship = (unsigned __int8)ExIsSoftBoot();
      return 0LL;
    case 0x38u:
      v28 = v147;
      if ( !v146 || !v147 )
        return 3238002694LL;
      ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v146);
      LODWORD(v28->Mask) = ProcessorIndexFromNumber;
      if ( ProcessorIndexFromNumber == -1 )
        return (unsigned int)-1056964602;
      return v11;
    case 0x39u:
      v84 = (char)v147;
      if ( v146 )
        return 3238002694LL;
      v85 = *(_QWORD **)(v13 - 16);
      v86 = *v85;
      if ( !*v85 || !*(_QWORD *)(v86 + 5088) )
        return 3238002694LL;
      if ( (*(_BYTE *)(v86 + 108) & 0x40) != 0 )
        return 3238002689LL;
      RaidAdapterPoFxSetDeviceIdleTimeout(*v85, (unsigned int)v147, a3, 0LL);
      if ( !StorEtwLoggingEnabled || (byte_1C0069841 & 1) == 0 )
        return 0LL;
      McTemplateK0pqqq_EtwWriteTransfer(
        v87,
        (unsigned int)&EventAdapterIdleTimeoutSet,
        v88,
        **(_QWORD **)(v86 + 5088),
        *(_DWORD *)(v86 + 56),
        v84,
        *(_DWORD *)(v86 + 5104));
      return 0LL;
    case 0x3Au:
    case 0x3Bu:
    case 0x3Cu:
      return v14;
    case 0x3Du:
      if ( !v146 )
        return 3238002694LL;
      *(_BYTE *)v146 = g_OSisUpgrade;
      return 0LL;
    case 0x3Eu:
      LOBYTE(v17) = 1;
      return StorAdapterDeviceRegistryKeyProxy(v13, v17, &v146);
    case 0x3Fu:
      return StorAdapterDeviceRegistryKeyProxy(v13, 0LL, &v146);
    case 0x40u:
      v108 = **(_QWORD **)(v13 - 16);
      if ( !v108 || (unsigned int)v146 >= 0x14 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v108 + 568) & 1) == 0 )
        return 3238002689LL;
      *(_DWORD *)(v108 + 4420) = (_DWORD)v146;
      return 0LL;
    case 0x41u:
      v89 = (unsigned int)a6;
      v90 = LowAddress;
      if ( v146 )
        return 3238002694LL;
      v91 = **(_QWORD **)(v13 - 16);
      if ( !v91 )
        return 3238002694LL;
      v92 = *(_QWORD *)(v91 + 5088);
      if ( !v92 || *(_BYTE *)(v92 + 28) )
        return 3238002689LL;
      LogicalProcessorRelationship = RaidRegisterPerfStates(
                                       *(_QWORD *)(v91 + 8),
                                       (_DWORD)v147,
                                       (_DWORD)Timeout,
                                       (_DWORD)a6,
                                       LowAddress.QuadPart,
                                       *(_QWORD *)v92);
      if ( LogicalProcessorRelationship < 0 )
        return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RaidAdapterCacheOperationalPowerRange)(
                              *(_QWORD *)(v91 + 5088),
                              v89,
                              (PHYSICAL_ADDRESS)v90.QuadPart) )
      {
        *(_QWORD *)(*(_QWORD *)(v91 + 5088) + 48LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v91 + 5088) + 56LL) = -1LL;
        *(_QWORD *)(*(_QWORD *)(v91 + 5088) + 64LL) = -1LL;
      }
      *(_BYTE *)(*(_QWORD *)(v91 + 5088) + 28LL) = v89;
      ((void (__fastcall *)(_QWORD, _QWORD))StorpLogRegisterAdapterPerfStates)(v91, (PHYSICAL_ADDRESS)v90.QuadPart);
      return 0LL;
    case 0x42u:
      if ( v146 || (_DWORD)Timeout )
        return 3238002694LL;
      v93 = *(_QWORD *)(v13 - 16);
      if ( !*(_QWORD *)v93 )
        return v14;
      v94 = *(__int64 **)(*(_QWORD *)v93 + 5088LL);
      if ( !v94 )
        return v14;
      v95 = KeGetCurrentIrql();
      v144 = 0LL;
      v96 = *((unsigned __int8 *)v94 + 28);
      if ( !(_BYTE)v96 || (unsigned int)a6 >= v96 )
        return 3238002694LL;
      LODWORD(v144) = (_DWORD)a6;
      v97 = 2LL;
      DWORD2(v144) = LowAddress.LowPart;
      v98 = *v94;
      if ( v95 < 2u )
        v97 = 0LL;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PoFxIssueComponentPerfStateChange)(
        v98,
        v97,
        (unsigned int)v147,
        &v144,
        (PHYSICAL_ADDRESS)HighAddress.QuadPart);
      return 0LL;
    case 0x43u:
      if ( KeGetCurrentIrql() )
        return 3238002696LL;
      v103 = v147;
      v14 = -1056964602;
      v104 = v146;
      if ( !v147 )
        return v14;
      LOBYTE(v147->Mask) = 0;
      v105 = **(_QWORD **)(a2 - 16);
      if ( !v105 )
        return v14;
      if ( v104 )
      {
        if ( *(_WORD *)v104 != 1 )
          return v14;
        if ( *((_DWORD *)v104 + 1) < 4u )
          return v14;
        v142 = *((unsigned __int8 *)v104 + 8);
        *(_WORD *)((char *)&v142 + 1) = *(_WORD *)((char *)v104 + 9);
        v106 = RaidAdapterFindUnit(v105, v142);
        if ( !v106 )
          return v14;
        v107 = *(struct _DEVICE_OBJECT **)(v106 + 8);
      }
      else
      {
        v107 = *(struct _DEVICE_OBJECT **)(v105 + 8);
      }
      if ( !v107 )
        return v14;
      LogicalProcessorRelationship = RaidGetD3ColdInterface(v107);
      if ( LogicalProcessorRelationship < 0 )
        return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
      LOBYTE(v103->Mask) = RaidGetD3ColdCapability(0LL);
      return 0LL;
    case 0x44u:
      if ( v146 )
        return 3238002695LL;
      return RaidInitializeRpmb(v13, v147);
    case 0x45u:
      return StorpAllocateHostMemoryBuffer(
               v13,
               (int)v146,
               (int)v147,
               (int)Timeout,
               (int)a6,
               LowAddress,
               HighAddress,
               (__int64)a9,
               a10,
               a11);
    case 0x46u:
      return StorpFreeHostMemoryBuffer(v13);
    case 0x47u:
      v109 = **(_QWORD **)(v13 - 16);
      if ( !v109 )
        return 3238002694LL;
      if ( !*(_BYTE *)(v109 + 524) )
        return 3238002695LL;
      if ( !v146 || !v147 )
        return 3238002694LL;
      if ( *((_BYTE *)v146 + 2) == 40 )
      {
        v110 = v146[10];
      }
      else
      {
        v111 = v146[6];
        if ( !v111 || *(_DWORD *)v111 != 523124044 )
          return 3238002694LL;
        v110 = *(_QWORD *)(v111 + 176);
      }
      if ( !v110 )
        return 3238002694LL;
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !(_DWORD)Timeout )
        return 0LL;
      v112 = IoPropagateIrpExtension();
      return RaidNtStatusToStorStatus(v112);
    case 0x48u:
      v113 = Timeout;
      *(_QWORD *)&v113->Relationship = ExInterlockedInsertHeadList(
                                         (PLIST_ENTRY)v146,
                                         (PLIST_ENTRY)v147,
                                         (PKSPIN_LOCK)a6);
      return 0LL;
    case 0x49u:
      v114 = Timeout;
      *(_QWORD *)&v114->Relationship = ExInterlockedInsertTailList(
                                         (PLIST_ENTRY)v146,
                                         (PLIST_ENTRY)v147,
                                         (PKSPIN_LOCK)a6);
      return 0LL;
    case 0x4Au:
      v115 = v147;
      v115->Mask = (unsigned __int64)ExInterlockedRemoveHeadList((PLIST_ENTRY)v146, (PKSPIN_LOCK)Timeout);
      return 0LL;
    case 0x4Bu:
      KeInitializeSpinLock(v146);
      return 0LL;
    case 0x4Cu:
      return StorpGetPfns(v13, (_DWORD)v146, (_DWORD)v147, (_DWORD)Timeout, (__int64)a6, LowAddress.QuadPart);
    case 0x4Du:
      if ( !v146 || !**(_QWORD **)(v13 - 16) )
        return 3238002694LL;
      return RaidInitializeCryptoEngine();
    case 0x4Eu:
      v116 = v147;
      if ( !v146 || !v147 )
        return 3238002694LL;
      if ( *((_BYTE *)v146 + 2) == 40 )
        v117 = v146[12];
      else
        v117 = v146[6];
      LODWORD(v147->Mask) = **(_DWORD **)(v117 + 784);
      HIDWORD(v116->Mask) = *(_DWORD *)(*(_QWORD *)(v117 + 784) + 4LL);
      *(_DWORD *)&v116->Group = *(_DWORD *)(*(_QWORD *)(v117 + 784) + 8LL);
      result = 0LL;
      v116[1].Mask = *(_QWORD *)(*(_QWORD *)(v117 + 784) + 16LL);
      return result;
    case 0x4Fu:
      if ( !v147 )
        return 3238002694LL;
      v118 = v147[3].Mask;
      if ( v118 > 0x1000 )
        return 3238002698LL;
      if ( v118 && !*(_QWORD *)&v147[3].Group || *(_QWORD *)&v147[3].Group && !v118 )
        return 3238002694LL;
      v119 = **(_QWORD **)(v13 - 16);
      if ( !v119 )
        return 0LL;
      StorpTelemetryMiniportEvent(v119, v146, v147, 0LL);
      return 0LL;
    case 0x50u:
      v122 = **(_QWORD **)(v13 - 16);
      if ( !v122 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v122 + 104) & 0x10) == 0 )
        return 3238002695LL;
      *(_DWORD *)(v122 + 532) = (_DWORD)v146;
      return 0LL;
    case 0x51u:
      if ( !(_DWORD)v146 )
        return 0LL;
      StorDelayExecution((ULONG)v146);
      return 0LL;
    case 0x52u:
      return StorpAllocateContiguousMemorySpecifyCacheNodeEx(
               v13,
               (_DWORD)v146,
               (_DWORD)v147,
               (_DWORD)Timeout,
               (__int64)a6,
               LowAddress.LowPart,
               HighAddress.LowPart,
               (__int64)a9,
               a10);
    case 0x53u:
      return StorpFreeContiguousMemorySpecifyCacheEx(v13, v146, v147, (unsigned int)Timeout, a6);
    case 0x54u:
      v123 = (int)v147;
      v124 = **(_QWORD **)(v13 - 16);
      if ( !v124 )
        return 3238002694LL;
      if ( (*(_BYTE *)(v124 + 104) & 0x10) == 0 )
        return 3238002695LL;
      *(_DWORD *)(v124 + 532) = (_DWORD)v146;
      result = 0LL;
      *(_DWORD *)(v124 + 536) = v123;
      return result;
    case 0x55u:
    case 0x56u:
    case 0x57u:
      return StorEtwMiniportEventProxy(v13, a1, &v146);
    case 0x58u:
      v14 = 0;
      v125 = Timeout;
      Timer = ExAllocateTimer(v146, v147, 4LL, a4);
      *(_QWORD *)&v125->Relationship = Timer;
      if ( !Timer )
        return 3238002689LL;
      return v14;
    case 0x59u:
      QuadPart = (_BYTE *)LowAddress.QuadPart;
      if ( !LowAddress.QuadPart )
        return 3238002694LL;
      *QuadPart = ExSetTimer(v146, v147, Timeout, a6);
      return 0LL;
    case 0x5Au:
      v128 = Timeout;
      if ( !Timeout )
        return 3238002694LL;
      v14 = 0;
      v129 = ExCancelTimer(v146, v147);
      LOBYTE(v128->Relationship) = v129;
      if ( v129 )
        return v14;
      return 3238002689LL;
    case 0x5Bu:
      v130 = (_BYTE *)LowAddress.QuadPart;
      if ( !LowAddress.QuadPart )
        return 3238002694LL;
      *v130 = ExDeleteTimer(v146, (unsigned __int8)v147, (unsigned __int8)Timeout, a6);
      return 0LL;
    case 0x5Cu:
      v14 = -1056964602;
      if ( !v146 )
        return v14;
      LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
      *(_DWORD *)v146 = LockArray_high;
      if ( LockArray_high == -1 )
        return (unsigned int)-1056964602;
      return v11;
    case 0x5Du:
      return StorAcquireSpinLockEx(v13, (unsigned int)v146, v147, Timeout);
    case 0x5Eu:
      v31 = (ULONG *)v146;
      if ( !v146 )
        return 3238002694LL;
      *v31 = KeQueryActiveProcessorCountEx(0xFFFFu);
      return 0LL;
    case 0x5Fu:
      v131 = v147;
      if ( !v146 || !v147 )
        return 3238002694LL;
      LOBYTE(v131->Mask) = KeRemoveQueueDpc((PRKDPC)v146);
      return 0LL;
    case 0x60u:
      if ( !v147 )
        return 3238002694LL;
      v120 = v147[3].Mask;
      if ( v120 > 0x1000 )
        return 3238002698LL;
      if ( v120 && !*(_QWORD *)&v147[3].Group || *(_QWORD *)&v147[3].Group && !v120 )
        return 3238002694LL;
      v121 = **(_QWORD **)(v13 - 16);
      if ( !v121 )
        return 0LL;
      StorpTelemetryMiniportEvent(v121, v146, v147, (unsigned int)Timeout);
      return 0LL;
    case 0x61u:
      if ( (_DWORD)v146 || !v147 )
        return 3238002694LL;
      LOBYTE(v147->Mask) = StorageD3InModernStandbyEnabled;
      return 0LL;
    case 0x62u:
      if ( !Timeout || !LowAddress.QuadPart || !(_DWORD)a6 )
        return 3238002694LL;
      return StorEtwMiniportLogError(v13, (_DWORD)v146, (_DWORD)v147, (_DWORD)Timeout, (_DWORD)a6, LowAddress.QuadPart);
    case 0x63u:
      if ( !v146 )
        return 3238002694LL;
      KeInitializeEvent((PRKEVENT)v146, (EVENT_TYPE)v147, (BOOLEAN)Timeout);
      return 0LL;
    case 0x64u:
      if ( !Timeout || *(_QWORD *)&Timeout->Relationship )
        v132 = KeGetCurrentIrql() <= 1u;
      else
        v132 = KeGetCurrentIrql() <= 2u;
      if ( !v132 )
        return 3238002696LL;
      if ( !v146 )
        return 3238002694LL;
      v133 = -1056964607;
      if ( KeWaitForSingleObject(v146, Executive, 0, (BOOLEAN)v147, (PLARGE_INTEGER)Timeout) >= 0 )
        return 0;
      return v133;
    case 0x65u:
      if ( KeGetCurrentIrql() > 2u )
        return 3238002696LL;
      if ( !v146 )
        return 3238002694LL;
      KeSetEvent((PRKEVENT)v146, 0, 0);
      return 0LL;
    case 0x66u:
      LogicalProcessorRelationship = StorReset(v13, (unsigned int)v146);
      return RaidNtStatusToStorStatus((unsigned int)LogicalProcessorRelationship);
    case 0x67u:
      if ( !v147 )
        return 3238002694LL;
      if ( (_DWORD)v146 != 1 )
        return 3238002694LL;
      v134 = **(_QWORD **)(v13 - 16);
      if ( !v134 )
        return 3238002694LL;
      v135 = -1056964607;
      if ( (int)RaMiniportSaveFeatureList(v134 + 320) >= 0 )
        return 0;
      return v135;
    default:
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_D(WPP_GLOBAL_Control->AttachedDevice, 80LL, &WPP_8537d3e98fbc352c94324671ced0aca0_Traceguids, a1);
      }
      return v14;
  }
}
