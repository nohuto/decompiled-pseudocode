/*
 * XREFs of RIMReadDigitizerToMonitorMappings @ 0x1C01BD6F0
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C01A46A0 (RIMEnableMonitorMappingForDevice.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x1C01BC3D8 (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimReadSingleDigitizerToMonitorMappings @ 0x1C01BC984 (rimReadSingleDigitizerToMonitorMappings.c)
 */

int __fastcall RIMReadDigitizerToMonitorMappings(const UNICODE_STRING *a1, __int64 a2)
{
  int result; // eax
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v8; // r9
  _QWORD *Pool2; // rax
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // [rsp+28h] [rbp-D8h]
  __int64 v13; // [rsp+28h] [rbp-D8h]
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v19; // [rsp+180h] [rbp+80h] BYREF
  void *KeyHandle; // [rsp+188h] [rbp+88h] BYREF
  unsigned __int64 v21; // [rsp+190h] [rbp+90h] BYREF
  __int64 v22; // [rsp+198h] [rbp+98h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1262);
  }
  if ( !a2 )
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1263);
  }
  if ( !*(_DWORD *)a2 )
  {
    v19 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1264);
  }
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Wisp\\Pen\\Digimon");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v5 = gpLeakTrackingAllocator;
    v19 = 1836086098;
    v22 = 260LL;
    v14 = 524LL;
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
          return ZwClose(KeyHandle);
        v21 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1836086098, &v21) )
        {
          v16[0] = &v22;
          v16[1] = &v19;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v5,
                                                                                             (__int64)v16,
                                                                                             &v14);
          goto LABEL_23;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v10,
                                                                                           540LL,
                                                                                           1836086098LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          return ZwClose(KeyHandle);
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v5,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v21,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_26:
            rimReadSingleDigitizerToMonitorMappings(
              a1,
              KeyHandle,
              0xAu,
              v8,
              (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              v12,
              (unsigned __int16 *)(a2 + 276));
            rimReadSingleDigitizerToMonitorMappings(
              a1,
              KeyHandle,
              0x14u,
              v11,
              (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              v13,
              (unsigned __int16 *)(a2 + 20));
            NSInstrumentation::CLeakTrackingAllocator::Free(
              gpLeakTrackingAllocator,
              (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            return ZwClose(KeyHandle);
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v5,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v21,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_23;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        return ZwClose(KeyHandle);
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D707352u) )
        return ZwClose(KeyHandle);
      Pool2 = (_QWORD *)ExAllocatePool2(v22 & 0xFFFFFFFFFFFFFFFDuLL, 540LL, v19);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
            *Pool2 = 1836086098LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v5 + 1),
          0x6D707352uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         524LL,
                                                                                         1836086098LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    }
LABEL_23:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_26;
    return ZwClose(KeyHandle);
  }
  return result;
}
