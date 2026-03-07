__int64 __fastcall IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
        struct _UNICODE_STRING **this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        const struct _KEYBOARD_INPUT_DATA *a4)
{
  char v6; // bl
  int v8; // edx
  int v9; // edi
  int v10; // r8d
  PDEVICE_OBJECT v11; // r10
  __int16 v12; // cx

  v6 = 1;
  v9 = CIVSerializer::Serialize((CIVSerializer *)this, this[2], a2, 1);
  if ( v9 >= 0 )
  {
    v9 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)this);
    if ( v9 >= 0 )
    {
      v9 = IVSerializeKeyboardInput(a3, a2, (struct CIVGenericSerializer *)this);
      if ( v9 < 0 )
      {
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v6 = 0;
        }
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v12 = 33;
          goto LABEL_25;
        }
      }
    }
    else
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v6 = 0;
      }
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 32;
        goto LABEL_25;
      }
    }
  }
  else
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = 31;
LABEL_25:
      LOBYTE(v8) = v6;
      WPP_RECORDER_AND_TRACE_SF_d(
        v11->AttachedDevice,
        v8,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v12,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        v9);
    }
  }
  return (unsigned int)v9;
}
