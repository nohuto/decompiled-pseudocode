/*
 * XREFs of xxxUserResetDisplayDevice @ 0x1C01293C0
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C010AFDC (xxxUpdatePerUserSystemParameters.c)
 *     PowerOnGdi @ 0x1C0129280 (PowerOnGdi.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C001DD64 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 *     xxxRedrawWindow @ 0x1C0050700 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxUserResetDisplayDevice()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    EtwTracexxxUserResetDisplayDeviceBegin(0xFFFFFFFFLL);
    v5 = 0LL;
    v4 = 0LL;
    gpqCursor = 0LL;
    zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 1);
    SetPointer(1LL);
    ThreadLock(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), &v4);
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 0LL, 0LL, 645);
    ThreadUnlock1(v2, v1, v3);
    return EtwTracexxxUserResetDisplayDeviceEnd(0xFFFFFFFFLL);
  }
  return result;
}
