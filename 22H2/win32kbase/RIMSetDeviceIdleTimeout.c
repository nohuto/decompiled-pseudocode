/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C0162510
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00AD30C (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00581B0 (RIMGetDeviceObjectPointer.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0137454 (WPP_RECORDER_SF_qd.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0160D70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int Status; // ebx
  struct _FILE_OBJECT *v6; // rsi
  _DWORD *v7; // rax
  int v8; // edx
  void *v9; // r14
  PIRP v10; // rax
  int v11; // edx
  struct _DEVICE_OBJECT *v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+40h] BYREF
  int v17; // [rsp+C8h] [rbp+48h] BYREF
  PVOID v18; // [rsp+D0h] [rbp+50h] BYREF
  HANDLE Handle; // [rsp+D8h] [rbp+58h] BYREF

  v17 = a2;
  v18 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
  {
    v17 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1896);
  }
  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 256LL) )
  {
    v17 = 30000;
    IoStatusBlock.Pointer = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C024AA90,
      byte_1C021A8D2,
      a3,
      v4,
      (__int64)&IoStatusBlock,
      (__int64)&v17);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      (__int64)gRimLog,
      4u,
      1u,
      0x44u,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      a1,
      30000);
  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, &v18, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    v6 = (struct _FILE_OBJECT *)v18;
    IoStatusBlock = 0LL;
    if ( !v18 )
    {
      v17 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1913);
    }
    if ( !Object )
    {
      v17 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1914);
    }
    ObfReferenceObject(Object);
    v7 = (_DWORD *)Win32AllocPoolNonPaged(4LL, 0x70707352u);
    v9 = v7;
    if ( v7 )
    {
      *v7 = 30000;
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v10 = IoBuildDeviceIoControlRequest(0xB01B0u, (PDEVICE_OBJECT)Object, v9, 4u, 0LL, 0, 0, &Event, &IoStatusBlock);
      v11 = (int)v10;
      if ( v10 )
      {
        v12 = (struct _DEVICE_OBJECT *)Object;
        v10->Tail.Overlay.CurrentStackLocation[-1].FileObject = v6;
        Status = IofCallDriver(v12, v10);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v11, 1, 69, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
        }
        Status = -1073741668;
      }
      Win32FreePool((__int64)v9);
    }
    if ( Status < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v8, 1, 70, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
    ObfDereferenceObject(v6);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
