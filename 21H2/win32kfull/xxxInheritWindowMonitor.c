/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C0075834
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     xxxAddShadow @ 0x1C012DDE0 (xxxAddShadow.c)
 *     NtUserInheritWindowMonitor @ 0x1C014A870 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C02325D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024614C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     UpdateMonitorForWindowAndChildren @ 0x1C006A424 (UpdateMonitorForWindowAndChildren.c)
 *     GetNewMonitor @ 0x1C006F304 (GetNewMonitor.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C006F94C (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1C007563C (xxxNotifyMonitorChanged.c)
 *     _GetTopLevelWindow @ 0x1C0075BF0 (_GetTopLevelWindow.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 *     ScaleDPIRect @ 0x1C00B099C (ScaleDPIRect.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E0A3C (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(ShellWindowManagement *this, ShellWindowManagement *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r15d
  struct tagRECT v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 TopLevelWindow; // rsi
  unsigned __int16 v12; // r14
  ShellWindowManagement *v13; // rdx
  __int64 NewMonitor; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  struct tagRECT v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h]
  struct tagBWL *v27; // [rsp+90h] [rbp+30h] BYREF

  v5 = *((_QWORD *)this + 5);
  v7 = 1;
  v8 = *(struct tagRECT *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v23 = v8;
  v10 = ValidateHmonitorNoRip(v9);
  TopLevelWindow = GetTopLevelWindow(a2);
  if ( v10 )
    v12 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 60LL);
  else
    v12 = 0;
  if ( a3 )
  {
    if ( a2 )
      v7 = InternalSetProp(this, (unsigned __int16)gatomMonitorInheritance, *(_QWORD *)a2, 1LL);
    else
      InternalRemoveProp((__int64)this, (unsigned __int16)gatomMonitorInheritance, 1u);
  }
  v13 = 0LL;
  if ( a2 != this )
    v13 = a2;
  v26 = 0LL;
  if ( !v13
    || TopLevelWindow && (*(_BYTE *)(*(_QWORD *)(TopLevelWindow + 40) + 20LL) & 0x20) != 0
    || (NewMonitor = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v13 + 5) + 256LL))) == 0 )
  {
    NewMonitor = GetNewMonitor(this, 0LL, &v23);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v24 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v24;
    v25 = NewMonitor;
    HMLockObject(NewMonitor);
    v18 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
    if ( (_WORD)v18 != v12 )
      xxxAppAdjustDpiCandidateRect(this, v18, *((_QWORD *)this + 5) + 88LL, &v23);
  }
  else
  {
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v24 = *(_QWORD *)(v20 + 416);
    *(_QWORD *)(v20 + 416) = &v24;
    v25 = NewMonitor;
    HMLockObject(NewMonitor);
    if ( !HasMaximizedState(this) )
    {
      v18 = *((_QWORD *)this + 5);
      if ( (*(_DWORD *)(v18 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)this + 2) + 648LL) & 0x2000000) == 0 )
      {
        if ( v10 )
        {
          v17 = v18 + 88;
          v21 = *(_QWORD *)(v18 + 88);
          v18 = *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL);
          if ( (_WORD)v18 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(this, v18, v17, &v23) )
            ScaleDPIRect(
              (unsigned int)&v23,
              *((_QWORD *)this + 5) + 88,
              *(unsigned __int16 *)(*(_QWORD *)(NewMonitor + 40) + 60LL),
              v12,
              v21,
              v21);
        }
      }
    }
  }
  v27 = 0LL;
  if ( ThreadUnlock1(v16, v18, v17)
    && (unsigned int)UpdateMonitorForWindowAndChildren((struct tagWND **)this, NewMonitor, (__int64 *)&v27, 0) )
  {
    xxxNotifyMonitorChanged(this, &v23, v27, v12);
  }
  return v7;
}
