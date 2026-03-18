/*
 * XREFs of ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x1C01F69BC
 * Callers:
 *     ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1C01F7990 (-sOnChildNotification@CIVChannel@@CAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     isRootPartition @ 0x1C00384A0 (isRootPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C01DAF08 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F7468 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CIVChannel::OnChildNotification(CIVChannel *this, _DWORD *a2)
{
  int v4; // edx
  __int64 v5; // r8
  char v6; // di
  void *v7; // r9
  int v8; // eax
  unsigned int v9; // ebx
  char v11; // di
  int v12; // edx
  __int64 v13; // [rsp+20h] [rbp-68h]

  if ( isRootPartition() )
  {
    v6 = 1;
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v7 = &WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        19,
        (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
        a2[2]);
      v7 = &WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids;
    }
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        20,
        (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 10));
    }
    v8 = a2[2];
    v9 = a2[3];
    if ( v8 == 1 )
    {
      _InterlockedAdd((volatile signed __int32 *)this + 10, 1u);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v5,
          SHIWORD(v9),
          v13,
          0xCu,
          0x15u,
          (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
      (*((void (__fastcall **)(_QWORD, _QWORD, __int64, void *))this + 2))(*(_QWORD *)this, v9, v5, v7);
    }
    else if ( v8 == 3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 10);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v6 = 0;
      }
      if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_dddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v6,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          22,
          v13,
          0xCu,
          0x16u,
          (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
    }
    return 0LL;
  }
  v11 = 1;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      23,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
      a2[2]);
  }
  if ( a2[2] != 2 )
    return 0LL;
  LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      24,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
      *((_DWORD *)this + 2));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = 25;
    LOBYTE(v12) = v11;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v5,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      25,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
  }
  return CIVChannel::Reconnect(this);
}
