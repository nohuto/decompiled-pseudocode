/*
 * XREFs of ?zzzAttachToQueue@tagQ@@QEAAXPEAUtagTHREADINFO@@PEAU1@_N@Z @ 0x1C00A898C
 * Callers:
 *     zzzSetDesktop @ 0x1C005DB40 (zzzSetDesktop.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     xxxHardErrorControl @ 0x1C023CD7C (xxxHardErrorControl.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqq @ 0x1C005BAB8 (WPP_RECORDER_AND_TRACE_SF_qqq.c)
 *     ?CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z @ 0x1C00A8D84 (-CheckTransferState@tagQ@@AEAAKPEAUtagTHREADINFO@@PEQ1@PEAUtagWND@@_N@Z.c)
 *     LockCaptureWindow @ 0x1C00AAA80 (LockCaptureWindow.c)
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00AD9D0 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     LockQCursor @ 0x1C00F3040 (LockQCursor.c)
 *     UnlockCaptureWindow @ 0x1C0102730 (UnlockCaptureWindow.c)
 *     IsInsideMenuLoop @ 0x1C010931C (IsInsideMenuLoop.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01DB90C (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 */

void __fastcall tagQ::zzzAttachToQueue(tagQ *this, struct tagTHREADINFO *a2, struct tagQ *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // bp
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  struct tagQ *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ecx
  struct tagQ *v18; // rax
  struct tagQ *v19; // rbx
  struct tagQMSG *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edx
  int v25; // edx
  __int64 v26; // rdx
  char *v27; // [rsp+60h] [rbp-28h] BYREF
  __int64 v28; // [rsp+68h] [rbp-20h]

  v6 = tagQ::CheckTransferState(this, a2, 120LL) - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v27 = (char *)(v8 + 120);
      v28 = *(_QWORD *)(*(_QWORD *)(v7 + 432) + 120LL);
      HMAssignmentLock(&v27, 0LL);
      HMAssignmentUnlock(*((_QWORD *)a2 + 54) + 120LL);
      v21 = *((_QWORD *)a2 + 54);
      v22 = *(_QWORD *)(v21 + 296);
      if ( v22 )
      {
        if ( *(struct tagTHREADINFO **)(v22 + 16) == a2 && !*((_QWORD *)this + 37) )
        {
          *(_OWORD *)((char *)this + 296) = *(_OWORD *)(v21 + 296);
          *(_OWORD *)((char *)this + 312) = *(_OWORD *)(v21 + 312);
          *(_OWORD *)((char *)this + 328) = *(_OWORD *)(v21 + 328);
          *(_OWORD *)((char *)this + 344) = *(_OWORD *)(v21 + 344);
          *(_OWORD *)((char *)this + 360) = *(_OWORD *)(v21 + 360);
          *(_QWORD *)(*((_QWORD *)a2 + 54) + 296LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState(a2, 0);
  }
  v9 = 1;
  v10 = tagQ::CheckTransferState(this, a2, 112LL) - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      tagQ::LockFocusWnd(v11, *(_QWORD *)(*((_QWORD *)a2 + 54) + 112LL), 0LL);
      tagQ::UnlockFocusWnd(*((tagQ **)a2 + 54));
    }
  }
  else
  {
    CancelInputState(a2, 1u);
  }
  v12 = *((_QWORD *)a2 + 54);
  HMAssignmentUnlock(v12 + 136);
  *(_BYTE *)(v12 + 144) = 0;
  HMAssignmentUnlock((char *)this + 136);
  *((_BYTE *)this + 144) = 0;
  v13 = tagQ::CheckTransferState(this, a2, 104LL) - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      LockCaptureWindow(v14, *(struct tagWND **)(*((_QWORD *)a2 + 54) + 104LL));
      UnlockCaptureWindow(*((_QWORD *)a2 + 54));
      UpdateRawMouseMode(this);
      v25 = *((_DWORD *)this + 97);
      *((_DWORD *)this + 37) = *(_DWORD *)(*((_QWORD *)a2 + 54) + 148LL);
      *((_DWORD *)this + 97) = v25 ^ (v25 ^ *(_DWORD *)(*((_QWORD *)a2 + 54) + 388LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(a2, 2u);
  }
  v15 = tagQ::CheckTransferState(this, a2, 128LL) - 1;
  if ( v15 )
  {
    if ( v15 != 1 )
      goto LABEL_11;
    v27 = (char *)this + 128;
    v23 = *(_QWORD *)(*((_QWORD *)a2 + 54) + 128LL);
    goto LABEL_25;
  }
  v26 = *((_QWORD *)this + 15);
  if ( v26 )
  {
    if ( *((_QWORD *)this + 16) )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a2 + 54) + 128LL);
      if ( v23 )
      {
        if ( *(_QWORD *)(v26 + 88) == v23 )
        {
          v27 = (char *)this + 128;
LABEL_25:
          v28 = v23;
          HMAssignmentLock(&v27, 0LL);
          HMAssignmentUnlock(*((_QWORD *)a2 + 54) + 128LL);
        }
      }
    }
  }
LABEL_11:
  v16 = *((_QWORD *)a2 + 54);
  if ( a2 == *(struct tagTHREADINFO **)(v16 + 64) )
  {
    *((_DWORD *)this + 97) ^= (*((_DWORD *)this + 97) ^ *(_DWORD *)(v16 + 388)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a2) )
      *((_DWORD *)this + 97) = v24 & 0xFFFFFFBF;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x12u,
        0x27u,
        (__int64)&WPP_2f2057662fc63cc3a929ce6289f6f23a_Traceguids,
        *((_QWORD *)a2 + 54),
        gptiCurrent,
        *(_QWORD *)(*((_QWORD *)a2 + 54) + 64LL));
    *(_QWORD *)(*((_QWORD *)a2 + 54) + 64LL) = 0LL;
  }
  if ( gspwndCursor && a2 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    LockQCursor(this, *(_QWORD *)(*((_QWORD *)a2 + 54) + 376LL));
  *((_DWORD *)this + 96) += *((_DWORD *)a2 + 190);
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a2;
  v17 = *(_DWORD *)(*((_QWORD *)a2 + 53) + 880LL);
  if ( *((_DWORD *)this + 106) < v17 )
  {
    *((_DWORD *)this + 107) = 0;
    *((_DWORD *)this + 106) = v17;
  }
  v18 = tagTHREADINFO::AssignQueue(a2, this);
  v19 = v18;
  if ( v18 != a3 )
  {
    v20 = (struct tagQMSG *)*((_QWORD *)v18 + 3);
    *((_QWORD *)v18 + 3) = 0LL;
    *((_QWORD *)v18 + 4) = 0LL;
    *((_DWORD *)v18 + 10) = 0;
    RedistributeInput(v20, v18, 0LL);
    zzzDestroyQueue(v19, a2);
  }
}
