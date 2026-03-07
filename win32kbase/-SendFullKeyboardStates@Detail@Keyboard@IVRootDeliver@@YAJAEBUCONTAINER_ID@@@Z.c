__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2)
{
  struct CIVGenericSerializer *v3; // rdx
  int v4; // r8d
  int v5; // edi
  PDEVICE_OBJECT v6; // rcx
  bool v7; // bl
  int v8; // edx
  const struct CONTAINER_ID *v9; // r8
  __int16 v11; // [rsp+30h] [rbp-58h]
  _QWORD v12[7]; // [rsp+50h] [rbp-38h] BYREF

  CIVGenericSerializer::CIVGenericSerializer(v12);
  if ( v12[2] )
  {
    v5 = IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
           (IVRootDeliver::Keyboard::Detail *)v12,
           v3);
    if ( v5 >= 0 )
    {
      v9 = this;
      v7 = 1;
      v5 = ivrIVSend((const struct CIVSerializer *)v12, 1u, v9);
      if ( v5 < 0 )
      {
        v6 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v7 = 0;
        }
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 40;
          goto LABEL_19;
        }
      }
    }
  }
  else
  {
    v5 = -1073741801;
    v6 = WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 39;
LABEL_19:
      v11 = v8;
      LOBYTE(v8) = v7;
      WPP_RECORDER_AND_TRACE_SF_d(
        v6->AttachedDevice,
        v8,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v11,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        v5);
    }
  }
  v12[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v12);
  return (unsigned int)v5;
}
