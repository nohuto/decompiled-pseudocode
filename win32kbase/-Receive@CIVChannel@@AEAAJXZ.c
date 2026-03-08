/*
 * XREFs of ?Receive@CIVChannel@@AEAAJXZ @ 0x1C0229270
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C022858C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C0228DF0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C022951C (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C0220F5C (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CIVChannel::Receive(CIVChannel *this)
{
  __int64 (__fastcall *v2)(_QWORD); // rax
  char v3; // bl
  unsigned int v4; // edi
  bool v5; // dl
  bool v7; // dl
  int v8; // eax
  __int128 v9; // [rsp+50h] [rbp-58h]
  __int128 v10; // [rsp+70h] [rbp-38h] BYREF
  __int64 v11; // [rsp+80h] [rbp-28h]

  v9 = 0LL;
  v2 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)this + 4);
  v3 = 1;
  v4 = -1073741823;
  if ( !v2 || (*((_QWORD *)&v9 + 1) = v2(*(_QWORD *)this)) != 0LL )
  {
    if ( !gpIVThread )
    {
LABEL_12:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v3 = 0;
      }
      if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v3,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          32,
          (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
      return v4;
    }
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        30,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        *((_DWORD *)this + 2));
    v8 = *((_DWORD *)this + 2);
    v10 = v9;
    v11 = 12LL;
    v4 = ivrIVRecv(0x10u, gpIVThread, (__int64)KeGetCurrentThread(), &v10, v8, (__int64)CIVChannel::sHeaderCallback);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        31,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        v4);
  }
  else
  {
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        29,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
    if ( !gpIVThread )
      goto LABEL_12;
  }
  return v4;
}
