/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C02192C4
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C009D090 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1C02200F0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00BDFCC (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ??0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z @ 0x1C0218FEC (--0CIVGenericSerializer@@QEAA@W4IVPacketType@@@Z.c)
 *     PackTouchpadSettings @ 0x1C0219048 (PackTouchpadSettings.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220F10 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1C0220FC4 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1C02332E8 (--1CIVSerializer@@UEAA@XZ.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // eax
  int v13; // edx
  int v14; // r8d
  _QWORD v15[2]; // [rsp+50h] [rbp-38h] BYREF
  _DWORD *v16; // [rsp+60h] [rbp-28h]

  CIVGenericSerializer::CIVGenericSerializer(v15);
  v6 = v16;
  if ( v16 )
  {
    PackTouchpadSettings(v16, v3, v4, v5);
    v7 = *((unsigned int *)gpsi + 497);
    *v6 = v7;
    v11 = SGDGetUserSessionState(v7, v8, v9, v10);
    v6[1] = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(*(_QWORD *)(v11 + 16008) + 104LL));
    v6[2] = *((_DWORD *)gpsi + 1247);
    v6[3] = dword_1C02CAAA0;
    v6[4] = dword_1C02CAA70;
    v6[5] = dword_1C02CAAB0;
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      v12 = ivrIVSend((const struct CIVSerializer *)v15, 3u, this);
    else
      v12 = ivrIVBroadcast((const struct CIVSerializer *)v15, 3u, this);
    v14 = v12;
    if ( v12 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          17,
          (__int64)&WPP_ba08f856c6723d7409559d634e9d3140_Traceguids,
          v12);
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v3) = 0;
    }
    if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        16,
        (__int64)&WPP_ba08f856c6723d7409559d634e9d3140_Traceguids);
    }
  }
  v15[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v15);
}
