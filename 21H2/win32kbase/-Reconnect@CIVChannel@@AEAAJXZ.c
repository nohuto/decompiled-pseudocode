/*
 * XREFs of ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F7468
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F654C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x1C01F69BC (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     UserSleep @ 0x1C0165090 (UserSleep.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F71BC (-Receive@CIVChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CIVChannel::Reconnect(CIVChannel *this)
{
  char v2; // bl
  bool v3; // dl
  int v4; // edi
  int v5; // ebp
  int v6; // r8d
  void *v7; // rdx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // [rsp+48h] [rbp-20h]

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      26,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
      *((_DWORD *)this + 2));
  v4 = 0;
  while ( 1 )
  {
    if ( !gpfnIVChildReInitialize )
    {
      v5 = -1073741637;
      goto LABEL_21;
    }
    v5 = gpfnIVChildReInitialize(*((_DWORD *)this + 2));
    if ( v5 >= 0 )
      break;
LABEL_21:
    UserSleep(1000);
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v11) = v5;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        27,
        (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
        v4,
        v11);
    }
    if ( (unsigned int)++v4 >= 0xA )
      KeBugCheck(0x164u);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = &WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids;
    LOBYTE(v7) = v2;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v7,
      v6,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      28,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids);
  }
  return CIVChannel::Receive(this);
}
