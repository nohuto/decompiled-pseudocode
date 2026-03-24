/*
 * XREFs of ?SendRootPnpCreated@PnP@IVRootDeliver@@YAJPEAURawInputManagerDeviceObject@@AEBUCONTAINER_ID@@@Z @ 0x1C01BC3C0
 * Callers:
 *     ?RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006A500 (-RIMDeviceCallback_Created@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z @ 0x1C01B96F0 (-ivOnChildLifetimeNotification@CBaseInput@@MEAAJPEAX@Z.c)
 *     ?SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z @ 0x1C01BC120 (-SendRootPnp@PnP@IVRootDeliver@@YAJPEAUDEVICEINFO@@KAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0054A8C (WPP_RECORDER_SF_S.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01B3CF4 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C01B3D5C (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01B4BBC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B55A8 (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01B5CA0 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEBU_UNICODE_STRING@@AEAUCIVSerializer@@@.c)
 *     ?SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01BC0D8 (-SendPnP@Detail@PnP@IVRootDeliver@@YAJPEAXKPEAU_ETHREAD@@1KAEBUCONTAINER_ID@@P6AJPEAU_IVSRContex.c)
 */

__int64 __fastcall IVRootDeliver::PnP::SendRootPnpCreated(
        IVRootDeliver::PnP *this,
        struct RawInputManagerDeviceObject *a2,
        const struct CONTAINER_ID *a3)
{
  void *v5; // rdx
  unsigned __int64 v6; // rsi
  char *v8; // rcx
  PVOID v9; // rdi
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ebx
  int v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // r9d
  unsigned __int64 v17; // rdx
  IVRootDeliver::PnP::Detail *v18; // rcx
  struct _ETHREAD *CurrentThread; // r9
  int v20; // eax
  struct _ETHREAD *v21; // [rsp+28h] [rbp-39h]
  struct CONTAINER_ID *v22; // [rsp+30h] [rbp-31h]
  struct CONTAINER_ID *v23; // [rsp+30h] [rbp-31h]
  struct _UNICODE_STRING v24; // [rsp+48h] [rbp-19h] BYREF
  IVRootDeliver::PnP::Detail *v25; // [rsp+58h] [rbp-9h] BYREF
  void *v26; // [rsp+60h] [rbp-1h]
  _DWORD *v27; // [rsp+68h] [rbp+7h]
  char *v28; // [rsp+C8h] [rbp+67h] BYREF

  v5 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v5) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v5,
      12,
      67,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    v5 = &WPP_ce934868e6283481801d375bb45badae_Traceguids;
  }
  v24 = 0LL;
  v6 = ((unsigned __int64)this + 88) & -(__int64)(this != 0LL);
  if ( *(_BYTE *)(v6 + 0x30) <= 2u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_S(
        (_DWORD)gBaseLog,
        (_DWORD)v5,
        12,
        69,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
        *(_QWORD *)((((unsigned __int64)this + 88) & -(__int64)(this != 0LL)) + 0xD8));
    }
    v8 = *(char **)((((unsigned __int64)this + 88) & -(__int64)(this != 0LL)) + 0x538);
    v9 = 0LL;
    v28 = 0LL;
    if ( v8 )
    {
      v10 = RawInputManagerDeviceObjectResolveHandle(v8, 3u, 0, (PVOID *)&v28);
      v12 = v10;
      if ( v10 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v22) = v10;
          LOBYTE(v11) = 2;
          WPP_RECORDER_SF_d(
            (_DWORD)gBaseLog,
            v11,
            12,
            70,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v22);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LOBYTE(v13) = 5;
              WPP_RECORDER_SF_(
                WPP_GLOBAL_Control->DeviceExtension,
                v13,
                12,
                71,
                (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
            }
          }
        }
        return v12;
      }
      v9 = v28;
      v24 = *(struct _UNICODE_STRING *)(v28 + 296);
    }
    CIVSerializer::CIVSerializer((CIVSerializer *)&v25, 1464LL);
    if ( !v27 )
    {
      v12 = -1073741801;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v16 = 75;
      LODWORD(v22) = -1073741801;
      goto LABEL_24;
    }
    v15 = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v6, &v24, (struct CIVSerializer *)&v25);
    v12 = v15;
    if ( v15 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_32;
      v16 = 74;
      goto LABEL_23;
    }
    v15 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v25);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v15 = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v6, &v24, (struct CIVSerializer *)&v25);
      v12 = v15;
      if ( v15 >= 0 )
      {
        v17 = (unsigned int)v26;
        v18 = v25;
        *(_DWORD *)v25 = (_DWORD)v26 - 16;
        *(_QWORD *)((char *)v18 + 4) = 1LL;
        *((_DWORD *)v18 + 3) = 0;
        *v27 = 1;
        CurrentThread = KeGetCurrentThread();
        LODWORD(v21) = *(unsigned __int8 *)(v6 + 48);
        v20 = IVRootDeliver::PnP::Detail::SendPnP(v25, (void *)v17, CurrentThread, CurrentThread, v21, a2);
        v12 = v20;
        if ( v20 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v9 = v28;
        }
        else
        {
          LODWORD(v23) = v20;
          LOBYTE(v14) = 2;
          WPP_RECORDER_SF_d(
            (_DWORD)gBaseLog,
            v14,
            12,
            76,
            (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids,
            v23);
          v9 = v28;
        }
        goto LABEL_32;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 73;
        goto LABEL_23;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 72;
LABEL_23:
      LODWORD(v22) = v15;
LABEL_24:
      LOBYTE(v14) = 2;
      WPP_RECORDER_SF_d((_DWORD)gBaseLog, v14, 12, v16, (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids, v22);
    }
LABEL_32:
    if ( v9 )
      ObfDereferenceObject(v9);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v14) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        12,
        77,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
    CIVSerializer::~CIVSerializer((CIVSerializer *)&v25);
    return v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v5) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v5,
        12,
        68,
        (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    }
  }
  return 0LL;
}
