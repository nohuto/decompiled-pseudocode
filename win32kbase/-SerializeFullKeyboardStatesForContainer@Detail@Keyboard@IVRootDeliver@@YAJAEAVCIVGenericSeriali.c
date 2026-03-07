__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
        IVRootDeliver::Keyboard::Detail *this,
        struct CIVGenericSerializer *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  PDEVICE_OBJECT *v13; // rdx
  _UNKNOWN **v14; // r8
  PDEVICE_OBJECT *v15; // rdx
  _UNKNOWN **v16; // r8

  SGDGetUserSessionState(this, a2, a3, a4);
  *((_DWORD *)this + 2) += 64;
  SGDGetUserSessionState(v6, v5, v7, v8);
  *((_DWORD *)this + 2) += 64;
  v10 = CIVSerializer::ExtendByMeasuredExtra(this);
  if ( v10 >= 0 )
  {
    v10 = IVSerializeFullKeyboardStates(this, v9, v11, v12);
    if ( v10 < 0 )
    {
      v15 = &WPP_GLOBAL_Control;
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      v16 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v15,
          (_DWORD)v16,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          36,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v10);
      }
    }
  }
  else
  {
    v13 = &WPP_GLOBAL_Control;
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    v14 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        (_DWORD)v14,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        35,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        v10);
    }
  }
  return (unsigned int)v10;
}
