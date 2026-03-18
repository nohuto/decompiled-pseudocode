/*
 * XREFs of memset @ 0x1C001F800
 * Callers:
 *     UsbhEtwWrite @ 0x1C000CB00 (UsbhEtwWrite.c)
 *     UsbhPostInterrupt @ 0x1C00104E0 (UsbhPostInterrupt.c)
 *     UsbhCreateDevice @ 0x1C001BC70 (UsbhCreateDevice.c)
 *     UsbhInitializeDevice @ 0x1C001E90C (UsbhInitializeDevice.c)
 *     UsbhAcpiEvalAcpiMethodEx @ 0x1C0029104 (UsbhAcpiEvalAcpiMethodEx.c)
 *     UsbhFdoCleanupDeviceInterfaceForBillBoard @ 0x1C00299A8 (UsbhFdoCleanupDeviceInterfaceForBillBoard.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C0029ADC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002B6CC (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubPdoName @ 0x1C002BD20 (UsbhGetHubPdoName.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030490 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhCreateConfigurationRequestEx @ 0x1C0031470 (UsbhCreateConfigurationRequestEx.c)
 *     USBD_ValidateConfigurationDescriptorInternal @ 0x1C0031884 (USBD_ValidateConfigurationDescriptorInternal.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1C003D878 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EBB8 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003EE8C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F11C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x1C003F5CC (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003F8F4 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FC08 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C003FEF8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00401D8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhInitGlobal @ 0x1C00430C8 (UsbhInitGlobal.c)
 *     UsbhMakePdoName @ 0x1C00432FC (UsbhMakePdoName.c)
 *     UsbhLogAlloc @ 0x1C0048074 (UsbhLogAlloc.c)
 *     UsbhGetDeviceNodeInfo @ 0x1C004882C (UsbhGetDeviceNodeInfo.c)
 *     UsbhGetHubNodeInfo @ 0x1C0048AC8 (UsbhGetHubNodeInfo.c)
 *     UsbhGetPerformanceInfo @ 0x1C0048D38 (UsbhGetPerformanceInfo.c)
 *     RtlStringCchPrintfExW @ 0x1C004B010 (RtlStringCchPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004B1E0 (RtlStringExHandleOtherFlagsW.c)
 *     UsbhValidateMsOs20ConfigurationSubset @ 0x1C0052000 (UsbhValidateMsOs20ConfigurationSubset.c)
 *     UsbhValidateMsOs20FunctionSubset @ 0x1C0052340 (UsbhValidateMsOs20FunctionSubset.c)
 *     UsbhPdoPnp_QueryCapabilities @ 0x1C0054AC0 (UsbhPdoPnp_QueryCapabilities.c)
 *     UsbhQueryD3ColdSupport @ 0x1C0056B50 (UsbhQueryD3ColdSupport.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059444 (UsbhDeleteUxdSubKeys.c)
 *     UsbhUpdateUxdSettings @ 0x1C005A420 (UsbhUpdateUxdSettings.c)
 *     WppTraceCallback @ 0x1C00722E0 (WppTraceCallback.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
