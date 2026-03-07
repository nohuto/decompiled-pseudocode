void zzzUpdateCursorImage()
{
  int v0; // r14d
  __int64 v1; // rbp
  unsigned int v2; // r12d
  int v3; // r13d
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct tagCURSOR *v8; // r15
  CCursorSizes *v9; // rsi
  __int64 v10; // rdi
  char *v11; // rbx
  __int64 v12; // r8
  int v13; // esi
  int v14; // r13d
  signed int v15; // eax
  __int64 v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  struct tagCURSOR *v19; // rdi
  bool v20; // al
  unsigned int v21; // esi
  bool v22; // cl
  CCursorSizes *v23; // rcx
  bool v24; // bl
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  int CurrentCursorSize; // eax
  __int64 v28; // r8
  int v29; // edx
  int v30; // r10d
  int v31; // r11d
  unsigned int v32; // r9d
  int v33; // [rsp+60h] [rbp-58h] BYREF
  BOOL v34; // [rsp+64h] [rbp-54h] BYREF
  __int64 v35; // [rsp+68h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+D8h] [rbp+20h] BYREF

  v0 = 0;
  v1 = 0LL;
  v2 = 0;
  v3 = 3;
  if ( !gpqForeground
    || ((v4 = *(_QWORD *)(gpqForeground + 112LL)) != 0
      ? (v5 = *(_QWORD *)(v4 + 16))
      : (v5 = *(_QWORD *)(gpqForeground + 96LL)),
        (unsigned __int8)IsSpatialDelegationEnabledForThread(v5)
     || !v5
     || (v6 = *(_QWORD *)(v5 + 424)) == 0
     || !*(_QWORD *)(v6 + 824)
     || (*(_DWORD *)(*(_QWORD *)(v6 + 824) + 100LL) & 0x100) == 0
     || (v7 = gpqForeground, *(int *)(gpqForeground + 392LL) >= 0)) )
  {
    v7 = gpqCursor;
    if ( !gpqCursor )
      return;
    v2 = 4;
    if ( *(int *)(gpqCursor + 392LL) >= 0 )
    {
      v2 = 3;
      v1 = *(_QWORD *)(gpqCursor + 384LL);
      if ( (HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) || gtmridAutorunCursor)
        && (v1 == gasyscur[1] || v1 == *(_QWORD *)(gasyscur[0] + 8840LL) || v1 == *(_QWORD *)(gasyscur[0] + 6080LL)) )
      {
        if ( gtmridAutorunCursor )
        {
          v1 = *(_QWORD *)(gasyscur[0] + 8840LL);
          v2 = 1;
        }
        else if ( !(unsigned __int8)isChildPartition() )
        {
          v2 = 2;
          v1 = *(_QWORD *)(gasyscur[0] + 6080LL);
        }
      }
    }
  }
  v8 = gpcurLogCurrent;
  if ( (struct tagCURSOR *)v1 != gpcurLogCurrent )
  {
    if ( v1 && (*(_DWORD *)(v1 + 80) & 8) != 0 && *(_QWORD *)(v1 + 112) )
    {
      if ( !WPP_MAIN_CB.DeviceQueue.Lock )
      {
        *(_DWORD *)(v1 + 120) = 0;
        v26 = *(_DWORD **)(v1 + 112);
        gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        WPP_MAIN_CB.DeviceQueue.Lock = SetRITTimer(WPP_MAIN_CB.DeviceQueue.Lock, 100 * *v26 / 6u, zzzAnimateCursor, 1LL);
      }
    }
    else if ( WPP_MAIN_CB.DeviceQueue.Lock )
    {
      FindTimer(0, WPP_MAIN_CB.DeviceQueue.Lock, 4, 1, 0LL);
      WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    }
    EtwTraceWaitCursor(v1, gpcurLogCurrent);
    gpcurLogCurrent = (struct tagCURSOR *)v1;
  }
  if ( v1 )
  {
    v9 = gpCursorSizes;
    v10 = 0LL;
    v11 = (char *)gpCursorSizes + 64;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v11, 0LL);
    v13 = *(_DWORD *)v9;
    if ( KeGetCurrentThread() == *((struct _KTHREAD **)v11 + 1) )
    {
      *((_QWORD *)v11 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v11, 0LL);
    }
    else
    {
      ExReleasePushLockSharedEx(v11, 0LL, v12);
    }
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)(v1 + 48);
    if ( v7 )
    {
      v14 = 0x7FFFFFFF;
      do
      {
        v15 = abs32(*(_DWORD *)(v7 + 76) - v13);
        if ( v15 < v14 )
        {
          v10 = v7;
          v14 = v15;
        }
        v7 = *(_QWORD *)(v7 + 40);
      }
      while ( v7 );
      v3 = 3;
      if ( v10 )
      {
        v16 = v10;
        goto LABEL_23;
      }
    }
  }
  v10 = v1;
  v16 = v1;
  if ( v1 )
  {
LABEL_23:
    v7 = *(unsigned int *)(v10 + 80);
    if ( (v7 & 8) == 0 )
      goto LABEL_33;
    v17 = *(_DWORD *)(v10 + 120);
    if ( (v7 & 0x40) != 0 )
    {
      LODWORD(v36) = 0x20000;
      v28 = 51LL;
    }
    else
    {
      if ( !*(_QWORD *)(v10 + 104) )
        goto LABEL_99;
      if ( !*(_QWORD *)(v10 + 96) )
        goto LABEL_99;
      if ( v17 < 0 )
        goto LABEL_99;
      if ( v17 >= *(_DWORD *)(v10 + 92) )
        goto LABEL_99;
      _mm_lfence();
      v7 = *(int *)(v10 + 120);
      v18 = *(int *)(*(_QWORD *)(v10 + 104) + 4 * v7);
      if ( (int)v18 < 0 || (int)v18 >= *(_DWORD *)(v10 + 88) )
        goto LABEL_99;
      _mm_lfence();
      v7 = *(_QWORD *)(8 * v18 + *(_QWORD *)(v10 + 96));
      if ( (*(_DWORD *)(v7 + 80) & 8) == 0 )
      {
        _mm_lfence();
        v16 = *(_QWORD *)(8 * v18 + *(_QWORD *)(v10 + 96));
        goto LABEL_33;
      }
      LODWORD(v36) = 0x20000;
      v28 = 75LL;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", (unsigned int)v36, v28);
LABEL_99:
    v16 = 0LL;
  }
LABEL_33:
  v19 = gpcurPhysCurrent;
  if ( gpcurPhysCurrent == (struct tagCURSOR *)v16 )
    return;
  gpcurPhysCurrent = (struct tagCURSOR *)v16;
  if ( !v16 )
  {
    SetPointerInternal(0LL, v2);
    goto LABEL_55;
  }
  v20 = 0;
  if ( !gbDisableAlpha )
  {
    v7 = (unsigned int)gpdwCPUserPreferencesMask & 0x80002000;
    LOBYTE(v7) = (_DWORD)v7 == -2147475456;
    if ( ((unsigned __int8)v7 & ((*(_DWORD *)(v1 + 80) & 0x200) != 0)) != 0 )
      v20 = 1;
  }
  v21 = *(_DWORD *)(v1 + 80) & 8 | 0x10;
  if ( !v20 )
    v21 = *(_DWORD *)(v1 + 80) & 8;
  if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) == 1 )
    v21 |= 0x20u;
  if ( gProtocolType )
    LODWORD(v36) = 0;
  else
    LODWORD(v36) = *(_DWORD *)(SGDGetUserSessionState(v7) + 15936);
  v22 = (v21 & 0x20) != 0;
  if ( v22 != byte_1C0362198 )
  {
    byte_1C0362198 = (v21 & 0x20) != 0;
    InputTraceLogging::Cursor::ChangeForceSoftwareCursorFlag(v22);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&qword_1C0362190, 0LL);
  gCursorApiRouter = v21;
  LODWORD(v37) = dword_1C0362188;
  if ( v16 == -80 )
  {
    byte_1C0362177 = 1;
  }
  else
  {
    byte_1C0362177 = 0;
    byte_1C0362174 = !gbDisableAlpha
                  && ((unsigned int)gpdwCPUserPreferencesMask & 0x80002000) == 0x80002000
                  && (*(_DWORD *)(v16 + 80) & 0x200) != 0;
    byte_1C0362175 = (_DWORD)v36 != 0;
  }
  dword_1C0362188 = 2;
  ExReleasePushLockExclusiveEx(&qword_1C0362190, 0LL);
  KeLeaveCriticalRegion();
  if ( (_DWORD)v37 == 1 )
  {
    CursorApiRouter::DwmSetPointer(0LL, 0);
    GreMovePointer(qword_1C0362178, dword_1C0362180, dword_1C0362184, 1);
    GreSetPointer(v16 + 80, v21, (unsigned int)v36, 50LL);
  }
  else
  {
    GreSetPointer(v16 + 80, v21, (unsigned int)v36, 50LL);
    if ( (_DWORD)v37 == 2 )
      goto LABEL_53;
  }
  LOBYTE(v36) = byte_1C0362174;
  LODWORD(v37) = gDWMCapable;
  if ( (unsigned int)dword_1C035C080 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 8LL) )
  {
    LODWORD(v39) = (unsigned __int8)v36;
    LODWORD(v38) = v31;
    v34 = v37 != 0;
    v36 = (__int64)"ShapeChange";
    v33 = v30;
    v37 = InputTraceLogging::Cursor::CursorApiToString((unsigned int)(v29 - 6));
    v35 = InputTraceLogging::Cursor::CursorApiToString(v32);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_1C035C080,
      (int)&dword_1C031ED39,
      (__int64)&v35,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v39,
      (__int64)&v38);
  }
LABEL_53:
  if ( v8 != (struct tagCURSOR *)v1 )
  {
LABEL_78:
    if ( !gProtocolType )
      v0 = *(_DWORD *)(SGDGetUserSessionState(v23) + 15936);
    CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v23);
    InputTraceLogging::Cursor::SetCursorImage(v16, (struct tagCURSOR *)v1, CurrentCursorSize, v2, v21, v0);
    goto LABEL_55;
  }
  if ( *(_DWORD *)(v16 + 76) != *((_DWORD *)v19 + 19) )
  {
    v2 = 5;
    goto LABEL_78;
  }
LABEL_55:
  v24 = gpcurPhysCurrent != 0LL;
  if ( (gpcurPhysCurrent != 0LL) != (v19 != 0LL) )
    SendVisibilityChanged(v24);
  v25 = 32780;
  if ( v24 )
  {
    if ( !v19 )
      v25 = 32770;
  }
  else
  {
    v25 = 32771;
  }
  if ( !gdwDeferWinEvent )
    v3 = 1;
  xxxWindowEvent(v25, v3);
}
