__int64 __fastcall IVRootDeliver::PnP::SendRootPnp(
        IVRootDeliver::PnP *this,
        struct DEVICEINFO *a2,
        const struct CONTAINER_ID *a3,
        const struct CONTAINER_ID *a4)
{
  struct RawInputManagerDeviceObject *v4; // r15
  int v5; // ebp
  char v7; // bl
  int v9; // eax
  IVRootDeliver::PnP *v10; // rcx
  int v11; // r8d
  int v12; // edi
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  __int64 v15; // rdx
  const struct CONTAINER_ID *v16; // r9
  void *v17; // rdx
  _QWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v19; // [rsp+60h] [rbp-38h]

  v4 = a3;
  v5 = (int)a2;
  v7 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_S(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      53,
      (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
      *((_QWORD *)this + 27));
  if ( *((_BYTE *)this + 48) > 2u )
    return 0LL;
  if ( v5 == 2 )
  {
    v9 = *((_DWORD *)this + 46);
    if ( v9 < 0 )
    {
      v10 = (IVRootDeliver::PnP *)*((_QWORD *)this + 4);
      *((_DWORD *)this + 46) = v9 & 0x7FFFFFFF;
      IVRootDeliver::PnP::SendRootPnpCreated(v10, v4, a3);
    }
  }
  CIVGenericSerializer::CIVGenericSerializer(v18);
  if ( v19 )
  {
    v12 = CIVSerializer::Serialize(
            (CIVSerializer *)v18,
            (struct _UNICODE_STRING *)(v19 + 8),
            (const struct _UNICODE_STRING *)this + 13,
            1);
    if ( v12 < 0 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v7 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_55;
      v14 = 56;
    }
    else
    {
      v12 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)v18);
      if ( v12 >= 0 )
      {
        v15 = v19;
        *(_DWORD *)v19 = v5;
        *(_DWORD *)(v15 + 24) = *((unsigned __int8 *)this + 48);
        v12 = CIVSerializer::Serialize(
                (CIVSerializer *)v18,
                (struct _UNICODE_STRING *)(v15 + 8),
                (const struct _UNICODE_STRING *)this + 13,
                0);
        if ( v12 >= 0 )
        {
          *(_DWORD *)v19 = v5;
          v12 = IVRootDeliver::PnP::Detail::SendPnP(
                  (IVRootDeliver::PnP::Detail *)v18,
                  (const struct CIVSerializer *)*((unsigned __int8 *)this + 48),
                  (__int64)v4,
                  v16);
          if ( v12 >= 0 )
            goto LABEL_55;
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v7 = 0;
          }
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_55;
          v14 = 58;
        }
        else
        {
          v13 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v7 = 0;
          }
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_55;
          v14 = 55;
        }
      }
      else
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          v7 = 0;
        }
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_55;
        v14 = 54;
      }
    }
  }
  else
  {
    v12 = -1073741801;
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v7 = 0;
    }
    LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v7 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_55;
    v14 = 57;
  }
  v17 = &WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids;
  LOBYTE(v17) = v7;
  WPP_RECORDER_AND_TRACE_SF_d(
    v13->AttachedDevice,
    (_DWORD)v17,
    v11,
    WPP_MAIN_CB.Queue.ListEntry.Flink,
    2,
    12,
    v14,
    (__int64)&WPP_f2a84c97bb1638316b1e2b9619b34032_Traceguids,
    v12);
LABEL_55:
  v18[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v18);
  return (unsigned int)v12;
}
