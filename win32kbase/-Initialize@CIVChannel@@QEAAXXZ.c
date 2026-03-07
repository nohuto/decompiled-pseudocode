void __fastcall CIVChannel::Initialize(CIVChannel *this, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v5; // rcx
  char v6; // bl
  const char *v7; // r9
  int v8; // edx
  int v9; // r8d
  int v10; // ecx
  int v11; // edx
  PDEVICE_OBJECT v12; // r10
  int v13; // edx
  struct _ETHREAD *CurrentThread; // rdx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  __int16 v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+40h] [rbp-28h]
  char v20; // [rsp+48h] [rbp-20h]

  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = "ReInitialize";
    if ( !*((_BYTE *)this + 44) )
      v7 = "Initializing";
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)v7,
      4,
      12,
      10,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      (__int64)v7,
      *((_DWORD *)this + 2));
  }
  if ( !isRootPartition((__int64)v5, a2, a3, a4) )
  {
    if ( !isChildPartition() )
      goto LABEL_23;
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        13,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
    }
    CurrentThread = KeGetCurrentThread();
    if ( gpfnIVRegisterChildLifetimeNotifications )
    {
      v16 = gpfnIVRegisterChildLifetimeNotifications(
              (struct _ETHREAD *)gpIVThread,
              CurrentThread,
              (int (*)(void *))CIVChannel::sOnChildNotification,
              *((_DWORD *)this + 2),
              0LL);
      if ( v16 >= 0 )
      {
        if ( *((_BYTE *)this + 44) )
        {
          LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              12,
              14,
              (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
          }
          v17 = CIVChannel::Reconnect(this);
        }
        else
        {
          LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              12,
              15,
              (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
          }
          v17 = CIVChannel::Receive(this);
        }
        LOBYTE(v16) = v17;
        if ( v17 >= 0 )
          goto LABEL_23;
      }
    }
    else
    {
      LOBYTE(v16) = -69;
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 16;
      v20 = v16;
      v19 = *((_DWORD *)this + 2);
      v18 = 16;
      goto LABEL_79;
    }
LABEL_80:
    KeBugCheck(0x164u);
  }
  if ( !*((_BYTE *)this + 44) )
  {
    LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        11,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
    }
    if ( gpfnIVRegisterChildLifetimeNotifications )
    {
      v10 = gpfnIVRegisterChildLifetimeNotifications(
              (struct _ETHREAD *)gpIVThread,
              0LL,
              (int (*)(void *))CIVChannel::sOnChildNotification,
              *((_DWORD *)this + 2),
              0LL);
      if ( v10 >= 0 )
        goto LABEL_23;
    }
    else
    {
      LOBYTE(v10) = -69;
    }
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v6 = 0;
    }
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = v10;
      v19 = *((_DWORD *)this + 2);
      v18 = 12;
LABEL_79:
      LOBYTE(v8) = v6;
      WPP_RECORDER_AND_TRACE_SF_dd(
        v12->AttachedDevice,
        v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v18,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        v19,
        v20);
      goto LABEL_80;
    }
    goto LABEL_80;
  }
LABEL_23:
  *((_BYTE *)this + 44) = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = 17;
    LOBYTE(v11) = v6;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      17,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      *((_DWORD *)this + 2));
  }
}
