/*
 * XREFs of ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x1C01AF70C
 * Callers:
 *     BroadcastSettingsUpdateToAllContainers @ 0x1C000D350 (BroadcastSettingsUpdateToAllContainers.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B9620 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ?GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ @ 0x1C00A4C60 (-GetMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEBAIXZ.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B3C24 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3C8C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BA250 (-ivrIVBroadcast@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 *     ?ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BA308 (-ivrIVSend@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z.c)
 */

void __fastcall IVRootDeliver::Settings::SendSettingsUpdateToContainer(
        IVRootDeliver::Settings *this,
        const struct CONTAINER_ID *a2)
{
  int v3; // edx
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  struct _ETHREAD *CurrentThread; // r8
  int v7; // eax
  int v8; // edx
  struct CONTAINER_ID *v9; // [rsp+28h] [rbp-60h]
  int (*v10)(struct _IVSRContext *); // [rsp+30h] [rbp-58h]
  void *v11; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v12; // [rsp+48h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-38h]

  CIVSerializer::CIVSerializer((CIVSerializer *)&v11, 0x28uLL);
  v4 = v13;
  if ( v13 )
  {
    v5 = v11;
    *(_DWORD *)v11 = v12 - 16;
    v5[1] = 1;
    *((_QWORD *)v5 + 1) = 8LL;
    *(_QWORD *)(v4 + 20) = gTouchPadParameters;
    *(_DWORD *)(v4 + 28) = DWORD2(gTouchPadParameters);
    *(_DWORD *)(v4 + 32) = qword_1C024ED38;
    *(_DWORD *)(v4 + 36) = WORD6(gTouchPadParameters) & 0x7FF | ((*(_BYTE *)(&qword_1C024ED38 + 1) & 0x7F) << 11);
    *(_DWORD *)v4 = *((_DWORD *)gpsi + 497);
    *(_DWORD *)(v4 + 4) = CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CDeviceAcceleration *)((char *)qword_1C0245098 + 104));
    *(_DWORD *)(v4 + 8) = *((_DWORD *)gpsi + 1247);
    *(_DWORD *)(v4 + 12) = dword_1C024B300;
    *(_DWORD *)(v4 + 16) = dword_1C024B2D0;
    CurrentThread = KeGetCurrentThread();
    if ( *(_WORD *)this || *((_WORD *)this + 1) )
      v7 = ivrIVSend(v11, v12, CurrentThread, CurrentThread, 2u, this, v10);
    else
      v7 = ivrIVBroadcast(v11, v12, CurrentThread, CurrentThread, 2u, this, v10);
    if ( v7 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v7;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        12,
        17,
        (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids,
        v9);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      v3,
      12,
      16,
      (__int64)&WPP_e18a3e3623fd345076d33ab3e1bf5af6_Traceguids);
  }
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v11);
}
