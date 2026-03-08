/*
 * XREFs of ?SendKeyboardInput@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C02266F8
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C0218FEC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220FC4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@AEBU_UNICODE_STRING@@AEBU_KEYBOARD_INPUT_DATA@@@Z @ 0x1C02283CC (-SerializeKeyboardInputForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAVCIVGenericSerializer@@.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C02332E8 (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendKeyboardInput(
        IVRootDeliver::Keyboard::Detail *this,
        struct _UNICODE_STRING *a2,
        const struct _KEYBOARD_INPUT_DATA *a3,
        void *a4)
{
  PVOID v6; // r12
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  int v10; // r14d
  char v11; // bl
  int v12; // edx
  int v13; // r8d
  const struct _KEYBOARD_INPUT_DATA *v14; // r9
  PDEVICE_OBJECT v15; // rcx
  bool v16; // bl
  __int16 v17; // ax
  struct _UNICODE_STRING v19; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v20[6]; // [rsp+68h] [rbp+7h] BYREF
  char *v21; // [rsp+E0h] [rbp+7Fh] BYREF

  v21 = 0LL;
  v6 = 0LL;
  v19 = 0LL;
  v7 = HMValidateHandleNoSecure((int)a3, 19);
  if ( v7 )
  {
    v10 = RawInputManagerDeviceObjectResolveHandle(*(char **)(v7 + 24), 3u, 0, (PVOID *)&v21);
    if ( v10 < 0 )
    {
      v11 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          41,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
          v10);
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v11 = 0;
      if ( (_BYTE)v8 || v11 )
      {
        LOBYTE(v9) = v11;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          12,
          42,
          (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids);
      }
      return (unsigned int)v10;
    }
    v6 = v21;
    v19 = *(struct _UNICODE_STRING *)(v21 + 280);
  }
  CIVGenericSerializer::CIVGenericSerializer(v20);
  if ( v20[2] )
  {
    v10 = IVRootDeliver::Keyboard::Detail::SerializeKeyboardInputForContainer(
            (IVRootDeliver::Keyboard::Detail *)v20,
            &v19,
            a2,
            v14);
    if ( v10 < 0 )
      goto LABEL_40;
    v16 = 1;
    v10 = ivrIVSend((const struct CIVSerializer *)v20, 1u, this);
    if ( v10 >= 0 )
      goto LABEL_40;
    v15 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v16 = 0;
    }
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v17 = 44;
  }
  else
  {
    v10 = -1073741801;
    v15 = WPP_GLOBAL_Control;
    v16 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v16 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v17 = 43;
  }
  LOBYTE(v12) = v16;
  WPP_RECORDER_AND_TRACE_SF_d(
    v15->AttachedDevice,
    v12,
    v13,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    12,
    v17,
    (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
    v10);
LABEL_40:
  if ( v6 )
    ObfDereferenceObject(v6);
  v20[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v20);
  return (unsigned int)v10;
}
