/*
 * XREFs of ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01FC75C
 * Callers:
 *     ?xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z @ 0x1C01FBC54 (-xxxCleanupDdeConv@@YAXPEAUtagWND@@@Z.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01FD7B8 (xxxDDETrackGetMessageHook.c)
 *     xxxDDETrackPostHook @ 0x1C01FDCA4 (xxxDDETrackPostHook.c)
 *     xxxDDETrackWindowDying @ 0x1C01FE184 (xxxDDETrackWindowDying.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     xxxClientFreeDDEHandle @ 0x1C0215308 (xxxClientFreeDDEHandle.c)
 */

void __fastcall xxxFreeListFree(struct tagFREELIST *a1)
{
  struct tagFREELIST *v1; // rbx
  int v2; // edi
  __int64 v3; // r8
  char v4; // dl
  __int64 ThreadWin32Thread; // rax
  struct tagFREELIST *v6; // rcx
  __int128 v7; // [rsp+50h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  if ( a1 )
  {
    v8 = 0LL;
    v1 = a1;
    v7 = 0LL;
    v2 = *(_DWORD *)(gptiCurrent + 488LL) & 1;
    do
    {
      PushW32ThreadLock((__int64)v1, &v7, (__int64)FreeListFree);
      if ( !v2 )
      {
        v4 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v4,
            v3,
            54LL,
            4u,
            0xEu,
            0x36u,
            (__int64)&WPP_de7bff8f30dd3ef9771327ef19992fd5_Traceguids,
            *((_QWORD *)v1 + 1));
        xxxClientFreeDDEHandle(*((_QWORD *)v1 + 1), *((unsigned int *)v1 + 4), v3);
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(ThreadWin32Thread + 16) = v7;
      v6 = v1;
      v1 = *(struct tagFREELIST **)v1;
      Win32FreePool(v6);
    }
    while ( v1 );
  }
}
