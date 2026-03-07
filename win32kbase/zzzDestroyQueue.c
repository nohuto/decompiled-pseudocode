void __fastcall zzzDestroyQueue(tagQ *this, tagTHREADINFO *a2)
{
  int v2; // esi
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r11
  __int64 v10; // r8
  __int64 v11; // r10
  int v12; // r9d
  __int64 v13; // r14
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  v2 = 0;
  if ( a2 )
    tagTHREADINFO::RemoveThreadFromQSharingLists(a2, this);
  if ( tagQ::IsAnyThreadAttached(this) )
  {
    if ( *((tagTHREADINFO **)this + 9) == a2 )
    {
      LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqq(
          WPP_GLOBAL_Control->AttachedDevice,
          v5,
          v6,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          19,
          11,
          (__int64)&WPP_55b8abaf247d38ec9a9d8de03bae7632_Traceguids,
          (char)this,
          (char)gptiCurrent,
          *((_QWORD *)this + 9));
      }
      *((_QWORD *)this + 9) = 0LL;
    }
    if ( a2 && (*((tagTHREADINFO **)this + 13) == a2 || *((tagTHREADINFO **)this + 12) == a2) )
    {
      v7 = *((_QWORD *)this + 60);
      v8 = 0LL;
      v9 = 0LL;
      v10 = 0LL;
      while ( v7 )
      {
        if ( (*(_DWORD *)(v7 + 488) & 1) == 0 )
        {
          v11 = *((_QWORD *)a2 + 56);
          v8 = v7;
          v12 = *(_DWORD *)(v11 + 8);
          if ( (v12 & 6) != 0 && (*(_BYTE *)(*(_QWORD *)(v7 + 448) + 16LL) & 6) != 0 )
            v9 = v7;
          if ( (v12 & 1) != 0 && (*(_BYTE *)(*(_QWORD *)(v7 + 448) + 16LL) & 1) != 0 )
            v10 = v7;
          if ( (*(_DWORD *)(v11 + 16) & 0x400) != 0 && (*(_DWORD *)(*(_QWORD *)(v7 + 448) + 16LL) & 0x400) != 0 )
            v10 = v7;
        }
        v7 = *(_QWORD *)(v7 + 1528);
      }
      v13 = v8;
      if ( v9 )
        v13 = v9;
      if ( v10 )
        v8 = v10;
      if ( qword_1C02D66F8 && (int)qword_1C02D66F8() >= 0 )
      {
        if ( v13 )
          SetWakeBit(v13, *(_DWORD *)(*((_QWORD *)a2 + 56) + 8LL) & 6);
        if ( v8 )
        {
          SetWakeBit(v8, *(_DWORD *)(*((_QWORD *)a2 + 56) + 8LL) & 1);
          SetWakeBit(v8, *(_DWORD *)(*((_QWORD *)a2 + 56) + 8LL) & 0x400);
        }
      }
      if ( *((tagTHREADINFO **)this + 13) == a2 )
        *((_QWORD *)this + 13) = v8;
      if ( *((tagTHREADINFO **)this + 12) == a2 )
      {
        *((_QWORD *)this + 12) = v13;
        ApiSetEditionUpdateRawMouseMode((__int64)this);
      }
    }
    RecalculateQueueInfo();
  }
  else
  {
    if ( (tagQ *)gpqForeground == this )
    {
      v14 = *((_QWORD *)this + 15);
      if ( v14 )
      {
        v15 = 49;
        if ( gdwDeferWinEvent )
          v15 = 51;
        xxxWindowEvent(2147483651LL, v14, 0LL, 6LL, v15);
      }
    }
    if ( qword_1C02D6718 && (int)qword_1C02D6718() >= 0 && qword_1C02D6720 )
      qword_1C02D6720(this);
    tagQ::UnlockFocusWnd(this);
    tagQ::SetActiveWindow(this, 0LL);
    HMAssignmentUnlock((__int64 *)this + 17);
    if ( (int)IsClearDelegationCaptureSupported() >= 0 )
      ClearDelegationCapture();
    HMAssignmentUnlock((__int64 *)this + 38);
    LockQCursor((__int64)this, 0LL);
    if ( (int)IsFreeMessageListSupported() >= 0 )
      FreeMessageList((__int64)this + 24);
    if ( qword_1C02D6738 && (int)qword_1C02D6738() >= 0 && (tagQ *)gpqForeground == this && qword_1C02D6740 )
      qword_1C02D6740(0LL);
    if ( (tagQ *)gpqForegroundPrev == this )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == this )
    {
      gpqCursor = 0LL;
      v2 = 1;
    }
    if ( *((_DWORD *)this + 100) )
      *((_DWORD *)this + 99) |= 0x4000000u;
    else
      FreeQueue(this, v16, v17, v18);
    if ( v2 )
      ApiSetEditionSystemGenerateMove(2u);
  }
}
