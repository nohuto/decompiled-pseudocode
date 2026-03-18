/*
 * XREFs of zzzDestroyQueue @ 0x1C0038C50
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003911C (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C00C64AC (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsFreeMessageListSupported @ 0x1C0019A1C (IsFreeMessageListSupported.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0019A48 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C003A804 (ApiSetEditionUpdateRawMouseMode.c)
 *     ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1C003C7B0 (-UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C007FBC4 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z @ 0x1C008AF34 (-FreeToPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX0@Z.c)
 *     RecalculateQueueInfo @ 0x1C008F670 (RecalculateQueueInfo.c)
 *     IsClearDelegationCaptureSupported @ 0x1C0097DBC (IsClearDelegationCaptureSupported.c)
 *     ?RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z @ 0x1C009A268 (-RemoveThreadFromQSharingLists@tagTHREADINFO@@QEAA_NPEAUtagQ@@@Z.c)
 *     ApiSetEditionSystemGenerateMove @ 0x1C00B4EDC (ApiSetEditionSystemGenerateMove.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall zzzDestroyQueue(struct tagQ *a1, tagTHREADINFO *this)
{
  int v2; // ebp
  int v5; // edx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rcx
  tagTHREADINFO *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r11
  int v14; // r10d
  __int64 v15; // r14
  int v16; // ecx

  v2 = 0;
  if ( this )
    tagTHREADINFO::RemoveThreadFromQSharingLists(this, a1);
  if ( tagQ::IsAnyThreadAttached(a1) )
  {
    v7 = (tagTHREADINFO *)*((_QWORD *)a1 + 8);
    if ( v7 == this )
    {
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          (_DWORD)v7,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          19,
          12,
          (__int64)&WPP_ed79ecbb4a1f3750d196ff03f8980747_Traceguids,
          (char)a1,
          (char)gptiCurrent,
          *((_QWORD *)a1 + 8));
      }
      *((_QWORD *)a1 + 8) = 0LL;
    }
    if ( this && (*((tagTHREADINFO **)a1 + 12) == this || *((tagTHREADINFO **)a1 + 11) == this) )
    {
      v9 = *((_QWORD *)a1 + 59);
      v10 = 0LL;
      v11 = 0LL;
      v12 = 0LL;
      while ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 488) & 1) == 0 )
        {
          v13 = *((_QWORD *)this + 56);
          v10 = v9;
          v14 = *(_DWORD *)(v13 + 8);
          if ( (v14 & 6) != 0 && (*(_BYTE *)(*(_QWORD *)(v9 + 448) + 16LL) & 6) != 0 )
            v11 = v9;
          if ( (v14 & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v9 + 448) + 16LL) & 1) != 0 )
            v12 = v9;
          if ( (*(_DWORD *)(v13 + 16) & 0x400) != 0 && (*(_DWORD *)(*(_QWORD *)(v9 + 448) + 16LL) & 0x400) != 0 )
            v12 = v9;
        }
        v9 = *(_QWORD *)(v9 + 1488);
      }
      v15 = v10;
      if ( v11 )
        v15 = v11;
      if ( v12 )
        v10 = v12;
      if ( qword_1C029BE50 && (int)qword_1C029BE50() >= 0 )
      {
        if ( v15 && qword_1C029BE58 )
          qword_1C029BE58(v15, *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) & 6);
        if ( v10 )
        {
          if ( qword_1C029BE58 )
          {
            qword_1C029BE58(v10, *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) & 1);
            if ( qword_1C029BE58 )
              qword_1C029BE58(v10, *(_DWORD *)(*((_QWORD *)this + 56) + 8LL) & 0x400);
          }
        }
      }
      if ( *((tagTHREADINFO **)a1 + 12) == this )
        *((_QWORD *)a1 + 12) = v10;
      if ( *((tagTHREADINFO **)a1 + 11) == this )
      {
        *((_QWORD *)a1 + 11) = v15;
        ApiSetEditionUpdateRawMouseMode(a1, v9);
      }
    }
    RecalculateQueueInfo();
  }
  else
  {
    if ( (struct tagQ *)gpqForeground == a1 )
    {
      v8 = *((_QWORD *)a1 + 14);
      if ( v8 )
      {
        v16 = 49;
        if ( gdwDeferWinEvent )
          v16 = 51;
        if ( qword_1C029BE68 )
          qword_1C029BE68(2147483651LL, v8, 0LL, 6LL, v16);
      }
    }
    if ( qword_1C029BE70 && (int)qword_1C029BE70() >= 0 && qword_1C029BE78 )
      qword_1C029BE78(a1);
    tagQ::UnlockFocusWnd(a1);
    HMAssignmentUnlockWorker((char *)a1 + 120);
    HMAssignmentUnlockWorker((char *)a1 + 128);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 && qword_1C029BE48 )
      qword_1C029BE48(a1);
    HMAssignmentUnlockWorker((char *)a1 + 296);
    if ( qword_1C029BE38 )
      qword_1C029BE38(a1, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 && qword_1C029BE88 )
      qword_1C029BE88((char *)a1 + 24);
    if ( qword_1C029BE90 && (int)qword_1C029BE90() >= 0 && (struct tagQ *)gpqForeground == a1 && qword_1C029BE98 )
      qword_1C029BE98(0LL);
    if ( (struct tagQ *)gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == a1 )
    {
      gpqCursor = 0LL;
      v2 = 1;
    }
    if ( *((_DWORD *)a1 + 98) )
      *((_DWORD *)a1 + 97) |= 0x4000000u;
    else
      NSInstrumentation::CLeakTrackingAllocator::FreeToPagedLookasideList(v6, QLookaside, a1);
    if ( v2 )
      ApiSetEditionSystemGenerateMove(2LL);
  }
}
