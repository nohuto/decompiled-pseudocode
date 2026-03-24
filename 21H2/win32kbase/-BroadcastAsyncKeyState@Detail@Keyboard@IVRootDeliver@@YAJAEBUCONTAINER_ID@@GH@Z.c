/*
 * XREFs of ?BroadcastAsyncKeyState@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@GH@Z @ 0x1C01BB1C4
 * Callers:
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BD0A4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B3CF4 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3D5C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BA320 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::BroadcastAsyncKeyState(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2,
        int a3)
{
  __int16 v4; // di
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // r9d
  _DWORD *v9; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v11; // eax
  struct CONTAINER_ID *v13; // [rsp+28h] [rbp-70h]
  void *v14; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-50h]
  __int64 v16; // [rsp+50h] [rbp-48h]

  v4 = (__int16)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)a2,
      12,
      53,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v14, 8LL);
  v6 = v16;
  if ( !v16 )
  {
    v7 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v8 = v16 + 54;
    LODWORD(v13) = -1073741801;
    goto LABEL_10;
  }
  v9 = v14;
  *(_DWORD *)v14 = v15 - 16;
  v9[1] = 1;
  *((_QWORD *)v9 + 1) = 6LL;
  *(_WORD *)v6 = v4;
  *(_DWORD *)(v6 + 4) = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = ivrIVBroadcast(v14, v15, CurrentThread, CurrentThread, 1u, this);
  v7 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_14;
    v8 = 55;
    LODWORD(v13) = v11;
LABEL_10:
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_d((_DWORD)gBaseLog, v6, 12, v8, (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids, v13);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_WORD)v6,
      12,
      56,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
LABEL_14:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v14);
  return v7;
}
