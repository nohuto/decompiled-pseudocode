/*
 * XREFs of ?SendRootPnpSyncState@PnP@IVRootDeliver@@YAJW4_IVPnPSyncState@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC688
 * Callers:
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B9620 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B3C24 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3C8C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BC008 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContex.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpSyncState(int a1, int a2, struct CONTAINER_ID *a3)
{
  int v4; // esi
  unsigned int v6; // ebx
  _DWORD *v7; // rdx
  int v8; // edx
  IVRootDeliver::PnP::Detail *v9; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v11; // eax
  struct _ETHREAD *v13; // [rsp+20h] [rbp-78h]
  struct CONTAINER_ID *v14; // [rsp+28h] [rbp-70h]
  IVRootDeliver::PnP::Detail *v15; // [rsp+40h] [rbp-58h] BYREF
  void *v16; // [rsp+48h] [rbp-50h]
  _DWORD *v17; // [rsp+50h] [rbp-48h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      12,
      86,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  v6 = 0;
  CIVSerializer::CIVSerializer((CIVSerializer *)&v15, 4LL);
  v7 = v17;
  if ( v17 )
  {
    v9 = v15;
    LODWORD(v13) = v4;
    *(_DWORD *)v15 = (_DWORD)v16 - 16;
    *((_DWORD *)v9 + 1) = 1;
    *((_QWORD *)v9 + 1) = 2LL;
    *v7 = a1;
    CurrentThread = KeGetCurrentThread();
    v11 = IVRootDeliver::PnP::Detail::SendPnP(v15, (void *)(unsigned int)v16, CurrentThread, CurrentThread, v13, a3);
    v6 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_13;
      LODWORD(v14) = v11;
      LOBYTE(v8) = 2;
      WPP_RECORDER_SF_d(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v8,
        12,
        88,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        v14);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_13;
    LOBYTE(v7) = 2;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)v7,
      (_DWORD)v17 + 12,
      (_DWORD)v17 + 87,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      12,
      89,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
LABEL_13:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v15);
  return v6;
}
