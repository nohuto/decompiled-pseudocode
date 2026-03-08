/*
 * XREFs of ?ivHandleKeyboardInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C021E800
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C021D05C (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 *     FindRimDevByName @ 0x1C0221134 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x1C0221F28 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleKeyboardInputPacket(__int64 a1, UNICODE_STRING *a2, __int64 a3)
{
  __int64 v3; // rbp
  UNICODE_STRING *v4; // rsi
  unsigned int v5; // ebx
  struct RIMDEV *RimDevByName; // rax
  int v8; // r8d
  void *v9; // rdx

  v3 = a3;
  v4 = a2;
  v5 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      42,
      (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
  }
  v4->Buffer = (USHORT *)((char *)&v4->Length + ((unsigned __int64)v4->Buffer & 0xFFFFFFFFFFFFFFFEuLL));
  RIMLockExclusive(v3 + 104);
  if ( (unsigned __int8)IsRimObjectUnregistered(v3) )
  {
    *(_QWORD *)(v3 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
    KeLeaveCriticalRegion();
    return 2;
  }
  else
  {
    RimDevByName = (struct RIMDEV *)FindRimDevByName(v4);
    if ( RimDevByName )
    {
      DeliverKeyboardInputToRim((struct _IVKeyboardInputPacket *)v4, (struct RawInputManagerObject *)v3, RimDevByName);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v5) = 0;
      }
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v9 = &WPP_6faef5775b8438fac85e142323c35be9_Traceguids;
        LOBYTE(v9) = v5;
        LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v9,
          v8,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          12,
          43,
          (__int64)&WPP_6faef5775b8438fac85e142323c35be9_Traceguids);
      }
      v5 = 0;
    }
    *(_QWORD *)(v3 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v3 + 104, 0LL);
    KeLeaveCriticalRegion();
    return v5;
  }
}
