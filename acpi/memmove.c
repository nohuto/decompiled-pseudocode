/*
 * XREFs of memmove @ 0x1C0001E80
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00018A0 (ACPIMapNamedTable.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0003670 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x1C00040B2 (ACPIIoctlCalculateOutputBufferV2.c)
 *     CopyObjBuffer @ 0x1C00054F2 (CopyObjBuffer.c)
 *     ReadSystemMem @ 0x1C0005CC0 (ReadSystemMem.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C000B0E0 (ACPIAmliBuildObjectPathname.c)
 *     ACPIBuildProcessorExtension @ 0x1C0012FA8 (ACPIBuildProcessorExtension.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0016120 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1C0016248 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIDetectDockDevices @ 0x1C0019FD0 (ACPIDetectDockDevices.c)
 *     ACPIDetectEjectDevices @ 0x1C001A6C0 (ACPIDetectEjectDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C001AE34 (ACPIDetectPdoDevices.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C0020880 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     AcpiDeviceResetInterface @ 0x1C00237D0 (AcpiDeviceResetInterface.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x1C00298A4 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIGetWorkerForBuffer @ 0x1C002B2F0 (ACPIGetWorkerForBuffer.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x1C002C830 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIInitStartDevice @ 0x1C002DA2C (ACPIInitStartDevice.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C002F884 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlEnumChildren @ 0x1C002FA10 (ACPIIoctlEnumChildren.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1C002FC78 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0030194 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0030814 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x1C0030CE8 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x1C00311E0 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     IpmiOpRegionHandler @ 0x1C0031A50 (IpmiOpRegionHandler.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x1C0036CA4 (AcpiConvertMethodArgumentsToObjData.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CC0 (InternalRawAccessOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1C003A774 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x1C003C3D4 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C00400B0 (ACPIThermalCompletePendingIrps.c)
 *     ACPIVectorGetEntry @ 0x1C004419C (ACPIVectorGetEntry.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x1C0046AD0 (AcpiRecordBlackboxInformationWorker.c)
 *     AMLIFindNameSpaceObject @ 0x1C0048110 (AMLIFindNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     AMLIGetNameSpaceObjectPath @ 0x1C00485CC (AMLIGetNameSpaceObjectPath.c)
 *     AMLICreateOverrideObjectDefault @ 0x1C004A82C (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x1C004A920 (AMLICreateOverrideObjectDep.c)
 *     DupObjData @ 0x1C004AF04 (DupObjData.c)
 *     FindNSObj @ 0x1C004B09C (FindNSObj.c)
 *     FindNSObjMainNoLock @ 0x1C004B2F4 (FindNSObjMainNoLock.c)
 *     CreateNameSpaceObject @ 0x1C004F10C (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x1C004F728 (GetNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x1C004F840 (GetNameSpaceObjectNoLock.c)
 *     Method @ 0x1C0050AE0 (Method.c)
 *     PushAccFieldObj @ 0x1C00525E8 (PushAccFieldObj.c)
 *     RawFieldAccess @ 0x1C0052760 (RawFieldAccess.c)
 *     WriteSystemMem @ 0x1C0053424 (WriteSystemMem.c)
 *     Buffer @ 0x1C0055DF0 (Buffer.c)
 *     Concat @ 0x1C0055F60 (Concat.c)
 *     LoadTable @ 0x1C0056E80 (LoadTable.c)
 *     ToDecStr @ 0x1C0058CC0 (ToDecStr.c)
 *     ToHexStr @ 0x1C00590B0 (ToHexStr.c)
 *     ConvertToBuffer @ 0x1C0059884 (ConvertToBuffer.c)
 *     ConvertToInteger @ 0x1C0059A54 (ConvertToInteger.c)
 *     ConvertToString @ 0x1C0059B20 (ConvertToString.c)
 *     ParseField @ 0x1C005AB30 (ParseField.c)
 *     ParseFieldConnection @ 0x1C005AF60 (ParseFieldConnection.c)
 *     ParseInteger @ 0x1C005B588 (ParseInteger.c)
 *     ParseObjName @ 0x1C005BC04 (ParseObjName.c)
 *     ParseString @ 0x1C005C440 (ParseString.c)
 *     LinkNodepRunSrsWorker @ 0x1C005DB40 (LinkNodepRunSrsWorker.c)
 *     ACPIDockIrpQueryInterface @ 0x1C007B740 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x1C007C3D0 (WppTraceCallback.c)
 *     ACPIAmliEvaluateOsc @ 0x1C007C7D8 (ACPIAmliEvaluateOsc.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB64 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C007EE84 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C007F574 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1C007FC3C (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C008060C (ACPIBusIrpQueryInstanceId.c)
 *     ACPIEcConnectHandler @ 0x1C0083850 (ACPIEcConnectHandler.c)
 *     ACPIFilterIrpQueryInterface @ 0x1C0086160 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C008736C (ACPIBusIommuBusInterface.c)
 *     ACPIGetPnpLocationString @ 0x1C0087670 (ACPIGetPnpLocationString.c)
 *     ACPIIommuGetDeviceId @ 0x1C0087EE0 (ACPIIommuGetDeviceId.c)
 *     ACPIInternalGrowBuffer @ 0x1C0087FDC (ACPIInternalGrowBuffer.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00885E4 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIIoctlTranslateBiosResources @ 0x1C0088698 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x1C0089190 (ACPIGetUniqueId.c)
 *     ACPIQuerySpareDsm @ 0x1C0089418 (ACPIQuerySpareDsm.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C008B620 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1C008D69C (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1C008D920 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1C008E198 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C008E47C (OSReadNextRegValue.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 *     PnpiAddSidebandResources @ 0x1C008FF78 (PnpiAddSidebandResources.c)
 *     ACPIThermalBuildConstraints @ 0x1C0095638 (ACPIThermalBuildConstraints.c)
 *     BuildTranslatorRanges @ 0x1C00974E0 (BuildTranslatorRanges.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C0097E38 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     IrqTranslatorEjectInterface @ 0x1C009A750 (IrqTranslatorEjectInterface.c)
 *     IrqArbpSetDeviceProperties @ 0x1C009E5F4 (IrqArbpSetDeviceProperties.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1C00A0984 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbAddOrdering @ 0x1C00A0BC4 (ArbAddOrdering.c)
 *     ArbPruneOrdering @ 0x1C00A217C (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1C00A2340 (ArbQueryConflict.c)
 *     RtlDuplicateCmResourceList @ 0x1C00AA814 (RtlDuplicateCmResourceList.c)
 *     AMLIInitialize @ 0x1C00AAAB0 (AMLIInitialize.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
