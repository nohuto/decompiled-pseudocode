/*
 * XREFs of ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C
 * Callers:
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C005D270 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00C3160 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00C5700 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     IVWorkerThread @ 0x1C01F01F0 (IVWorkerThread.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F71BC (-Receive@CIVChannel@@AEAAJXZ.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F7468 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

void __fastcall CIVChannel::Initialize(CIVChannel *this)
{
  char v2; // bl
  bool v3; // dl
  const char *v4; // r9
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r11
  int v8; // ecx
  int v9; // edx
  PDEVICE_OBJECT v10; // r10
  int v11; // edx
  struct _ETHREAD *CurrentThread; // rdx
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  __int16 v16; // [rsp+30h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-28h]
  __int64 v18; // [rsp+48h] [rbp-20h]

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = "ReInitialize";
    if ( !*((_BYTE *)this + 44) )
      v4 = "Initializing";
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)v4,
      4,
      12,
      10,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
      (__int64)v4,
      *((_DWORD *)this + 2));
  }
  if ( !isRootPartition() )
  {
    if ( !isChildPartition() )
      goto LABEL_23;
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        13,
        (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
    }
    CurrentThread = KeGetCurrentThread();
    if ( gpfnIVRegisterChildLifetimeNotifications )
    {
      v14 = gpfnIVRegisterChildLifetimeNotifications(
              (struct _ETHREAD *)gpIVThread,
              CurrentThread,
              (int (*)(void *))CIVChannel::sOnChildNotification,
              *((_DWORD *)this + 2),
              0LL);
      if ( v14 >= 0 )
      {
        if ( *((_BYTE *)this + 44) )
        {
          LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v6,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              12,
              14,
              (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
          }
          v15 = CIVChannel::Reconnect(this);
        }
        else
        {
          LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v6,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              12,
              15,
              (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
          }
          v15 = CIVChannel::Receive(this);
        }
        v14 = v15;
        if ( v15 >= 0 )
          goto LABEL_23;
      }
    }
    else
    {
      v14 = -1073741637;
    }
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 16;
      LODWORD(v18) = v14;
      v17 = *((_DWORD *)this + 2);
      v16 = 16;
      goto LABEL_79;
    }
LABEL_80:
    KeBugCheck(0x164u);
  }
  if ( !*((_BYTE *)this + 44) )
  {
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        11,
        v7);
    }
    if ( gpfnIVRegisterChildLifetimeNotifications )
    {
      v8 = gpfnIVRegisterChildLifetimeNotifications(
             (struct _ETHREAD *)gpIVThread,
             0LL,
             (int (*)(void *))CIVChannel::sOnChildNotification,
             *((_DWORD *)this + 2),
             0LL);
      if ( v8 >= 0 )
        goto LABEL_23;
    }
    else
    {
      v8 = -1073741637;
    }
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v2 = 0;
    }
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v18) = v8;
      v17 = *((_DWORD *)this + 2);
      v16 = 12;
LABEL_79:
      LOBYTE(v5) = v2;
      WPP_RECORDER_AND_TRACE_SF_dd(
        v10->AttachedDevice,
        v5,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        v16,
        (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
        v17,
        v18);
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
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = 17;
    LOBYTE(v9) = v2;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v6,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      17,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
      *((_DWORD *)this + 2));
  }
}
