/*
 * XREFs of InitCreateObjectDirectory @ 0x1C02E5E68
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ApiSetEditionCreateDefaultWindowStation @ 0x1C00C0D04 (ApiSetEditionCreateDefaultWindowStation.c)
 */

__int64 InitCreateObjectDirectory()
{
  bool v0; // dl
  int DefaultWindowStation; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      14,
      19,
      (__int64)&WPP_6bbaa2e2a0713bd7aecc3a487024d555_Traceguids);
  RtlInitUnicodeString(&DestinationString, szWindowStationDirectory);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = gpsdInitWinSta;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  DefaultWindowStation = ZwCreateDirectoryObject(&ghWinstaDirectory, 4u, &ObjectAttributes);
  if ( DefaultWindowStation >= 0 )
    DefaultWindowStation = ApiSetEditionCreateDefaultWindowStation();
  if ( gpsdInitWinSta )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)gpsdInitWinSta);
  gpsdInitWinSta = 0LL;
  return (unsigned int)DefaultWindowStation;
}
