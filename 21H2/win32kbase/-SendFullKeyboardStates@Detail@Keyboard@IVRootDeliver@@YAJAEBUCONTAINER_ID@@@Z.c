/*
 * XREFs of ?SendFullKeyboardStates@Detail@Keyboard@IVRootDeliver@@YAJAEBUCONTAINER_ID@@@Z @ 0x1C01BB4D0
 * Callers:
 *     VirtualizeFullKeyboardStates @ 0x1C01AF620 (VirtualizeFullKeyboardStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B3CF4 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3D5C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BA3D8 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z @ 0x1C01BCE3C (-SerializeFullKeyboardStatesForContainer@Detail@Keyboard@IVRootDeliver@@YAJAEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::Keyboard::Detail::SendFullKeyboardStates(
        IVRootDeliver::Keyboard::Detail *this,
        const struct CONTAINER_ID *a2)
{
  struct CIVSerializer *v3; // rdx
  int v4; // ebx
  int v5; // r9d
  _DWORD *v6; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v8; // eax
  struct CONTAINER_ID *v10; // [rsp+28h] [rbp-60h]
  void *v11; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      57,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  CIVSerializer::CIVSerializer((CIVSerializer *)&v11, 16LL);
  if ( !v13 )
  {
    v4 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_15;
    v5 = 58;
    LODWORD(v10) = -1073741801;
    goto LABEL_11;
  }
  v4 = IVRootDeliver::Keyboard::Detail::SerializeFullKeyboardStatesForContainer(
         (IVRootDeliver::Keyboard::Detail *)&v11,
         v3);
  if ( v4 >= 0 )
  {
    v6 = v11;
    *(_DWORD *)v11 = v12 - 16;
    v6[1] = 1;
    *((_QWORD *)v6 + 1) = 7LL;
    CurrentThread = KeGetCurrentThread();
    v8 = ivrIVSend(v11, v12, CurrentThread, CurrentThread, 1u, this);
    v4 = v8;
    if ( v8 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_15;
      v5 = 59;
      LODWORD(v10) = v8;
LABEL_11:
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_d(
        (_DWORD)gBaseLog,
        (_DWORD)v3,
        12,
        v5,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v10);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      12,
      60,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
LABEL_15:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v11);
  return (unsigned int)v4;
}
