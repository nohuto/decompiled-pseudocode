/*
 * XREFs of ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01D0B94
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C01D1824 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0083180 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E625C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

bool __fastcall CTouchProcessor::ProcessDelayZonePalmRejection(struct _KTHREAD **this, struct CPointerInputFrame *a2)
{
  struct CPointerInputFrame *v2; // rbp
  char v4; // bl
  char v5; // r8
  bool v6; // si
  struct DelayZonePalmRejection *Instance; // rax
  int v8; // edx
  DelayZonePalmRejection *v9; // rdi
  PERESOURCE *v11[6]; // [rsp+40h] [rbp-48h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      30,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  v6 = 1;
  Instance = DelayZonePalmRejection::GetInstance();
  v9 = Instance;
  if ( Instance )
  {
    if ( *((_DWORD *)Instance + 24) && gDeviceArbitrationType )
    {
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v11, this + 4, 0LL);
      v6 = DelayZonePalmRejection::ProcessInput(v9, v2);
      CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v11);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        31,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v8 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      32,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  return v6;
}
