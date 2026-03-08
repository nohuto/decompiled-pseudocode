/*
 * XREFs of AcpiExternalTranslateBiosToNtResources @ 0x1C0083DA0
 * Callers:
 *     PnpiBiosGpioInterruptIoToNtIoDescriptor @ 0x1C0091918 (PnpiBiosGpioInterruptIoToNtIoDescriptor.c)
 *     PnpiBiosVendorToNtIoDescriptor @ 0x1C0091C74 (PnpiBiosVendorToNtIoDescriptor.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qD @ 0x1C001B508 (WPP_RECORDER_SF_qD.c)
 *     AcpiCheckExternalConnection @ 0x1C0083BF4 (AcpiCheckExternalConnection.c)
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00842D4 (ExternalRequestBiosNameDeviceAssociation.c)
 */

__int64 __fastcall AcpiExternalTranslateBiosToNtResources(
        ULONG_PTR a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5)
{
  __int64 DeviceExtension; // rbp
  __int64 v9; // rdi
  int v10; // ebx
  __int64 (__fastcall *v11)(_QWORD, ULONG_PTR, __int64, _QWORD, unsigned int, __int64, unsigned int *); // r14
  int v12; // esi
  unsigned int v13; // eax
  __int64 Pool2; // rax
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rax
  int v18; // edx
  unsigned int v20[4]; // [rsp+40h] [rbp-38h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v20[0] = 120;
  v9 = 0LL;
  AcpiCheckExternalConnection();
  v10 = -1073741822;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&ExternalTranslatorInterfaceLock, 1u);
  if ( ExternalTranslationInterface )
  {
    v11 = (__int64 (__fastcall *)(_QWORD, ULONG_PTR, __int64, _QWORD, unsigned int, __int64, unsigned int *))*((_QWORD *)ExternalTranslationInterface + 7);
    v12 = 0;
    v13 = v20[0];
    while ( 1 )
    {
      Pool2 = ExAllocatePool2(256LL, v13, 1483760449LL);
      v9 = Pool2;
      if ( !Pool2 )
        break;
      v10 = v11(*((_QWORD *)ExternalTranslationInterface + 5), a1, a2, a3, a4, Pool2, v20);
      if ( v10 < 0 )
      {
        ExFreePoolWithTag((PVOID)v9, 0x58706341u);
        v9 = 0LL;
      }
      if ( v10 == -1073741789 )
      {
        v13 = v20[0];
        if ( v20[0] )
        {
          if ( (unsigned int)++v12 < 2 )
            continue;
        }
      }
      goto LABEL_11;
    }
    v10 = -1073741670;
  }
LABEL_11:
  ExReleaseResourceLite(&ExternalTranslatorInterfaceLock);
  KeLeaveCriticalRegion();
  if ( v10 >= 0 )
  {
    v15 = v20[0];
    if ( v20[0] < 0x38 )
    {
LABEL_13:
      v10 = -1073741637;
      goto LABEL_22;
    }
    *a5 = *(_OWORD *)(v9 + 8);
    a5[1] = *(_OWORD *)(v9 + 24);
    v16 = *(_DWORD *)(v9 + 44);
    if ( v16 )
    {
      v17 = *(unsigned int *)(v9 + 40);
      if ( v16 > v15 - (unsigned int)v17 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            21,
            10,
            (__int64)&WPP_8cd4999731163fb3621cd0c511e30926_Traceguids);
        }
        goto LABEL_13;
      }
      v10 = ExternalRequestBiosNameDeviceAssociation(v9 + v17, DeviceExtension, a4);
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = 2;
          WPP_RECORDER_SF_qD(
            WPP_GLOBAL_Control->DeviceExtension,
            v18,
            21,
            11,
            (__int64)&WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
            DeviceExtension,
            v10);
        }
        v10 = 0;
      }
    }
  }
LABEL_22:
  if ( v9 )
    ExFreePoolWithTag((PVOID)v9, 0x58706341u);
  return (unsigned int)v10;
}
