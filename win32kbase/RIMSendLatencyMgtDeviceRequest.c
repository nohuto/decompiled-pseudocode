/*
 * XREFs of RIMSendLatencyMgtDeviceRequest @ 0x1C01AFB54
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C00BC380 (RIMUpdateDeviceForInputMode.c)
 * Callees:
 *     RIMGetDeviceObjectPointer @ 0x1C0031148 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00EF92A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDDd @ 0x1C01B1C8C (WPP_RECORDER_AND_TRACE_SF_qDDd.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C01B2070 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_SetUsages @ 0x1C01B22FC (rimHidP_SetUsages.c)
 */

__int64 __fastcall RIMSendLatencyMgtDeviceRequest(struct _UNICODE_STRING *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  PWSTR Buffer; // rsi
  __int64 v7; // r9
  int v8; // edx
  int SpecificButtonCaps; // edi
  int v10; // r8d
  __int64 v11; // r13
  unsigned __int64 v12; // r12
  NSInstrumentation::CLeakTrackingAllocator *v13; // rdi
  int v14; // eax
  __int64 Pool2; // rbx
  _QWORD *v16; // rax
  unsigned __int64 v17; // r10
  unsigned int v18; // r11d
  char v19; // r14
  PIRP v20; // rax
  int v21; // edx
  int v22; // r8d
  int OutputBuffer; // [rsp+28h] [rbp-E0h]
  int OutputBufferLength; // [rsp+30h] [rbp-D8h]
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
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  PVOID BackTrace[20]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v39[80]; // [rsp+188h] [rbp+80h] BYREF

  Object = 0LL;
  DeviceObject = 0LL;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  memset(v39, 0, 0x48uLL);
  Buffer = a1[28].Buffer;
  LOWORD(v26) = 1;
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v35[0] = a1;
    v27 = a2 != 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0296AFE,
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
    WPP_RECORDER_AND_TRACE_SF_qDDd(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      Buffer[21],
      OutputBuffer,
      OutputBufferLength);
  SpecificButtonCaps = RIMGetDeviceObjectPointer(a1 + 13, v4, v5, &Handle, &Object, &DeviceObject);
  if ( SpecificButtonCaps >= 0 )
  {
    v11 = *((_QWORD *)Buffer + 2);
    v12 = Buffer[24];
    SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(2, 13, 0, 96, (__int64)v39, (__int64)&v26, v11);
    if ( SpecificButtonCaps < 0 )
    {
LABEL_54:
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      goto LABEL_55;
    }
    v13 = gpLeakTrackingAllocator;
    LODWORD(v28) = 1768321874;
    v32 = 68LL;
    v33 = v12;
    v14 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(68LL, (unsigned int)v12, 1768321874LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v13 + 14, 1uLL);
      goto LABEL_34;
    }
    if ( v14 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667352u)
        && v12 + 16 >= v12 )
      {
        v16 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, (unsigned int)v28);
        Pool2 = (__int64)v16;
        if ( !v16
          || (_InterlockedAdd64((volatile signed __int64 *)v13 + 14, 1uLL),
              *v16 = 1768321874LL,
              Pool2 = (__int64)(v16 + 2),
              v16 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v13 + 1),
            0x69667352uLL);
        }
LABEL_34:
        if ( Pool2 )
        {
LABEL_37:
          memset((void *)Pool2, 0, v12);
          *(_BYTE *)Pool2 = v39[2];
          if ( !a2
            || (LOWORD(v27) = 96,
                Timeout.LowPart = 1,
                SpecificButtonCaps = rimHidP_SetUsages(2, 13, 0, (unsigned int)&v27, (__int64)&Timeout, v11, Pool2, v12),
                SpecificButtonCaps >= 0) )
          {
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v20 = IoBuildDeviceIoControlRequest(
                    0xB0191u,
                    DeviceObject,
                    (PVOID)Pool2,
                    v12,
                    0LL,
                    0,
                    0,
                    &Event,
                    &IoStatusBlock);
            if ( v20 )
            {
              v20->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Object;
              SpecificButtonCaps = IofCallDriver(DeviceObject, v20);
              if ( SpecificButtonCaps == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                SpecificButtonCaps = IoStatusBlock.Status;
              }
            }
            else
            {
              LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v21,
                  v22,
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
    else if ( v14 == 2 )
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
                  (__int64)v13,
                  (__int64)v35,
                  &v33);
        goto LABEL_34;
      }
      v19 = 0;
      if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
      {
        v17 += 16LL;
        v19 = 1;
        v33 = v17;
      }
      Pool2 = ExAllocatePool2(68LL, v17, v18);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v13,
                 (const void *)Pool2,
                 Timeout.QuadPart,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_34;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v13,
                    Pool2,
                    Timeout.QuadPart,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_37;
        }
        _InterlockedAdd64((volatile signed __int64 *)v13 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    SpecificButtonCaps = -1073741670;
    goto LABEL_54;
  }
LABEL_55:
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v10,
      (_DWORD)gRimLog,
      2,
      1,
      69,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      SpecificButtonCaps);
  }
  return (unsigned int)SpecificButtonCaps;
}
