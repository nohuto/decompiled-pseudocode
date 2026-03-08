/*
 * XREFs of ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01FE660
 * Callers:
 *     ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00DF6E8 (-ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z.c)
 *     ?ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z @ 0x1C00DFA8C (-ProcessInputOld@CTouchProcessor@@QEAAXPEAX0KHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     RIMAbIsDeviceArbitrationEnabled @ 0x1C00EF900 (RIMAbIsDeviceArbitrationEnabled.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0216000 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 */

bool __fastcall CTouchProcessor::ProcessDelayZonePalmRejection(
        CTouchProcessor *this,
        struct CPointerInputFrame *a2,
        __int64 a3)
{
  struct CPointerInputFrame *v3; // rbp
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  void *v7; // r9
  bool v8; // si
  struct DelayZonePalmRejection *Instance; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  DelayZonePalmRejection *v14; // rdi
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v20[40]; // [rsp+40h] [rbp-48h] BYREF
  CInpLockGuard *v21; // [rsp+68h] [rbp-20h]

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  v7 = &WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids;
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      34,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  v8 = 1;
  Instance = DelayZonePalmRejection::GetInstance((__int64)v5, (__int64)a2, a3, (__int64)v7);
  v14 = Instance;
  if ( Instance )
  {
    if ( *((_DWORD *)Instance + 24) && RIMAbIsDeviceArbitrationEnabled(v11, v10, v12, v13) )
    {
      CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
        (CInpUnlockGuardExclusive *)v20,
        (CTouchProcessor *)((char *)this + 32),
        0LL,
        v15);
      v8 = DelayZonePalmRejection::ProcessInput(v14, v3);
      CInpLockGuard::LockExclusive(v21);
      CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v20, v16, v17, v18);
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v12,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        7,
        35,
        (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v10 || v6 )
  {
    LOBYTE(v12) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v12,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      36,
      (__int64)&WPP_77bfa4f0c54b3389bae2ae41d0882265_Traceguids);
  }
  return v8;
}
