/*
 * XREFs of Controller_AllocateIrqlTrackingArray @ 0x1C001E644
 * Callers:
 *     Controller_Create @ 0x1C00712C4 (Controller_Create.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     WPP_RECORDER_SF_P @ 0x1C0037340 (WPP_RECORDER_SF_P.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall Controller_AllocateIrqlTrackingArray(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 Pool2; // rax
  int v8; // edx
  int v9; // r8d

  v4 = 0;
  if ( *(_QWORD *)(a1 + 864) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 872) = ActiveProcessorCount;
  Pool2 = ExAllocatePool2(64LL, 2 * ActiveProcessorCount, 1229146200LL);
  *(_QWORD *)(a1 + 864) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_P(*(_QWORD *)(a1 + 72), v8, v9, 322);
    return (unsigned int)-1073741670;
  }
  return v4;
}
