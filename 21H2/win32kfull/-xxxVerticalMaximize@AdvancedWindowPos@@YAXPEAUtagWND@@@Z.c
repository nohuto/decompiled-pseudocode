/*
 * XREFs of ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1C024BDB4
 * Callers:
 *     ?xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z @ 0x1C020BB18 (-xxxApplyArrangeAction@@YAXPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@@Z.c)
 * Callees:
 *     GetMonitorRectForWindow @ 0x1C0063604 (GetMonitorRectForWindow.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x1C00B2264 (_anonymous_namespace_--xxxNormalizeRect.c)
 *     ?ReduceRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B2A40 (-ReduceRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     WPP_RECORDER_AND_TRACE_SF_dddd @ 0x1C024BFF0 (WPP_RECORDER_AND_TRACE_SF_dddd.c)
 */

void __fastcall AdvancedWindowPos::xxxVerticalMaximize(AdvancedWindowPos *this, struct tagWND *a2)
{
  __int64 v2; // rax
  int v4; // edx
  __int64 v5; // rdi
  int v6; // r8d
  __int128 v7; // xmm0
  __int64 v8; // rax
  struct tagRECT v9; // xmm0
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _DWORD v16[4]; // [rsp+60h] [rbp-9h] BYREF
  __int128 v17; // [rsp+70h] [rbp+7h] BYREF
  __int64 v18; // [rsp+80h] [rbp+17h]
  _BYTE v19[16]; // [rsp+88h] [rbp+1Fh] BYREF
  struct tagRECT v20; // [rsp+98h] [rbp+2Fh] BYREF
  __int128 v21; // [rsp+A8h] [rbp+3Fh] BYREF

  v2 = *((_QWORD *)this + 5);
  v20 = *(struct tagRECT *)(v2 + 88);
  v5 = MonitorFromRect(&v20, 0, *(_DWORD *)(v2 + 288));
  if ( v5 )
  {
    v17 = 0LL;
    v18 = 0LL;
    ThreadLock(v5, (__int64 *)&v17);
    v7 = *(_OWORD *)GetMonitorRectForWindow((__int64)v19, v5, this);
    v8 = *(_QWORD *)(v5 + 40);
    v21 = v7;
    v20 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect(
                               (__int64)v16,
                               this,
                               &v20,
                               v5,
                               &v21,
                               *(_WORD *)(v8 + 60),
                               20);
    v9 = *(struct tagRECT *)WindowMargins::ReduceRect(v16, this, &v20);
    v10 = *((_QWORD *)this + 5);
    v20 = v9;
    LogicalToPhysicalDPIRect(&v20, &v20, *(unsigned int *)(v10 + 288), 0LL);
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v11, v12, 52, 4);
    }
    WindowArrangement::xxxSetSnapArrangementPos((__int64)this, &v20, 0, 0);
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v4, v6, 51, 3);
    }
  }
}
