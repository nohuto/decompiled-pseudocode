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
  int v14; // edx
  NTSTATUS Status; // esi
  int v16; // r8d
  struct RawInputManagerObject *v17; // r13
  int v18; // edx
  int v19; // edx
  _QWORD *v20; // r14
  struct _FILE_OBJECT *v21; // r15
  void *v22; // rcx
  ULONG64 v24; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v26; // rax
  IRP *v27; // rsi
  _DWORD *v28; // rdx
  _UNKNOWN **v29; // r8
  _UNKNOWN **v30; // r8
  PVOID v31; // [rsp+50h] [rbp-88h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-78h]
  PVOID v34; // [rsp+68h] [rbp-70h] BYREF
  _BYTE v35[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK v36; // [rsp+78h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-50h] BYREF
  __int64 v38; // [rsp+E8h] [rbp+10h]
  ULONG IoControlCode; // [rsp+F0h] [rbp+18h]
  PVOID InputBuffer; // [rsp+F8h] [rbp+20h]
  BOOL v41; // [rsp+138h] [rbp+60h]

  InputBuffer = a4;
  IoControlCode = a3;
  v38 = a2;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      137,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
    a4 = InputBuffer;
  }
  v31 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v24 = (ULONG64)a4 + InputBufferLength;
      if ( v24 > MmUserProbeAddress || v24 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v31);
  if ( Status >= 0 )
  {
    v17 = (struct RawInputManagerObject *)v31;
    v41 = *((_QWORD *)v31 + 14) == (_QWORD)KeGetCurrentThread();
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v35,
      (struct RIMLOCK *)((char *)v31 + 104));
    if ( *((_BYTE *)v17 + 81) )
    {
      Status = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v18) = 0;
      }
      v30 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          (_DWORD)v30,
          (_DWORD)gRimLog,
          3,
          1,
          139,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v38, 3LL, 1LL, &Object);
      if ( Status >= 0 )
      {
        v20 = Object;
        if ( *((_QWORD *)Object + 37) && (v21 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 38)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 64) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4438LL);
            v22 = (void *)v20[37];
            if ( a12 == 1 )
              NtDeviceIoControlFile(
                v22,
                0LL,
                0LL,
                0LL,
                IoStatusBlock,
                IoControlCode,
                InputBuffer,
                InputBufferLength,
                0LL,
                0);
            else
              ZwDeviceIoControlFile(
                v22,
                0LL,
                0LL,
                0LL,
                IoStatusBlock,
                IoControlCode,
                InputBuffer,
                InputBufferLength,
                0LL,
                0);
          }
          else
          {
            v36 = 0LL;
            memset(&Event, 0, sizeof(Event));
            RelatedDeviceObject = IoGetRelatedDeviceObject(v21);
            DeviceObject = RelatedDeviceObject;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v26 = IoBuildDeviceIoControlRequest(
                    IoControlCode,
                    RelatedDeviceObject,
                    InputBuffer,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v36);
            v27 = v26;
            if ( v26 )
            {
              v26->RequestorMode = a12;
              ObfReferenceObject(v21);
              v27->Tail.Overlay.CurrentStackLocation[-1].FileObject = v21;
              if ( v41 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v20 + 35), 0LL, 0LL);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)&v34, v17);
              if ( IofCallDriver(DeviceObject, v27) == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
              }
              Status = v36.Status;
              RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(&v34);
              ObfDereferenceObject(v21);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v28 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v28 = (_DWORD *)MmUserProbeAddress;
              *v28 = v36.Information;
            }
            else
            {
              *a8 = v36.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v19) = 0;
          }
          v29 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              (_DWORD)v29,
              (_DWORD)gRimLog,
              3,
              1,
              138,
              (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
          }
        }
        ObfDereferenceObject(v20);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v35);
    ObfDereferenceObject(v17);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v14) = 0;
  }
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v16,
      (_DWORD)gRimLog,
      4,
      1,
      140,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
