/*
 * XREFs of ?VWPLNextBase@@YAPEAUtagWND@@PEAUtagVWPL@@_KPEAU1@PEAKHPEA_K@Z @ 0x1C00784D4
 * Callers:
 *     ?xxxHungAppDaemon@@YAXXZ @ 0x1C00765A0 (-xxxHungAppDaemon@@YAXXZ.c)
 *     ?_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00A6180 (-_PostShellHookMsgWorker@@YAXI_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C010DD14 (xxxSendMinRectMessages.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

struct tagWND *__fastcall VWPLNextBase(struct tagVWPL *a1, __int64 a2, struct tagWND *a3, unsigned int *a4)
{
  unsigned int v6; // ecx
  unsigned int v7; // edx
  bool v9; // dl
  bool v10; // dl

  if ( !a1 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)a3,
        16,
        4,
        11,
        16,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
        0);
    }
    return 0LL;
  }
  if ( *((_DWORD *)a1 + 3) )
    return 0LL;
  v6 = *a4;
  v7 = *(_DWORD *)a1;
  if ( *a4 >= *(_DWORD *)a1 )
    goto LABEL_32;
  if ( *((struct tagWND **)a1 + 2 * v6 + 3) == a3 )
    *a4 = ++v6;
  if ( v6 >= v7 )
  {
LABEL_32:
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        (_DWORD)a3,
        18,
        4,
        11,
        18,
        (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
        (char)a1);
    }
    *a4 = 0;
    return 0LL;
  }
  LOBYTE(v7) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      11,
      17,
      (__int64)&WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
      (char)a1,
      *((_QWORD *)a1 + 2 * v6 + 3));
    v6 = *a4;
  }
  return (struct tagWND *)*((_QWORD *)a1 + 2 * v6 + 3);
}
