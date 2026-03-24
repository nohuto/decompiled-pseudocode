/*
 * XREFs of zzzUpdateCursorImage @ 0x1C0080F20
 * Callers:
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C0025108 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C004B658 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C007FC90 (zzzCalcStartCursorHide.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0080450 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0125A74 (-zzzShowCursor@@YAH_N@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C0167380 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     HideAutorunCursor @ 0x1C01D4330 (HideAutorunCursor.c)
 * Callees:
 *     FindTimer @ 0x1C000B5AC (FindTimer.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002A4E0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C002A6C8 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C002A72C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0081390 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     xxxWindowEvent @ 0x1C00814D0 (xxxWindowEvent.c)
 *     GreSetPointer @ 0x1C0081E18 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C0082130 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C010B1D8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     SetRITTimer @ 0x1C0115170 (SetRITTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

void zzzUpdateCursorImage()
{
  __int64 v0; // rdi
  unsigned int v1; // r14d
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  struct tagCURSOR *v7; // r13
  CCursorSizes *v8; // r15
  struct tagCURSOR *AnimatedCursorFrame; // rsi
  int v10; // ebp
  CPushLock *v11; // rbx
  _QWORD *v12; // rcx
  int v13; // r15d
  __int64 v14; // r8
  int v15; // eax
  struct tagCURSOR *v16; // rcx
  signed int v17; // eax
  struct tagCURSOR *v18; // r15
  int v19; // eax
  int v20; // r9d
  int v21; // ebp
  __int64 v22; // rcx
  bool v23; // bl
  unsigned int v24; // ecx
  ULONG TargetInfoAsUlong; // ebx
  int CurrentCursorSize; // eax
  _DWORD *v27; // rax

  v0 = 0LL;
  v1 = 0;
  v2 = 3;
  if ( !gpqForeground
    || ((v3 = *(_QWORD *)(gpqForeground + 104LL)) != 0
      ? (v4 = *(_QWORD *)(v3 + 16))
      : (v4 = *(_QWORD *)(gpqForeground + 88LL)),
        (unsigned __int8)IsSpatialDelegationEnabledForThread(v4)
     || !v4
     || (v5 = *(_QWORD *)(v4 + 424)) == 0
     || (v6 = *(_QWORD *)(v5 + 832)) == 0
     || (*(_DWORD *)(v6 + 100) & 0x100) == 0
     || *(int *)(gpqForeground + 384LL) >= 0) )
  {
    if ( !gpqCursor )
      return;
    v1 = 4;
    if ( *(int *)(gpqCursor + 384LL) >= 0 )
    {
      v1 = 3;
      v0 = *(_QWORD *)(gpqCursor + 376LL);
      if ( (*((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) || gtmridAutorunCursor)
        && (v0 == gasyscur[1] || v0 == *(_QWORD *)(gasyscur[0] + 8840LL) || v0 == *(_QWORD *)(gasyscur[0] + 6080LL)) )
      {
        if ( gtmridAutorunCursor )
        {
          v0 = *(_QWORD *)(gasyscur[0] + 8840LL);
          v1 = 1;
        }
        else
        {
          v0 = *(_QWORD *)(gasyscur[0] + 6080LL);
          v1 = 2;
        }
      }
    }
  }
  v7 = gpcurLogCurrent;
  if ( (struct tagCURSOR *)v0 != gpcurLogCurrent )
  {
    if ( v0 && (*(_DWORD *)(v0 + 80) & 8) != 0 && *(_QWORD *)(v0 + 112) )
    {
      if ( !WPP_MAIN_CB.Dpc.DpcListEntry.Next )
      {
        *(_DWORD *)(v0 + 120) = 0;
        v27 = *(_DWORD **)(v0 + 112);
        gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        WPP_MAIN_CB.Dpc.DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)SetRITTimer(
                                                                           WPP_MAIN_CB.Dpc.DpcListEntry.Next,
                                                                           100 * *v27 / 6u,
                                                                           zzzAnimateCursor,
                                                                           1LL);
      }
    }
    else if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    {
      FindTimer(0LL, (__int64)WPP_MAIN_CB.Dpc.DpcListEntry.Next, 4u, 1, 0LL);
      WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
    }
    EtwTraceWaitCursor(v0, gpcurLogCurrent);
    gpcurLogCurrent = (struct tagCURSOR *)v0;
  }
  if ( !v0 )
    goto LABEL_49;
  v8 = gpCursorSizes;
  AnimatedCursorFrame = 0LL;
  v10 = 0x7FFFFFFF;
  v11 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v11 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v11)(v11) )
      CPushLock::ReleaseLock(v11);
  }
  v12 = (_QWORD *)((char *)v11 + 8);
  v13 = *(_DWORD *)v8;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)v11 + 2) )
  {
    *((_QWORD *)v11 + 2) = 0LL;
    ExReleasePushLockExclusiveEx(v12, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v12, 0LL);
  }
  KeLeaveCriticalRegion();
  v14 = *(_QWORD *)(v0 + 48);
  if ( !v14 )
    goto LABEL_49;
  do
  {
    v15 = *(_DWORD *)(v14 + 76);
    v16 = (struct tagCURSOR *)v14;
    v14 = *(_QWORD *)(v14 + 40);
    v17 = abs32(v15 - v13);
    if ( v17 >= v10 )
    {
      v16 = AnimatedCursorFrame;
      v17 = v10;
    }
    AnimatedCursorFrame = v16;
    v10 = v17;
  }
  while ( v14 );
  if ( !v16 )
LABEL_49:
    AnimatedCursorFrame = (struct tagCURSOR *)v0;
  if ( AnimatedCursorFrame && (*((_DWORD *)AnimatedCursorFrame + 20) & 8) != 0 )
    AnimatedCursorFrame = GetAnimatedCursorFrame(AnimatedCursorFrame, *((_DWORD *)AnimatedCursorFrame + 30));
  v18 = gpcurPhysCurrent;
  if ( gpcurPhysCurrent != AnimatedCursorFrame )
  {
    gpcurPhysCurrent = AnimatedCursorFrame;
    if ( AnimatedCursorFrame )
    {
      v19 = FCursorShadowed((struct _CURSINFO *)(v0 + 80));
      v21 = v20 | 0x10;
      if ( !v19 )
        v21 = v20;
      if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) == 1 )
        v21 |= 0x20u;
      GreSetPointer((struct tagCURSOR *)((char *)AnimatedCursorFrame + 80), v21);
      if ( v7 == (struct tagCURSOR *)v0 )
      {
        if ( *((_DWORD *)AnimatedCursorFrame + 19) == *((_DWORD *)v18 + 19) )
        {
LABEL_35:
          v23 = gpcurPhysCurrent != 0LL;
          if ( (gpcurPhysCurrent != 0LL) != (v18 != 0LL) )
          {
            LOBYTE(v22) = gpcurPhysCurrent != 0LL;
            SendVisibilityChanged(v22);
          }
          v24 = 32780;
          if ( v23 )
          {
            if ( !v18 )
              v24 = 32770;
          }
          else
          {
            v24 = 32771;
          }
          if ( !gdwDeferWinEvent )
            v2 = 1;
          xxxWindowEvent(v24, v2);
          return;
        }
        v1 = 5;
      }
      TargetInfoAsUlong = WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
      if ( gProtocolType )
        TargetInfoAsUlong = 0;
      CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(0LL);
      InputTraceLogging::Cursor::SetCursorImage(
        (__int64)AnimatedCursorFrame,
        (struct tagCURSOR *)v0,
        CurrentCursorSize,
        v1,
        v21,
        TargetInfoAsUlong);
      goto LABEL_35;
    }
    SetPointerInternal(0, v1);
    goto LABEL_35;
  }
}
