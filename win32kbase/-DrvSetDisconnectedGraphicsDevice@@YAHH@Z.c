/*
 * XREFs of ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C00227EC
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001FAC0 (DrvUpdateGraphicsDeviceList.c)
 * Callees:
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C001E208 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C0020740 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0075884 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     DrvCleanupOneGraphicsDevice @ 0x1C00A0200 (DrvCleanupOneGraphicsDevice.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DrvSetDisconnectedGraphicsDevice(__int64 a1)
{
  int v1; // r15d
  unsigned int v2; // r14d
  _QWORD *v3; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  WCHAR v8; // ax
  WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v10; // rdi
  void *v11; // rax
  void *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // r10
  int v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF
  WCHAR ValueName[16]; // [rsp+118h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0;
  v15 = 0;
  wcscpy(ValueName, L"\\Device\\Disc");
  v3 = *(_QWORD **)(SGDGetSessionState(a1) + 24);
  if ( v1 )
  {
    if ( v3[174] )
      return 1LL;
  }
  else if ( v3[172] )
  {
    return 1LL;
  }
  v5 = gpLeakTrackingAllocator;
  DestinationString = 260LL;
  LODWORD(v16) = 1986291527;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  *(_QWORD *)&DestinationString_8.Length = 304LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, 304LL, 1986291527LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_8;
  }
  if ( v6 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646747u) )
      return v2;
    v13 = (_QWORD *)ExAllocatePool2(DestinationString & 0xFFFFFFFFFFFFFFFDuLL, 320LL, (unsigned int)v16);
    Pool2 = (__int64)v13;
    if ( !v13
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *v13 = 1986291527LL,
          Pool2 = (__int64)(v13 + 2),
          v13 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
        (const void *)0x76646747);
    }
LABEL_8:
    if ( Pool2 )
      goto LABEL_9;
    return v2;
  }
  if ( v6 != 2 )
    return v2;
  v17[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646747u, v17) )
  {
    v17[0] = (unsigned __int64)&DestinationString;
    v17[1] = (unsigned __int64)&v16;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              v5,
              v17,
              &DestinationString_8);
    goto LABEL_8;
  }
  Pool2 = ExAllocatePool2(v14, 320LL, 1986291527LL);
  if ( !Pool2 )
    return v2;
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v5,
                            Pool2,
                            v17[0],
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_8;
    }
LABEL_38:
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return v2;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v5,
                           Pool2,
                           v17[0],
                           BackTrace) )
    goto LABEL_38;
LABEL_9:
  DestinationString_8 = 0LL;
  RtlInitUnicodeString(
    &DestinationString_8,
    L"\\REGISTRY\\Machine\\System\\CurrentControlSet\\Services\\TSDDD\\Device0");
  RtlWriteRegistryValue(4u, L"VIDEO", ValueName, 1u, DestinationString_8.Buffer, DestinationString_8.Length + 2);
  *(_OWORD *)Pool2 = *(_OWORD *)ValueName;
  *(_QWORD *)(Pool2 + 16) = *(_QWORD *)&ValueName[8];
  v8 = ValueName[12];
  *(_DWORD *)(Pool2 + 160) |= 0x2000000u;
  *(_WORD *)(Pool2 + 24) = v8;
  *(_WORD *)(Pool2 + 216) = -1;
  RegistryHandleFromDeviceMap = (WCHAR *)DrvGetRegistryHandleFromDeviceMap(Pool2, 0LL, 0LL, 0LL, 0);
  v10 = RegistryHandleFromDeviceMap;
  if ( RegistryHandleFromDeviceMap )
  {
    DrvGetDeviceConfigurationInformation((void **)Pool2, RegistryHandleFromDeviceMap, 0);
    ZwClose(v10);
    v2 = 1;
  }
  if ( !*(_QWORD *)(Pool2 + 208) )
  {
    v11 = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 0x104uLL, 0x20uLL, 0x73726447u);
    *(_QWORD *)(Pool2 + 208) = v11;
    if ( v11 )
    {
      v12 = (void *)DrvGetRegistryHandleFromDeviceMap(Pool2, 0LL, 0LL, v11, 16);
      if ( v12 )
        ZwClose(v12);
    }
    else
    {
      v15 = -1073741670;
    }
  }
  if ( v15 >= 0 )
  {
    swprintf_s((wchar_t *)(Pool2 + 64), 0x20uLL, L"WinDisc");
    *(_QWORD *)(Pool2 + 136) = 0LL;
    if ( v3[158] )
      *(_QWORD *)(v3[159] + 128LL) = Pool2;
    else
      v3[158] = Pool2;
    v3[159] = Pool2;
    if ( v1 )
      v3[174] = Pool2;
    else
      v3[172] = Pool2;
    if ( (*(_DWORD *)(Pool2 + 160) & 0x800000) != 0 )
      DrvAddAdapterLuid(*(struct _LUID *)(Pool2 + 240));
    return v2;
  }
  DrvCleanupOneGraphicsDevice((void *)Pool2);
  return 0LL;
}
