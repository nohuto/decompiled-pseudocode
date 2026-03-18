/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C0182C44
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C0005CE4 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006E118 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E0D4A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDd @ 0x1C0184E28 (WPP_RECORDER_AND_TRACE_SF_qDDd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018520C (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_SetUsages @ 0x1C0185498 (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct _UNICODE_STRING *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  PWSTR Buffer; // rsi
  __int64 v7; // r9
  int SpecificButtonCaps; // edi
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // eax
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  unsigned __int64 v15; // r10
  unsigned int v16; // r11d
  char v17; // r14
  PIRP v18; // rax
  int v19; // edx
  int v20; // r8d
  char v21; // dl
  int OutputBuffer; // [rsp+28h] [rbp-E0h]
  int OutputBufferLength; // [rsp+30h] [rbp-D8h]
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-C0h]
  int v26; // [rsp+68h] [rbp-A0h] BYREF
  int v27; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v28; // [rsp+70h] [rbp-98h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+78h] [rbp-90h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-88h] BYREF
  PVOID Object; // [rsp+88h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v33; // [rsp+98h] [rbp-70h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+B8h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK v37; // [rsp+D0h] [rbp-38h] BYREF
  PVOID BackTrace[20]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v39[80]; // [rsp+188h] [rbp+80h] BYREF

  Object = 0LL;
  DeviceObject = 0LL;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v37 = 0LL;
  memset(v39, 0, 0x48uLL);
  Buffer = a1[28].Buffer;
  LOWORD(v26) = 1;
  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 256LL) )
  {
    v35[0] = a1;
    v27 = a2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C0289810,
      byte_1C02583F8,
      v5,
      v7,
      (__int64)v35,
      (__int64)&v27);
  }
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(IoStatusBlock) = HIDWORD(a1);
    WPP_RECORDER_AND_TRACE_SF_qDDd(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      Buffer[21],
      OutputBuffer,
      OutputBufferLength);
  }
  SpecificButtonCaps = RIMGetDeviceObjectPointer(a1 + 13, v4, v5, &Handle, &Object, &DeviceObject);
  if ( SpecificButtonCaps >= 0 )
  {
    v9 = *((_QWORD *)Buffer + 2);
    v10 = Buffer[24];
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v39, (__int64)&v26, v9);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_54:
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      goto LABEL_55;
    }
    v11 = gpLeakTrackingAllocator;
    LODWORD(v28) = 1768321874;
    v32 = 68LL;
    v33 = v10;
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(68LL, (unsigned int)v10, 1768321874LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v11 + 14, 1uLL);
      goto LABEL_34;
    }
    if ( v12 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667352u)
        && v10 + 16 >= v10 )
      {
        v14 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, (unsigned int)v28);
        Pool2 = (__int64)v14;
        if ( !v14
          || (_InterlockedAdd64((volatile signed __int64 *)v11 + 14, 1uLL),
              *v14 = 1768321874LL,
              Pool2 = (__int64)(v14 + 2),
              v14 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v11 + 1),
            0x69667352uLL);
        }
LABEL_34:
        if ( Pool2 )
        {
LABEL_37:
          memset((void *)Pool2, 0, v10);
          *(_BYTE *)Pool2 = v39[2];
          if ( !a2
            || (LOWORD(v27) = 96,
                Timeout.LowPart = 1,
                SpecificButtonCaps = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v27, (__int64)&Timeout, v9, Pool2, v10),
                SpecificButtonCaps >= 0) )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v18 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, (PVOID)Pool2, v10, 0LL, 0, 0, &Event, &v37);
            if ( v18 )
            {
              v18->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
              SpecificButtonCaps = IofCallDriver(DeviceObject, v18);
              if ( SpecificButtonCaps == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                SpecificButtonCaps = v37.Status;
              }
            }
            else
            {
              LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v19,
                  v20,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  68,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
              }
              SpecificButtonCaps = -1073741668;
            }
          }
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
          goto LABEL_54;
        }
      }
    }
    else if ( v12 == 2 )
    {
      Timeout.QuadPart = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              1768321874,
              (unsigned __int64 *)&Timeout.QuadPart) )
      {
        v35[0] = &v32;
        v35[1] = &v28;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v11,
                  (__int64)v35,
                  &v33);
        goto LABEL_34;
      }
      v17 = 0;
      if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
      {
        v15 += 16LL;
        v17 = 1;
        v33 = v15;
      }
      Pool2 = ExAllocatePool2(68LL, v15, v16);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)Pool2,
                 Timeout.QuadPart,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_34;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    Pool2,
                    Timeout.QuadPart,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_37;
        }
        _InterlockedAdd64((volatile signed __int64 *)v11 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    SpecificButtonCaps = -1073741670;
    goto LABEL_54;
  }
LABEL_55:
  v21 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(IoStatusBlock) = SpecificButtonCaps;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v21,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      2u,
      1u,
      0x45u,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      IoStatusBlock);
  }
  return (unsigned int)SpecificButtonCaps;
}
