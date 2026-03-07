__int64 __fastcall ACPIInternalDeviceQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rdx
  unsigned int v5; // r8d
  int v6; // eax
  int v7; // ecx
  int DeviceCapabilities; // edi
  __int64 v9; // rdx
  const char *v10; // rcx
  const char *v11; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  v5 = HIDWORD(SecurityContext->SecurityQos) & 0xFFFFFFBF | (*(_QWORD *)(DeviceExtension + 616) != 0LL ? 0x40 : 0);
  HIDWORD(SecurityContext->SecurityQos) = v5;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (unsigned __int16)((unsigned __int64)*(unsigned int *)(DeviceExtension + 8) >> 9)) & 0x100 | 0x80;
  HIDWORD(SecurityContext->SecurityQos) = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)~(unsigned __int16)((unsigned int)HIDWORD(*(_QWORD *)(DeviceExtension + 8)) >> 8)) & 0x4000;
  HIDWORD(SecurityContext->SecurityQos) = v7;
  HIDWORD(SecurityContext->SecurityQos) = v7 ^ (v7 ^ (*(_DWORD *)(DeviceExtension + 8) >> 12)) & 0x20000;
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(DeviceExtension);
  if ( DeviceCapabilities < 0 )
  {
    v9 = *(_QWORD *)(DeviceExtension + 8);
    v10 = byte_1C00622D0;
    v11 = byte_1C00622D0;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(DeviceExtension + 608);
      if ( (v9 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xAu,
        (__int64)&WPP_3f059b4445c33feb0bcb2acb2d7cf140_Traceguids,
        DeviceCapabilities,
        DeviceExtension,
        v10,
        v11);
  }
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceCapabilities;
}
