/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0247894
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0247594 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0121FB0 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C01AAF70 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0247BAC (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C0247C84 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int64 a2,
        struct tagWND *a3,
        __int64 a4)
{
  int v4; // r15d
  __int64 v5; // rdi
  __int16 v7; // r14
  struct tagWND *v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+34h] [rbp-3Ch]
  __int128 v19; // [rsp+38h] [rbp-38h]
  __int128 v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-18h]

  v4 = *((_DWORD *)this + 14);
  v5 = *((_QWORD *)a3 + 2);
  v21 = 0LL;
  v7 = a2;
  v20 = 0LL;
  if ( (_WORD)a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3, a2, (__int64)a3, a4)
      && (v9 = *(struct tagWND **)(*(_QWORD *)(v5 + 432) + 128LL)) != 0LL )
    {
      v10 = *(_OWORD *)(*((_QWORD *)v9 + 5) + 104LL);
    }
    else
    {
      v9 = a3;
      v10 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    v19 = v10;
    v17 = v10 + (DWORD2(v10) - (int)v10) / 2;
    v18 = DWORD1(v10) + (HIDWORD(v10) - DWORD1(v10)) / 2;
    LogicalToPhysicalDPIPoint(&v17, &v17, *(unsigned int *)(*((_QWORD *)v9 + 5) + 288LL), 0LL);
    if ( v4 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, v7) )
      goto LABEL_9;
    KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v20 + 2) = 67109120;
    WORD3(v20) = v7;
    InputTraceLogging::Mouse::InjectInput();
    UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
    HIDWORD(v20) = v17;
    LODWORD(v21) = v18;
    SynthesizeMouseInput(0LL);
    ProcessMouseEvent(v15);
    EnterCrit(1LL, 0LL);
    if ( v4 == 2 )
LABEL_9:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
