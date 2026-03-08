/*
 * XREFs of qsort @ 0x1403D48B0
 * Callers:
 *     EtwpAllocateTraceBuffer @ 0x140205174 (EtwpAllocateTraceBuffer.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     RtlpDynamicLookasideRebalance @ 0x1402C5F90 (RtlpDynamicLookasideRebalance.c)
 *     MiTerminateWsleCluster @ 0x1403234E0 (MiTerminateWsleCluster.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiClearPteAccessed @ 0x140326910 (MiClearPteAccessed.c)
 *     MiInsertTbFlushEntry @ 0x1403298B0 (MiInsertTbFlushEntry.c)
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     KiAddProcessorToCoreControlBlock @ 0x14037E0F4 (KiAddProcessorToCoreControlBlock.c)
 *     KiAdjustGroupConfiguration @ 0x1403B0E38 (KiAdjustGroupConfiguration.c)
 *     sub_1403DF980 @ 0x1403DF980 (sub_1403DF980.c)
 *     SymCryptParallelHashProcess @ 0x1403F09A0 (SymCryptParallelHashProcess.c)
 *     HalpNumaAddRangeProximity @ 0x140518980 (HalpNumaAddRangeProximity.c)
 *     VslInitializeSecureKernelCfg @ 0x14054913C (VslInitializeSecureKernelCfg.c)
 *     IopCompactRemovePagesArray @ 0x14055AA70 (IopCompactRemovePagesArray.c)
 *     PpmCheckComputeHeteroResponse @ 0x140593FE0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140594838 (PpmHeteroComputeCoreParkingUtilities.c)
 *     RtlCompareExchangePropertyStore @ 0x1405A8090 (RtlCompareExchangePropertyStore.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405C4D60 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     AsiPopulateHashes @ 0x140612D48 (AsiPopulateHashes.c)
 *     MiSortMdlFrames @ 0x140621438 (MiSortMdlFrames.c)
 *     MiSortPageFramesRemoveDuplicates @ 0x140628888 (MiSortPageFramesRemoveDuplicates.c)
 *     MiFillNoReservationCluster @ 0x140637058 (MiFillNoReservationCluster.c)
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiProcessCrcList @ 0x1406A8670 (MiProcessCrcList.c)
 *     PnpAllocateResources @ 0x1406F5CE0 (PnpAllocateResources.c)
 *     PspBuildCreateProcessContext @ 0x1407EEDE0 (PspBuildCreateProcessContext.c)
 *     CmpLoadLayerVersions @ 0x1408148C4 (CmpLoadLayerVersions.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14081A5DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     MmFreeBootRegistry @ 0x140820DAC (MmFreeBootRegistry.c)
 *     IopRearrangeReqList @ 0x14085097C (IopRearrangeReqList.c)
 *     PipSortDeviceObjectList @ 0x140862464 (PipSortDeviceObjectList.c)
 *     EtwpGetTraceGroupInfo @ 0x1408A29D2 (EtwpGetTraceGroupInfo.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x1409C0408 (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcUpdateUsageTriggers @ 0x1409C05F0 (RtlpFcUpdateUsageTriggers.c)
 *     EtwpUpdateDisallowedGuids @ 0x1409ED100 (EtwpUpdateDisallowedGuids.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x140A224F4 (CmpSortedValueEnumStackEntryStart.c)
 *     AdtpBuildObjectTypeStrings @ 0x140A59130 (AdtpBuildObjectTypeStrings.c)
 *     IntpAllocateProcessorContext @ 0x140B439C8 (IntpAllocateProcessorContext.c)
 *     PpmInitPolicyConfiguration @ 0x140B5CAC0 (PpmInitPolicyConfiguration.c)
 *     MiAssignTopLevelRanges @ 0x140B604AC (MiAssignTopLevelRanges.c)
 *     HalpNumaInitializeStaticConfiguration @ 0x140B63268 (HalpNumaInitializeStaticConfiguration.c)
 *     HalpChannelInitializeStaticConfiguration @ 0x140B63680 (HalpChannelInitializeStaticConfiguration.c)
 *     MiInitializeNumaGraph @ 0x140B71624 (MiInitializeNumaGraph.c)
 *     KiComputeNumaCosts @ 0x140B727C4 (KiComputeNumaCosts.c)
 *     HalpNumaParseHmat @ 0x140B8E1C4 (HalpNumaParseHmat.c)
 *     KiPerformAutomaticGroupConfiguration @ 0x140B929BC (KiPerformAutomaticGroupConfiguration.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_check_icall @ 0x140421180 (_guard_check_icall.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  char *v8; // r15
  __int64 v9; // rcx
  size_t v10; // rbx
  _BYTE *v11; // rbx
  char *i; // rdi
  size_t v13; // r8
  _BYTE *v14; // rdx
  __int64 v15; // rbx
  char v16; // cl
  size_t v17; // rbx
  char *v18; // rdi
  _BYTE *v19; // r8
  size_t v20; // r9
  char v21; // cl
  size_t v22; // r8
  _BYTE *v23; // rdx
  char *v24; // r9
  char v25; // cl
  size_t v26; // r8
  _BYTE *v27; // rdx
  __int64 v28; // r9
  char v29; // cl
  char *v30; // rbx
  char *v31; // rsi
  unsigned __int64 v32; // rbp
  char *v33; // rdx
  signed __int64 v34; // r9
  char v35; // cl
  char *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-448h]
  _QWORD v38[62]; // [rsp+40h] [rbp-438h] BYREF
  _QWORD v39[62]; // [rsp+230h] [rbp-248h] BYREF

  memset(v38, 0, sizeof(v38));
  memset(v39, 0, sizeof(v39));
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    if ( NumOfElements >= 2 )
    {
      v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      v9 = 0LL;
      v37 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (v8 - (_BYTE *)Base) / SizeOfElements + 1;
          if ( v10 <= 8 )
          {
            if ( v8 > Base )
            {
              do
              {
                v11 = Base;
                for ( i = (char *)Base + SizeOfElements; i <= v8; i += SizeOfElements )
                {
                  if ( ((int (__fastcall *)(char *, _BYTE *))PtFuncCompare)(i, v11) > 0 )
                    v11 = i;
                }
                v13 = SizeOfElements;
                v14 = v8;
                if ( v11 != v8 )
                {
                  v15 = v11 - v8;
                  do
                  {
                    v16 = v14[v15];
                    v14[v15] = *v14;
                    *v14++ = v16;
                    --v13;
                  }
                  while ( v13 );
                }
                v8 -= SizeOfElements;
              }
              while ( v8 > Base );
              v9 = v37;
            }
            goto LABEL_18;
          }
          v17 = SizeOfElements * (v10 >> 1);
          v18 = (char *)Base + v17;
          if ( ((int (__fastcall *)(void *, char *))PtFuncCompare)(Base, (char *)Base + v17) > 0 )
          {
            v20 = SizeOfElements;
            v19 = (char *)Base + v17;
            if ( Base != v18 )
            {
              do
              {
                v21 = v19[-v17];
                v19[-v17] = *v19;
                *v19++ = v21;
                --v20;
              }
              while ( v20 );
            }
          }
          if ( ((int (__fastcall *)(void *, char *, _BYTE *, size_t))PtFuncCompare)(Base, v8, v19, v20) > 0 )
          {
            v22 = SizeOfElements;
            v23 = v8;
            if ( Base != v8 )
            {
              v24 = (char *)((_BYTE *)Base - v8);
              do
              {
                v25 = v23[(_QWORD)v24];
                v23[(_QWORD)v24] = *v23;
                *v23++ = v25;
                --v22;
              }
              while ( v22 );
            }
          }
          if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)((char *)Base + v17, v8, v22) > 0 )
          {
            v26 = SizeOfElements;
            v27 = v8;
            if ( v18 != v8 )
            {
              v28 = v18 - v8;
              do
              {
                v29 = v27[v28];
                v27[v28] = *v27;
                *v27++ = v29;
                --v26;
              }
              while ( v26 );
            }
          }
          v30 = (char *)Base;
          v31 = v8;
          while ( 1 )
          {
            if ( v18 > v30 )
            {
              while ( 1 )
              {
                v30 += SizeOfElements;
                if ( v30 >= v18 )
                  break;
                if ( ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v30, v18, v26) > 0 )
                  goto LABEL_38;
              }
            }
            do
              v30 += SizeOfElements;
            while ( v30 <= v8 && ((int (__fastcall *)(char *, char *, size_t))PtFuncCompare)(v30, v18, v26) <= 0 );
            do
            {
LABEL_38:
              v32 = (unsigned __int64)v31;
              v31 -= SizeOfElements;
            }
            while ( v31 > v18 && ((int (__fastcall *)(char *, char *))PtFuncCompare)(v31, v18) > 0 );
            if ( v31 < v30 )
              break;
            v26 = SizeOfElements;
            v33 = v31;
            if ( v31 != v30 )
            {
              v34 = v30 - v31;
              do
              {
                v35 = v33[v34];
                v33[v34] = *v33;
                *v33++ = v35;
                --v26;
              }
              while ( v26 );
            }
            v36 = v30;
            if ( v18 != v31 )
              v36 = v18;
            v18 = v36;
          }
          if ( (unsigned __int64)v18 < v32 )
          {
            while ( 1 )
            {
              v32 -= SizeOfElements;
              if ( v32 <= (unsigned __int64)v18 )
                break;
              if ( ((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v32, v18) )
                goto LABEL_53;
            }
          }
          do
            v32 -= SizeOfElements;
          while ( v32 > (unsigned __int64)Base
               && !((unsigned int (__fastcall *)(unsigned __int64, char *))PtFuncCompare)(v32, v18) );
LABEL_53:
          v9 = v37;
          if ( (__int64)(v32 - (_QWORD)Base) >= v8 - v30 )
            break;
          if ( v30 < v8 )
          {
            v38[v37] = v30;
            v39[v37] = v8;
            v9 = ++v37;
          }
          if ( (unsigned __int64)Base >= v32 )
          {
LABEL_18:
            v37 = --v9;
            if ( v9 < 0 )
              return;
            Base = (void *)v38[v9];
            v8 = (char *)v39[v9];
          }
          else
          {
            v8 = (char *)v32;
          }
        }
        if ( (unsigned __int64)Base < v32 )
        {
          v38[v37] = Base;
          v39[v37] = v32;
          v9 = ++v37;
        }
        if ( v30 >= v8 )
          goto LABEL_18;
        Base = v30;
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
}
