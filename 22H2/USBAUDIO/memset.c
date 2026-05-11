/*
 * XREFs of memset @ 0x1C0013800
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C0001970 (McGenControlCallbackV2.c)
 *     DeviceCreate @ 0x1C0001C90 (DeviceCreate.c)
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C000291C (wil_details_GetCurrentFeatureEnabledState.c)
 *     wil_details_StagingConfig_Load @ 0x1C0002C58 (wil_details_StagingConfig_Load.c)
 *     USBType1AsyncEndpointPoll @ 0x1C0004E20 (USBType1AsyncEndpointPoll.c)
 *     USBType1BuildIsochUrbRequest @ 0x1C00056A4 (USBType1BuildIsochUrbRequest.c)
 *     InitializeSideband @ 0x1C00086F8 (InitializeSideband.c)
 *     ?GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DBC4 (-GetEndpointDescriptor@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     ?GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C00101EC (-GetSupportedFormats@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 *     USBDInternal_QueryUsbVerifierSettings @ 0x1C0010BC4 (USBDInternal_QueryUsbVerifierSettings.c)
 *     USBDInternal_BuildServicePath @ 0x1C0010E50 (USBDInternal_BuildServicePath.c)
 *     USBD_CreateHandle @ 0x1C0011074 (USBD_CreateHandle.c)
 *     USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0011574 (USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild.c)
 *     _handle_error @ 0x1C00121BC (_handle_error.c)
 *     RaiseException @ 0x1C0012410 (RaiseException.c)
 *     WppTraceCallback @ 0x1C0022010 (WppTraceCallback.c)
 *     FilterCreateFilterFactory @ 0x1C0023EB8 (FilterCreateFilterFactory.c)
 *     PinCreate @ 0x1C00244E0 (PinCreate.c)
 *     PinBuildDescriptors @ 0x1C0024F30 (PinBuildDescriptors.c)
 *     TopologyProcessFeatureUnit @ 0x1C0026160 (TopologyProcessFeatureUnit.c)
 *     TopologyProcessMixerUnit @ 0x1C00266D0 (TopologyProcessMixerUnit.c)
 *     TopologyBuildFilterTopology @ 0x1C002779C (TopologyBuildFilterTopology.c)
 *     BusApiBuildFunctionUnit @ 0x1C002B4B4 (BusApiBuildFunctionUnit.c)
 *     USBDeviceCreate @ 0x1C002BD30 (USBDeviceCreate.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x1C002CF84 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectStreamingAudioInterface @ 0x1C002DC7C (USBHwSelectStreamingAudioInterface.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002E090 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseMixerUnit @ 0x1C002FA40 (USBParseMixerUnit.c)
 *     USBParseFeatureUnit @ 0x1C002FE10 (USBParseFeatureUnit.c)
 *     USBParseGetAudioStreamingDataranges @ 0x1C0030FC0 (USBParseGetAudioStreamingDataranges.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0031240 (USBParseGetMIDIStreamingDatarange.c)
 *     USBType1AsyncEndpointInitialize @ 0x1C00324F8 (USBType1AsyncEndpointInitialize.c)
 *     USBType1LockDelay @ 0x1C0032680 (USBType1LockDelay.c)
 *     USBCaptureSubmitRequest @ 0x1C0032FD8 (USBCaptureSubmitRequest.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C00338C8 (USBMidiInInitializeUrbAndIrp.c)
 *     USBMidiOutAllocateRequest @ 0x1C0034010 (USBMidiOutAllocateRequest.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
