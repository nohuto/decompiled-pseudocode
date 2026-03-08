/*
 * XREFs of HalpMmAllocCtxAlloc @ 0x140396F30
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 *     HalpAcpiAllocateMemory @ 0x14037AB24 (HalpAcpiAllocateMemory.c)
 *     HalpIommuAllocateAndZeroPageTable @ 0x14037AC5C (HalpIommuAllocateAndZeroPageTable.c)
 *     ExtEnvAllocateMemory @ 0x14037C828 (ExtEnvAllocateMemory.c)
 *     HalpIommuCreateDmarPageTable @ 0x14037CA68 (HalpIommuCreateDmarPageTable.c)
 *     HalpCmciInitializeErrorPacket @ 0x14037CCA4 (HalpCmciInitializeErrorPacket.c)
 *     HalpHvInitMcaPcrContext @ 0x14037CEA4 (HalpHvInitMcaPcrContext.c)
 *     HalpDmaAllocateDomain @ 0x14038C660 (HalpDmaAllocateDomain.c)
 *     HalpIommuGetDeviceId @ 0x14038CC4C (HalpIommuGetDeviceId.c)
 *     HalpIommuCloneDeviceId @ 0x14038D3A8 (HalpIommuCloneDeviceId.c)
 *     HalpDmaInitializeControllers @ 0x140398798 (HalpDmaInitializeControllers.c)
 *     HalInitializeBios @ 0x14039A4D0 (HalInitializeBios.c)
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403A43AC (HalpIommuAllocateDmaDomain.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A9AD0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     IommupGetSystemContext @ 0x1403AB428 (IommupGetSystemContext.c)
 *     HalpTscReserveResources @ 0x1403AC968 (HalpTscReserveResources.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpInterruptSetLineSpecificOverride @ 0x14050342C (HalpInterruptSetLineSpecificOverride.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140504F80 (HalpAllocatePmcCounterSetEx.c)
 *     HalpHvInitMcaStatusMsrCache @ 0x140509010 (HalpHvInitMcaStatusMsrCache.c)
 *     IommupPasidDeviceCreate @ 0x14050C278 (IommupPasidDeviceCreate.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140510488 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpDmaGetReservedRegionsForTranslateDomain @ 0x140510718 (HalpDmaGetReservedRegionsForTranslateDomain.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405154C8 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuTraceFault @ 0x1405161EC (HalpIommuTraceFault.c)
 *     HalpNumaAddRangeProximity @ 0x140518980 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x14051A480 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14051A90C (EmonAllocateResources.c)
 *     ExtEnvAllocatePhysicalMemory @ 0x14051CE10 (ExtEnvAllocatePhysicalMemory.c)
 *     HalpRegisterUsbController @ 0x14051EB18 (HalpRegisterUsbController.c)
 *     IommuEnableDevicePasid @ 0x14051FFF0 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x140520AF0 (IommuGetLibraryContext.c)
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140523210 (IommuDomainAttachDevice.c)
 *     IommuDomainAttachDeviceEx @ 0x1405234A0 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140523F30 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuReserveLogicalAddressRange @ 0x140524080 (IommuReserveLogicalAddressRange.c)
 *     Amd64AddProfileSource @ 0x1405263A0 (Amd64AddProfileSource.c)
 *     Amd64InitializeUncoreStatus @ 0x140527558 (Amd64InitializeUncoreStatus.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14053000C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpBuddyAllocatorSplitNode @ 0x1405304E8 (HalpBuddyAllocatorSplitNode.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409312D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMceInitializeErrorPacket @ 0x140A87D2C (HalpMceInitializeErrorPacket.c)
 *     HalpMcaInitializePcrContext @ 0x140A8CFF8 (HalpMcaInitializePcrContext.c)
 *     HalpInitMemoryCachingRequirementsTable @ 0x140A8D6E8 (HalpInitMemoryCachingRequirementsTable.c)
 *     HalpMapCR3Ex @ 0x140A8D980 (HalpMapCR3Ex.c)
 *     HalpBuildResumeStructures @ 0x140A92E78 (HalpBuildResumeStructures.c)
 *     HalpMapNvsArea @ 0x140A93E80 (HalpMapNvsArea.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B60FAC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140B610F0 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B61178 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140B6124C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B61370 (HalpDmaAllocateReservedMapping.c)
 *     HalpAcpiDetectPiix4 @ 0x140B62B08 (HalpAcpiDetectPiix4.c)
 *     HalpAcpiPopulateTableCache @ 0x140B62B7C (HalpAcpiPopulateTableCache.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B8DE04 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     HalpMmAllocCtxAllocBuffer @ 0x140397480 (HalpMmAllocCtxAllocBuffer.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpMmAllocCtxAlloc(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  KIRQL v6; // al
  __int64 *v7; // rdi
  unsigned __int64 v8; // r12
  unsigned int v9; // r8d
  unsigned int v10; // esi
  __int64 v11; // r11
  unsigned int v12; // r13d
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // r10d
  unsigned int v17; // edx
  __int64 v18; // r11
  unsigned __int64 *v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rsi
  int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned int v25; // r8d
  bool v26; // cc
  unsigned int v27; // edx
  unsigned int v28; // r13d
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 **v31; // rax
  __int64 v32; // rax
  unsigned int v34; // ecx
  __int64 v35; // rcx
  bool v36; // sf
  bool v37; // zf
  __int64 v38; // rax
  unsigned int v39; // r10d
  __int64 v40; // rax
  unsigned __int64 v41; // r10
  __int64 v42; // rcx
  int v43; // eax
  unsigned int v44; // esi
  unsigned __int64 *v45; // rcx
  __int64 v46; // rcx
  unsigned __int64 *v47; // rcx
  int v48; // ecx
  unsigned __int64 *v49; // r11
  __int64 v50; // rax
  unsigned int v51; // r10d
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  int v54; // edx
  __int64 v55; // rax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r10
  _DWORD *v58; // r9
  int v59; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v63; // eax
  __int64 v64; // [rsp+30h] [rbp-48h]
  int i; // [rsp+38h] [rbp-40h]
  __int64 v66; // [rsp+58h] [rbp-20h]
  unsigned int v67; // [rsp+D0h] [rbp+58h]

  v2 = 0LL;
  if ( !a2 )
    KeBugCheckEx(0xACu, 0LL, 0xA0A0uLL, (ULONG_PTR)"minkernel\\hals\\lib\\mm\\memory.c", 0xBD8uLL);
  v3 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = v3 + 16;
  if ( v3 >= 0x1000 )
    v4 = (a2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v5 = v4 >> 4;
  if ( v4 >= 0x1000 )
  {
    v4 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v7 = (__int64 *)HalpMmAllocCtxAllocBuffer(4096LL, v4);
    if ( !v7 )
      return v2;
LABEL_37:
    v29 = 0LL;
    LOBYTE(v8) = KeAcquireSpinLockRaiseToDpc(&qword_140C63A50);
    goto LABEL_22;
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C63A50);
  v7 = (__int64 *)HalpNPPoolAllocCtx;
  v8 = v6;
  while ( 2 )
  {
    if ( v7 != &HalpNPPoolAllocCtx )
    {
      v9 = *((_DWORD *)v7 + 8);
      v11 = v7[5];
      v10 = *((_DWORD *)v7 + 6);
      v12 = v10 < v9 ? v10 : 0;
      v13 = v9 - 1;
      if ( !(_DWORD)v5 )
      {
        v28 = v12 & 0xFFFFFFF8;
        goto LABEL_21;
      }
      v14 = v7[5] & 4;
      v64 = v14;
      v15 = v14 != 0 ? 0x20 : 0;
      for ( i = v15; ; v15 = i )
      {
        v16 = v15 + v13;
        v17 = v15 + v12;
        v18 = v11 - (v14 != 0 ? 4 : 0);
        v66 = v18;
        if ( v13 - v12 + 1 >= (unsigned int)v5 )
          break;
        v27 = -1;
LABEL_32:
        if ( !v12 )
          goto LABEL_20;
        v11 = v7[5];
        v34 = v5 + v10;
        v12 = 0;
        if ( (unsigned int)v5 + v10 > v9 )
          v34 = v9;
        v13 = v34 - 1;
      }
      v19 = (unsigned __int64 *)(v18 + 8 * ((unsigned __int64)v17 >> 6));
      v20 = ((1LL << (v17 & 0x3F)) - 1) | *v19;
      v67 = v16 - v5 + 1;
      v21 = (unsigned __int64)v67 >> 6;
      v22 = v18 + 8 * v21;
      if ( (unsigned int)v5 > 0x7F )
      {
        v41 = v22 + 8;
        if ( (v67 & 0x3F) == 0 )
          v41 = v18 + 8 * v21;
        if ( v20 )
        {
          if ( *++v19 )
          {
            v44 = v67;
            goto LABEL_75;
          }
          v37 = !_BitScanReverse64((unsigned __int64 *)&v42, v20);
          if ( v37 )
            v43 = 64;
          else
            v43 = 63 - v42;
        }
        else
        {
          v43 = 0;
        }
        v44 = v67;
LABEL_64:
        v27 = ((unsigned int)(((__int64)v19 - v18) >> 3) << 6) - v43;
        if ( v27 > v44 )
          goto LABEL_30;
        v45 = &v19[(unsigned int)(v5 - v43) >> 6];
        while ( ++v19 != v45 )
        {
          if ( *v19 )
            goto LABEL_75;
        }
        if ( (((_BYTE)v5 - (_BYTE)v43) & 0x3F) != 0 )
        {
          v37 = !_BitScanForward64((unsigned __int64 *)&v46, *v19);
          if ( v37 )
            LODWORD(v46) = 64;
          if ( (unsigned int)v46 < (((_BYTE)v5 - (_BYTE)v43) & 0x3Fu) )
          {
LABEL_75:
            while ( 1 )
            {
              v47 = v19;
              if ( (unsigned __int64)v19 > v41 )
                goto LABEL_30;
              if ( !*++v19 )
              {
                v37 = !_BitScanReverse64((unsigned __int64 *)&v47, *v47);
                if ( v37 )
                  v43 = 64;
                else
                  v43 = 63 - (_DWORD)v47;
                goto LABEL_64;
              }
            }
          }
        }
      }
      else
      {
        v23 = 64;
        if ( (unsigned int)v5 < 0x40 )
        {
          if ( (unsigned int)v5 > 1 )
          {
            v48 = 0;
            v49 = (unsigned __int64 *)(v18 + 8 * ((unsigned __int64)v16 >> 6));
            while ( v20 != -1 )
            {
LABEL_84:
              v37 = !_BitScanForward64((unsigned __int64 *)&v50, v20);
              if ( v37 )
                LODWORD(v50) = 64;
              if ( v48 + (int)v50 >= (unsigned int)v5 )
              {
                v54 = -v48;
LABEL_91:
                v27 = ((unsigned int)(((__int64)v19 - v66) >> 3) << 6) + v54;
                v26 = v27 <= v67;
                goto LABEL_17;
              }
              v51 = v4 >> 4;
              v52 = ~v20;
              while ( 1 )
              {
                v52 &= v52 >> (v51 >> 1);
                if ( !v52 )
                  break;
                v51 -= v51 >> 1;
                if ( v51 <= 1 )
                {
                  _BitScanForward64(&v53, v52);
                  v54 = v53;
                  goto LABEL_91;
                }
              }
              if ( v19 == v49 )
                goto LABEL_30;
              v37 = !_BitScanReverse64((unsigned __int64 *)&v55, v20);
              if ( v37 )
                v48 = 64;
              else
                v48 = 63 - v55;
              v20 = *++v19;
            }
            while ( (unsigned __int64)++v19 <= v22 )
            {
              v20 = *v19;
              if ( *v19 != -1LL )
              {
                v48 = 0;
                goto LABEL_84;
              }
            }
          }
          else
          {
            while ( v20 == -1 )
            {
              if ( (unsigned __int64)++v19 > v22 )
                goto LABEL_30;
              v20 = *v19;
            }
            _BitScanForward64(&v24, ~v20);
            v25 = v24 + ((unsigned int)(((__int64)v19 - v18) >> 3) << 6);
            v26 = v25 <= v67;
            v27 = v25;
LABEL_17:
            if ( v26 )
              goto LABEL_18;
          }
LABEL_30:
          v27 = -1;
LABEL_31:
          v10 = *((_DWORD *)v7 + 6);
          v14 = v64;
          v9 = *((_DWORD *)v7 + 8);
          goto LABEL_32;
        }
        do
        {
LABEL_41:
          v36 = v20 < 0;
          do
          {
            if ( v36 )
            {
              if ( (unsigned __int64)++v19 > v22 )
                goto LABEL_30;
              v20 = *v19;
              goto LABEL_41;
            }
            v37 = !_BitScanReverse64((unsigned __int64 *)&v38, v20);
            if ( !v37 )
              v23 = 63 - v38;
            v27 = (((unsigned int)(((__int64)v19 - v18) >> 3) + 1) << 6) - v23;
            if ( v27 > v67 )
              goto LABEL_30;
            v39 = v5 - v23;
            if ( (_DWORD)v5 == v23 )
              goto LABEL_18;
            ++v19;
            v23 = 64;
            v20 = *v19;
            if ( v39 < 0x40 )
              goto LABEL_53;
            v36 = v20 < 0;
          }
          while ( v20 );
          v39 -= 64;
          if ( !v39 )
            break;
          v20 = *++v19;
LABEL_53:
          v37 = !_BitScanForward64((unsigned __int64 *)&v40, v20);
          if ( v37 )
            LODWORD(v40) = 64;
        }
        while ( (unsigned int)v40 < v39 );
      }
LABEL_18:
      if ( v27 != -1 )
      {
        v27 -= i;
LABEL_20:
        v28 = v27;
LABEL_21:
        v29 = v28;
        if ( v28 != 0xFFFFFFFFLL )
        {
LABEL_22:
          RtlSetBits((PRTL_BITMAP)v7 + 2, v29, v5);
          *((_DWORD *)v7 + 6) = v5 + v29;
          v30 = *v7;
          v31 = (__int64 **)v7[1];
          if ( *(__int64 **)(*v7 + 8) != v7
            || *v31 != v7
            || (*v31 = (__int64 *)v30,
                *(_QWORD *)(v30 + 8) = v31,
                v32 = HalpNPPoolAllocCtx,
                *(__int64 **)(HalpNPPoolAllocCtx + 8) != &HalpNPPoolAllocCtx) )
          {
            __fastfail(3u);
          }
          *v7 = HalpNPPoolAllocCtx;
          v7[1] = (__int64)&HalpNPPoolAllocCtx;
          *(_QWORD *)(v32 + 8) = v7;
          HalpNPPoolAllocCtx = (__int64)v7;
          KxReleaseSpinLock((volatile signed __int64 *)&qword_140C63A50);
          if ( KiIrqlFlags )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v63 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v37 = (v63 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v63;
              if ( v37 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          __writecr8((unsigned __int8)v8);
          v2 = v7[2] + 16 * v29;
          if ( v4 >= 0x1000 )
          {
            *((_DWORD *)v7 + 7) = v5;
          }
          else
          {
            *(_QWORD *)v2 = v7;
            *(_DWORD *)(v2 + 8) = v5;
            v2 += 16LL;
          }
          return v2;
        }
        v7 = (__int64 *)*v7;
        continue;
      }
      goto LABEL_31;
    }
    break;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C63A50);
  v35 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    v56 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v56 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v56 >= 2u )
    {
      v57 = KeGetCurrentPrcb();
      v35 = (unsigned int)(v8 + 1);
      v58 = v57->SchedulerAssist;
      v59 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v37 = (v59 & v58[5]) == 0;
      v58[5] &= v59;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick(v57);
    }
  }
  __writecr8(v8);
  v7 = (__int64 *)HalpMmAllocCtxAllocBuffer(v35, 0x4000LL);
  if ( v7 )
    goto LABEL_37;
  return v2;
}
