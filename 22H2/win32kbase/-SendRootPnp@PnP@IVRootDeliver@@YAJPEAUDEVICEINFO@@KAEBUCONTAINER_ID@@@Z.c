/*
 * XREFs of ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC050
 * Callers:
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00091E0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B57C0 (-RIMDeviceCallback_Opened@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00B7510 (-RIMDeviceCallback_Closed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B9620 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0055A8C (WPP_RECORDER_SF_S.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B3C24 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3C8C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B4AEC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z @ 0x1C01B6FD0 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@AEBU2@_N@Z.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BC008 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContex.c)
 *     ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BC2F0 (-SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnp(
        IVRootDeliver::PnP *this,
        struct DEVICEINFO *a2,
        struct RawInputManagerDeviceObject *a3,
        const struct CONTAINER_ID *a4)
{
  int v5; // esi
  int v8; // eax
  IVRootDeliver::PnP *v9; // rcx
  int v10; // edx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // r9d
  IVRootDeliver::PnP::Detail *v14; // rax
  __int64 v15; // rdx
  IVRootDeliver::PnP::Detail *v16; // rcx
  struct _ETHREAD *CurrentThread; // r9
  struct _ETHREAD *v18; // [rsp+20h] [rbp-60h]
  struct CONTAINER_ID *v19; // [rsp+28h] [rbp-58h]
  IVRootDeliver::PnP::Detail *v20; // [rsp+40h] [rbp-40h] BYREF
  void *v21; // [rsp+48h] [rbp-38h]
  __int64 v22; // [rsp+50h] [rbp-30h]

  v5 = (int)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(a2) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)a2,
        12,
        78,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_S(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        (_DWORD)a2,
        12,
        79,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        *((_QWORD *)this + 27));
    }
  }
  if ( *((_BYTE *)this + 48) > 2u )
    return 0LL;
  if ( v5 == 2 )
  {
    v8 = *((_DWORD *)this + 46);
    if ( (v8 & 0x20000000) != 0 )
    {
      v9 = (IVRootDeliver::PnP *)*((_QWORD *)this + 4);
      *((_DWORD *)this + 46) = v8 & 0xDFFFFFFF;
      IVRootDeliver::PnP::SendRootPnpCreated(v9, a3, a3);
    }
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v20, 32LL);
  v10 = v22;
  if ( v22 )
  {
    v11 = CIVSerializer::Serialize(
            (CIVSerializer *)&v20,
            (struct _UNICODE_STRING *)(v22 + 8),
            (const struct _UNICODE_STRING *)this + 13,
            1);
    v12 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 82;
        goto LABEL_16;
      }
    }
    else
    {
      v11 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v20);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v14 = v20;
        *((_DWORD *)v20 + 1) = 1;
        *((_QWORD *)v14 + 1) = 1LL;
        v15 = v22;
        *(_DWORD *)v14 = -16;
        *(_DWORD *)v15 = v5;
        *(_DWORD *)(v15 + 24) = *((unsigned __int8 *)this + 48);
        v11 = CIVSerializer::Serialize(
                (CIVSerializer *)&v20,
                (struct _UNICODE_STRING *)(v15 + 8),
                (const struct _UNICODE_STRING *)this + 13,
                0);
        v12 = v11;
        if ( v11 >= 0 )
        {
          v16 = v20;
          *(_DWORD *)v20 = (_DWORD)v21 - 16;
          *((_DWORD *)v16 + 1) = 1;
          *((_QWORD *)v16 + 1) = 1LL;
          *(_DWORD *)v22 = v5;
          CurrentThread = KeGetCurrentThread();
          LODWORD(v18) = *((unsigned __int8 *)this + 48);
          v11 = IVRootDeliver::PnP::Detail::SendPnP(
                  v20,
                  (void *)(unsigned int)v21,
                  CurrentThread,
                  CurrentThread,
                  v18,
                  a3);
          v12 = v11;
          if ( v11 >= 0 )
          {
LABEL_28:
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                LOBYTE(v10) = 5;
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v10,
                  12,
                  85,
                  (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
              }
            }
            goto LABEL_31;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v13 = 84;
            goto LABEL_16;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v13 = 81;
          goto LABEL_16;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 80;
LABEL_16:
        LODWORD(v19) = v11;
LABEL_17:
        LOBYTE(v10) = 2;
        WPP_RECORDER_SF_d(
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v10,
          12,
          v13,
          (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
          v19);
        goto LABEL_28;
      }
    }
  }
  else
  {
    v12 = -1073741801;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 83;
      LODWORD(v19) = -1073741801;
      goto LABEL_17;
    }
  }
LABEL_31:
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v20);
  return v12;
}
