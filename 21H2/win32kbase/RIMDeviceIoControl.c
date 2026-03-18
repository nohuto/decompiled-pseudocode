/*
 * XREFs of RIMDeviceIoControl @ 0x1C0043640
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00400A0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     NtRIMDeviceIoControl @ 0x1C0180010 (NtRIMDeviceIoControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C00438D8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0043DEC (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     ??0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z @ 0x1C00BCE20 (--0RIMDropAndReAcquireSyncLock@@QEAA@PEAURawInputManagerObject@@@Z.c)
 *     ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00BE630 (--1RIMDropAndReAcquireSyncLock@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  int v14; // edx
  NTSTATUS Status; // esi
  int v16; // r8d
  struct RawInputManagerObject *v17; // r13
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // r14
  void *v22; // rcx
  struct _FILE_OBJECT *v23; // r15
  ULONG64 v25; // rcx
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  PIRP v27; // rax
  IRP *v28; // rsi
  _DWORD *v29; // rdx
  _UNKNOWN **v30; // r8
  _UNKNOWN **v31; // r8
  PVOID v32; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-68h]
  _BYTE v35[8]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v36[8]; // [rsp+70h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK v37; // [rsp+78h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-40h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+10h]
  ULONG IoControlCode; // [rsp+E0h] [rbp+18h]
  PVOID InputBuffer; // [rsp+E8h] [rbp+20h]
  BOOL v42; // [rsp+128h] [rbp+60h]

  InputBuffer = a4;
  IoControlCode = a3;
  v39 = a2;
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
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
    a4 = InputBuffer;
  }
  v32 = 0LL;
  Object = 0LL;
  if ( a12 == 1 )
  {
    if ( InputBufferLength )
    {
      v25 = (ULONG64)a4 + InputBufferLength;
      if ( v25 > MmUserProbeAddress || v25 < (unsigned __int64)a4 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    ProbeForWrite(Address, (unsigned int)Length, 1u);
  }
  Status = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &v32);
  if ( Status >= 0 )
  {
    v17 = (struct RawInputManagerObject *)v32;
    v42 = *((_QWORD *)v32 + 14) == (_QWORD)KeGetCurrentThread();
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
      (RIMLOCKExclusiveIfNeeded *)v36,
      (struct RIMLOCK *)((char *)v32 + 104));
    if ( *((_BYTE *)v17 + 81) )
    {
      Status = -1073741637;
      LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v31 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          (_DWORD)v31,
          (_DWORD)gRimLog,
          3,
          1,
          139,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
    }
    else
    {
      Status = RawInputManagerDeviceObjectResolveHandle(v39, 3LL, 1LL, &Object);
      if ( Status >= 0 )
      {
        v21 = Object;
        v22 = (void *)*((_QWORD *)Object + 39);
        if ( v22 && (v23 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 40)) != 0LL )
        {
          if ( (*((_DWORD *)Object + 68) & 0x2000) != 0 )
          {
            Status = -1073741637;
          }
          else if ( a10 )
          {
            if ( !IoStatusBlock )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v19, v20);
              v22 = (void *)v21[39];
            }
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
            v37 = 0LL;
            memset(&Event, 0, sizeof(Event));
            RelatedDeviceObject = IoGetRelatedDeviceObject(v23);
            DeviceObject = RelatedDeviceObject;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v27 = IoBuildDeviceIoControlRequest(
                    IoControlCode,
                    RelatedDeviceObject,
                    InputBuffer,
                    InputBufferLength,
                    (PVOID)Address,
                    Length,
                    a11 != 0,
                    &Event,
                    &v37);
            v28 = v27;
            if ( v27 )
            {
              v27->RequestorMode = a12;
              ObfReferenceObject(v23);
              v28->Tail.Overlay.CurrentStackLocation[-1].FileObject = v23;
              if ( v42 )
                KeBugCheckEx(0x164u, 0x24uLL, (ULONG_PTR)(v21 + 37), 0LL, 0LL);
              RIMDropAndReAcquireSyncLock::RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v35, v17);
              if ( IofCallDriver(DeviceObject, v28) == 259 )
              {
                while ( KeWaitForSingleObject(&Event, UserRequest, 0, 1u, 0LL) == 257 )
                  ;
              }
              Status = v37.Status;
              RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock((RIMDropAndReAcquireSyncLock *)v35);
              ObfDereferenceObject(v23);
            }
            else
            {
              Status = -1073741668;
            }
            if ( a12 )
            {
              v29 = a8;
              if ( (unsigned __int64)a8 >= MmUserProbeAddress )
                v29 = (_DWORD *)MmUserProbeAddress;
              *v29 = v37.Information;
            }
            else
            {
              *a8 = v37.Information;
            }
          }
        }
        else
        {
          Status = -1073741436;
          LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v30 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              (_DWORD)v30,
              (_DWORD)gRimLog,
              3,
              1,
              138,
              (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
          }
        }
        ObfDereferenceObject(v21);
      }
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v36);
    ObfDereferenceObject(v17);
  }
  LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v16,
      (_DWORD)gRimLog,
      4,
      1,
      140,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
