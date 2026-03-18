/*
 * XREFs of ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01F41DC
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C01E89EC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C01EFF74 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C01FCFCC (--1CIVSerializer@@UEAA@XZ.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2,
        int a3)
{
  __int16 v3; // di
  int v6; // r8d
  _WORD *v7; // rax
  int v8; // edi
  bool v9; // bl
  struct _DEVICE_OBJECT *AttachedDevice; // rcx
  int v11; // edx
  __int16 v13; // [rsp+30h] [rbp-58h]
  char v14; // [rsp+40h] [rbp-48h]
  _QWORD v15[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h]

  v3 = (__int16)a2;
  CIVGenericSerializer::CIVGenericSerializer(v15);
  v7 = (_WORD *)v16;
  if ( v16 )
  {
    *(_DWORD *)(v16 + 4) = a3;
    v9 = 1;
    *v7 = v3;
    v8 = ivrIVBroadcast((const struct CIVSerializer *)v15, 1u, this);
    if ( v8 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v9 = 0;
      }
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = v8;
        v13 = 38;
        AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
        goto LABEL_18;
      }
    }
  }
  else
  {
    v8 = -1073741801;
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
      v14 = 23;
      v11 = 37;
      v13 = 37;
LABEL_18:
      LOBYTE(v11) = v9;
      WPP_RECORDER_AND_TRACE_SF_D(
        (_DWORD)AttachedDevice,
        v11,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v13,
        (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
        v14);
    }
  }
  v15[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v15);
  return (unsigned int)v8;
}
