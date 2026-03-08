/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0093B20
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C016A2F0 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C002EFEC (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0039E60 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ApiSetEditionDeactivateMitInput @ 0x1C0093CC4 (ApiSetEditionDeactivateMitInput.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C00947E0 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00CCF84 (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     RIMFreePointerDevice @ 0x1C01B5B18 (RIMFreePointerDevice.c)
 *     ??1VirtualTouchpadProcessor@@AEAA@XZ @ 0x1C0223D34 (--1VirtualTouchpadProcessor@@AEAA@XZ.c)
 */

__int64 UserDeactivateMITInputProcessing()
{
  char v0; // bl
  char v1; // dl
  char v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  void *v18; // rcx
  VirtualTouchpadProcessor *v19; // rdi
  InputExtensibilityCallout *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 result; // rax
  char v26; // dl
  __int64 v27; // rax
  PVOID v28; // [rsp+70h] [rbp+8h] BYREF

  v0 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v1 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v1 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v2 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v2 = 0;
  }
  if ( v1 || v2 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      18,
      (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  (*(void (__fastcall **)(PKDPC))(*(_QWORD *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc + 8LL))(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  v7 = SGDGetUserSessionState(v4, v3, v5, v6);
  InputExtensibilityCallout::OnInputThreadStateChanged(*(_QWORD *)(v7 + 16048), 1LL);
  v12 = SGDGetUserSessionState(v9, v8, v10, v11);
  v13 = v12 + 3280;
  v14 = v12 + 3424;
  while ( v13 != v14 )
  {
    CBaseInput::HandleInputThreadStateChange(*(_QWORD *)(v13 + 24), 1);
    v13 += 48LL;
  }
  ApiSetEditionDeactivateMitInput();
  v18 = TouchExtensibility::ghInjectionDevice;
  if ( TouchExtensibility::ghInjectionDevice )
  {
    v28 = 0LL;
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &v28) >= 0 )
    {
      v27 = HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19);
      if ( v27 )
      {
        v15 = *(_QWORD *)(v27 + 472);
        if ( v15 )
          RIMFreePointerDevice(v28);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v19 = VirtualTouchpadProcessor::s_instance;
  if ( VirtualTouchpadProcessor::s_instance )
  {
    VirtualTouchpadProcessor::~VirtualTouchpadProcessor(VirtualTouchpadProcessor::s_instance);
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v19);
    VirtualTouchpadProcessor::s_instance = 0LL;
  }
  v20 = *(InputExtensibilityCallout **)(SGDGetUserSessionState(v18, v15, v16, v17) + 16048);
  *(_QWORD *)v20 = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v20);
  result = SGDGetUserSessionState(v22, v21, v23, v24);
  *(_QWORD *)(result + 3448) = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 2) == 0)
    || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v26 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v0 = 0;
  if ( v26 || v0 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v26,
             v0,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             2,
             19,
             (__int64)&WPP_57958f1c0af5359901bb86e3ae8a02de_Traceguids);
  return result;
}
