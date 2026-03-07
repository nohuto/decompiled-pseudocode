void __fastcall tagQ::zzzAttachToQueue(tagQ *this, struct tagTHREADINFO *a2, struct tagQ *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  tagQ *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  char v11; // bp
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  struct tagQ *v16; // rcx
  int v17; // edx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edx
  unsigned int v23; // ecx
  struct tagQ *v24; // rax
  struct tagQ *v25; // rbx
  struct tagQMSG *v26; // rcx
  _QWORD v27[2]; // [rsp+60h] [rbp-28h] BYREF

  v6 = tagQ::CheckTransferState(this, a2, 128LL) - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      tagQ::SetActiveWindow(v8, *(struct tagWND **)(*(_QWORD *)(v7 + 432) + 128LL));
      tagQ::SetActiveWindow(*((tagQ **)a2 + 54), 0LL);
      v9 = *((_QWORD *)a2 + 54);
      v10 = *(_QWORD *)(v9 + 304);
      if ( v10 )
      {
        if ( *(struct tagTHREADINFO **)(v10 + 16) == a2 && !*((_QWORD *)this + 38) )
        {
          *((_OWORD *)this + 19) = *(_OWORD *)(v9 + 304);
          *((_OWORD *)this + 20) = *(_OWORD *)(v9 + 320);
          *((_OWORD *)this + 21) = *(_OWORD *)(v9 + 336);
          *((_OWORD *)this + 22) = *(_OWORD *)(v9 + 352);
          *((_OWORD *)this + 23) = *(_OWORD *)(v9 + 368);
          *(_QWORD *)(*((_QWORD *)a2 + 54) + 304LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState(a2, 0);
  }
  v11 = 1;
  v12 = tagQ::CheckTransferState(this, a2, 120LL) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      tagQ::LockFocusWnd(v13, *(_QWORD *)(*((_QWORD *)a2 + 54) + 120LL), 0LL);
      tagQ::UnlockFocusWnd(*((tagQ **)a2 + 54));
    }
  }
  else
  {
    CancelInputState(a2, 1u);
  }
  v14 = *((_QWORD *)a2 + 54);
  HMAssignmentUnlock(v14 + 144);
  *(_BYTE *)(v14 + 152) = 0;
  HMAssignmentUnlock((char *)this + 144);
  *((_BYTE *)this + 152) = 0;
  v15 = tagQ::CheckTransferState(this, a2, 112LL) - 1;
  if ( v15 )
  {
    if ( v15 == 1 )
    {
      LockCaptureWindow(v16, *(struct tagWND **)(*((_QWORD *)a2 + 54) + 112LL));
      UnlockCaptureWindow(*((_QWORD *)a2 + 54));
      UpdateRawMouseMode(this);
      v17 = *((_DWORD *)this + 99);
      *((_DWORD *)this + 39) = *(_DWORD *)(*((_QWORD *)a2 + 54) + 156LL);
      *((_DWORD *)this + 99) = v17 ^ (*(_DWORD *)(*((_QWORD *)a2 + 54) + 396LL) ^ v17) & 0x100000;
    }
  }
  else
  {
    CancelInputState(a2, 2u);
  }
  v18 = tagQ::CheckTransferState(this, a2, 136LL) - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_25;
    v27[0] = (char *)this + 136;
    v19 = *(_QWORD *)(*((_QWORD *)a2 + 54) + 136LL);
    goto LABEL_24;
  }
  v20 = *((_QWORD *)this + 16);
  if ( v20 )
  {
    if ( *((_QWORD *)this + 17) )
    {
      v19 = *(_QWORD *)(*((_QWORD *)a2 + 54) + 136LL);
      if ( v19 )
      {
        if ( *(_QWORD *)(v20 + 88) == v19 )
        {
          v27[0] = (char *)this + 136;
LABEL_24:
          v27[1] = v19;
          HMAssignmentLock(v27, 0LL);
          HMAssignmentUnlock(*((_QWORD *)a2 + 54) + 136LL);
        }
      }
    }
  }
LABEL_25:
  v21 = *((_QWORD *)a2 + 54);
  if ( a2 == *(struct tagTHREADINFO **)(v21 + 72) )
  {
    *((_DWORD *)this + 99) ^= (*(_DWORD *)(v21 + 396) ^ *((_DWORD *)this + 99)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a2) )
      *((_DWORD *)this + 99) = v22 & 0xFFFFFFBF;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v11 = 0;
    }
    if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v11,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        4u,
        0x12u,
        0x2Cu,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
        *((_QWORD *)a2 + 54),
        gptiCurrent,
        *(_QWORD *)(*((_QWORD *)a2 + 54) + 72LL));
    *(_QWORD *)(*((_QWORD *)a2 + 54) + 72LL) = 0LL;
  }
  if ( gspwndCursor && a2 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    LockQCursor(this, *(_QWORD *)(*((_QWORD *)a2 + 54) + 384LL));
  *((_DWORD *)this + 98) += *((_DWORD *)a2 + 190);
  *((_QWORD *)this + 12) = a2;
  *((_QWORD *)this + 13) = a2;
  v23 = *(_DWORD *)(*((_QWORD *)a2 + 53) + 864LL);
  if ( *((_DWORD *)this + 108) < v23 )
  {
    *((_DWORD *)this + 109) = 0;
    *((_DWORD *)this + 108) = v23;
  }
  v24 = tagTHREADINFO::AssignQueue(a2, this);
  v25 = v24;
  if ( v24 != a3 )
  {
    v26 = (struct tagQMSG *)*((_QWORD *)v24 + 3);
    *((_QWORD *)v24 + 3) = 0LL;
    *((_QWORD *)v24 + 4) = 0LL;
    *((_QWORD *)v24 + 7) = 0LL;
    *((_DWORD *)v24 + 10) = 0;
    RedistributeInput(v26, v24, 0LL);
    zzzDestroyQueue(v25, a2);
  }
}
