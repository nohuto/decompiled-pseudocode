__int64 __fastcall CBaseInput::RIMDeviceCallback_Destroyed(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  IVRootDeliver::PnP **v2; // r8
  IVRootDeliver::PnP *v3; // rbx
  struct RawInputManagerDeviceObject *v4; // rsi
  IVRootDeliver::PnP *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  const struct tagDomLock *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  const struct CONTAINER_ID *v16; // r9
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v2 = (IVRootDeliver::PnP **)*((_QWORD *)this + 166);
  v3 = (struct RawInputManagerDeviceObject *)((char *)a2 + 72);
  v4 = a2;
  while ( 1 )
  {
    v6 = *v2;
    if ( !*v2 )
      break;
    if ( v6 == v3 )
    {
      *v2 = (IVRootDeliver::PnP *)*((_QWORD *)a2 + 16);
      *((_QWORD *)a2 + 16) = 0LL;
      ObfDereferenceObject(a2);
      Feature_InputVirtualization__private_ReportDeviceUsage();
      if ( isRootPartition(v8, v7, v9, v10) && CIVChannel::ContainerConnected(*((_DWORD *)this + 340)) )
      {
        v17 = 0;
        IVRootDeliver::PnP::SendRootPnp(v3, (struct DEVICEINFO *)4, (unsigned int)&v17, v16);
      }
      if ( (*(unsigned __int8 (__fastcall **)(CBaseInput *, struct RawInputManagerDeviceObject *, IVRootDeliver::PnP *))(*(_QWORD *)this + 104LL))(
             this,
             v4,
             v3) )
      {
        LockRefactorStagingAssertOwned(v12, v11, v13, v14);
        if ( (unsigned int)HMMarkObjectDestroyWorker(v3) )
          HMRemoveHandleForObject();
      }
      return 0LL;
    }
    v2 = (IVRootDeliver::PnP **)((char *)v6 + 56);
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)v2,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      3,
      21,
      (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
      (char)v4);
  }
  return 0LL;
}
