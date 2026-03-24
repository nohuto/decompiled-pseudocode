/*
 * XREFs of RIMDeviceIoControl @ 0x1C0052E70
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0049F30 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C0153080 (NtRIMDeviceIoControl.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0058C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00AC818 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00AC85C (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C00B6120 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00B7040 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDeviceIoControl(
        __int64 a1,
        __int64 a2,
        ULONG a3,
        PVOID a4,
        ULONG InputBufferLength,
        volatile void *Address,
        SIZE_T Length,
        _DWORD *a8,
        PIO_STATUS_BLOCK IoStatusBlock,
        int a10,
        int a11,
        int a12)
{
  __int64 v12; // rsi
  int v14; // edx
  NTSTATUS Status; // ebx
  struct RawInputManagerObject *v16; // r14
  int v17; // edx
  int v18; // edx
  _QWORD *v19; // rsi
  void *v20; // rcx
  struct _FILE_OBJECT *v21; // r15
  ULONG64 v23; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbx
  PIRP v25; // rbx
  _DWORD *v26; // rdx
  BOOL v27; // [rsp+50h] [rbp-88h]
  PVOID v28; // [rsp+58h] [rbp-80h] BYREF
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v30; // [rsp+68h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  _BYTE v32[8]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v33[8]; // [rsp+88h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-48h] BYREF
  PVOID InputBuffer; // [rsp+F8h] [rbp+20h]

  InputBuffer = a4;
  v12 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 128, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    a4 = InputBuffer;
  }
  v28 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v23 = (ULONG64)a4 + InputBufferLength;
      if ( v23 > MmUserProbeAddress || v23 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v28);
  if ( Status >= 0 )
  {
    v16 = (struct RawInputManagerObject *)v28;
    v27 = *((_QWORD *)v28 + 14) == (_QWORD)KeGetCurrentThread();
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v33,
      (struct RIMLOCK *)((char *)v28 + 104));
    if ( *((_BYTE *)v16 + 81) )
    {
      Status = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 130, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v12, 3LL, 1LL, &Object);
      if ( Status >= 0 )
      {
        v19 = Object;
        v20 = (void *)*((_QWORD *)Object + 39);
        if ( v20 && (v21 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 40), v18 = 0, v21) )
        {
          if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
            {
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4263LL);
              v20 = (void *)v19[39];
            }
            if ( a12 == 1 )
              NtDeviceIoControlFile(v20, 0LL, 0LL, 0LL, IoStatusBlock, a3, InputBuffer, InputBufferLength, 0LL, 0);
            else
              ZwDeviceIoControlFile(v20, 0LL, 0LL, 0LL, IoStatusBlock, a3, InputBuffer, InputBufferLength, 0LL, 0);
          }
          else
          {
            v30 = 0LL;
            RelatedDeviceObject = IoGetRelatedDeviceObject(v21);
            DeviceObject = RelatedDeviceObject;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v25 = IoBuildDeviceIoControlRequest(
                    a3,
                    RelatedDeviceObject,
                    InputBuffer,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v30);
            if ( v25 )
            {
              v25->RequestorMode = a12;
              ObfReferenceObject(v21);
              v25->Tail.Overlay.CurrentStackLocation[-1].FileObject = v21;
              if ( v27 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v19 + 37), 0LL, 0LL);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v32, v16);
              if ( IofCallDriver(DeviceObject, v25) == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
              }
              Status = v30.Status;
              RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v32);
              ObfDereferenceObject(v21);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v26 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v26 = (_DWORD *)MmUserProbeAddress;
              *v26 = v30.Information;
            }
            else
            {
              *a8 = v30.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v18) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v18, 1, 129, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
        }
        ObfDereferenceObject(v19);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v33);
    ObfDereferenceObject(v16);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, 131, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, Status);
  }
  return (unsigned int)Status;
}
