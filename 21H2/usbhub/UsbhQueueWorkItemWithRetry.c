/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x1C0005F10
 * Callers:
 *     UsbhHubIsr @ 0x1C0004510 (UsbhHubIsr.c)
 *     UsbhSS_SignalPdoWake @ 0x1C001B37C (UsbhSS_SignalPdoWake.c)
 *     UsbhIsrRetryTimer @ 0x1C0038390 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1C0038A40 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C0041450 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitCallback @ 0x1C0042F40 (UsbhInitCallback.c)
 *     UsbhInitRetryTimer @ 0x1C0043260 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x1C0057300 (UsbhIdleIrpRetryTimer.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0057830 (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x1C0058140 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     UsbhAllocWorkItem @ 0x1C0003C40 (UsbhAllocWorkItem.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhEnableTimerObject @ 0x1C000C0D0 (UsbhEnableTimerObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002D6A8 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C002DBEC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002DDB8 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        _LIST_ENTRY *a1,
        __int64 a2,
        _LIST_ENTRY *a3,
        unsigned int a4,
        _LIST_ENTRY *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v7; // ebp
  _LIST_ENTRY *Flink; // rdx
  unsigned int v11; // r14d
  _LIST_ENTRY *v12; // rax
  unsigned __int8 v13; // r12
  struct _LIST_ENTRY *v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  __int64 v17; // r14
  void (__fastcall *v18)(_LIST_ENTRY *, __int64, void *, _QWORD, __int64, int); // rax
  int v19; // ecx
  int v21; // [rsp+28h] [rbp-50h]

  v7 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  Flink = a1[4].Flink;
  if ( !Flink )
    goto LABEL_38;
  if ( LODWORD(Flink->Flink) != 541218120 )
    UsbhTrapFatal_Dbg(a1, Flink);
  Log((_DWORD)a1, 8, 1364479299, a7, (__int64)a5);
  v11 = a6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  v12 = a1[4].Flink;
  if ( !v12 )
LABEL_38:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( LODWORD(v12->Flink) != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1[4].Flink);
  v13 = BYTE4(v12[329].Flink);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      46,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 )
    Log((_DWORD)a1, 8, 1632720717, a7, (__int64)a5);
  v14 = UsbhAllocWorkItem(a1, a3, a5, a6, a7, v13);
  v16 = (__int64)v14;
  if ( !v14 )
  {
    LOBYTE(v19) = -102;
LABEL_32:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        1,
        49,
        (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
        v11,
        v19);
    Log((_DWORD)a1, 8, 1364476705, a7, (__int64)a5);
    v15 = a2;
    if ( a2 )
      UsbhEnableTimerObject((_DWORD)a1, a2, 0, v11, (__int64)a5, a7);
    v7 = 1;
    goto LABEL_23;
  }
  _InterlockedIncrement((volatile signed __int32 *)&v14->Blink);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      a6);
  if ( a7 != 2001228627 )
    Log((_DWORD)a1, 8, 1364479275, a7, v16);
  v17 = *(_QWORD *)(v16 + 40);
  v18 = *(void (__fastcall **)(_LIST_ENTRY *, __int64, void *, _QWORD, __int64, int))(FdoExt(a1) + 4784);
  if ( v18 )
  {
    LOBYTE(v21) = v13;
    v18(a1, v17, &UsbhHubWorker, a4, v16, v21);
    v19 = 0;
  }
  else
  {
    v19 = -1073741822;
  }
  v11 = a6;
  if ( (v19 & 0xC0000000) == 0xC0000000 )
    goto LABEL_32;
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v15,
      1,
      50,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
      v11,
      v7);
  return v7;
}
