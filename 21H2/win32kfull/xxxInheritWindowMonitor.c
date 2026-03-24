/*
 * XREFs of xxxInheritWindowMonitor @ 0x1C006C878
 * Callers:
 *     xxxCreateDesktopEx @ 0x1C00101D4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00134E8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C008A238 (xxxSetWindowData.c)
 *     xxxAddShadow @ 0x1C013DECC (xxxAddShadow.c)
 *     NtUserInheritWindowMonitor @ 0x1C0159D80 (NtUserInheritWindowMonitor.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     InternalSetProp @ 0x1C00384A8 (InternalSetProp.c)
 *     ScaleDPIRect @ 0x1C0042960 (ScaleDPIRect.c)
 *     GetNewMonitor @ 0x1C006BF5C (GetNewMonitor.c)
 *     xxxNotifyMonitorChanged @ 0x1C006C654 (xxxNotifyMonitorChanged.c)
 *     BuildHwndList @ 0x1C006CB60 (BuildHwndList.c)
 *     BuildWindowListWithDpiBoundaryInfo @ 0x1C006F994 (BuildWindowListWithDpiBoundaryInfo.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     UpdateWindowMonitor @ 0x1C0070270 (UpdateWindowMonitor.c)
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?FreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C00F1720 (-FreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     UpdateWindowPositionsForDpiBoundaryChange @ 0x1C00F1754 (UpdateWindowPositionsForDpiBoundaryChange.c)
 *     ?HasMaximizedState@@YA_NPEAUtagWND@@@Z @ 0x1C0127C28 (-HasMaximizedState@@YA_NPEAUtagWND@@@Z.c)
 *     xxxAppAdjustDpiCandidateRect @ 0x1C01E6318 (xxxAppAdjustDpiCandidateRect.c)
 */

__int64 __fastcall xxxInheritWindowMonitor(struct tagWND *a1, __int64 *a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v7; // r13d
  struct tagRECT v8; // xmm0
  __int64 v9; // rcx
  __int64 *v10; // rbx
  __int64 i; // r14
  unsigned __int16 v12; // r12
  __int64 *v13; // rdx
  __int64 NewMonitor; // rax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  struct tagBWL *v26; // r15
  __int64 v27; // rdx
  struct tagFREELIST *v28; // rbx
  _QWORD *j; // r14
  struct tagWND *v30; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v43; // rcx
  __int64 CurrentThreadProcess; // rax
  struct tagRECT v45; // [rsp+30h] [rbp-30h] BYREF
  __int64 v46; // [rsp+40h] [rbp-20h] BYREF
  __int64 v47; // [rsp+48h] [rbp-18h]
  __int64 v48; // [rsp+50h] [rbp-10h]

  v5 = *((_QWORD *)a1 + 5);
  v7 = 1;
  v8 = *(struct tagRECT *)(v5 + 88);
  v9 = *(_QWORD *)(v5 + 256);
  v45 = v8;
  v10 = a2;
  for ( i = ValidateHmonitorNoRip(v9); v10; v10 = (__int64 *)v10[13] )
  {
    if ( (unsigned int)IsTopLevelWindow(v10) )
      break;
  }
  if ( i )
    v12 = *(_WORD *)(*(_QWORD *)(i + 40) + 64LL);
  else
    v12 = 0;
  if ( a3 )
  {
    v38 = (unsigned __int16)gatomMonitorInheritance;
    if ( a2 )
    {
      v7 = InternalSetProp((__int64)a1, (unsigned __int16)gatomMonitorInheritance, *a2, 1u);
    }
    else
    {
      v39 = *((_QWORD *)a1 + 18);
      if ( gatomMonitorInheritance == word_1C033AF44 )
        *(_QWORD *)(*((_QWORD *)a1 + 5) + 312LL) = 0LL;
      RealInternalRemoveProp(v39, v38, 1LL);
    }
  }
  v13 = 0LL;
  if ( a2 != (__int64 *)a1 )
    v13 = a2;
  v48 = 0LL;
  if ( !v13
    || v10 && (*(_BYTE *)(v10[5] + 20) & 0x20) != 0
    || (v32 = ValidateHmonitorNoRip(*(_QWORD *)(v13[5] + 256))) == 0 )
  {
    NewMonitor = GetNewMonitor(a1, 0LL, (__int64)&v45);
    CurrentThread = KeGetCurrentThread();
    v16 = NewMonitor;
    v17 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v18)
      || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v43),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v17 = *ThreadWin32Thread;
    }
    v46 = *(_QWORD *)(v17 + 416);
    *(_QWORD *)(v17 + 416) = &v46;
    v47 = v16;
    HMLockObject(v16);
    v24 = *(unsigned __int16 *)(*(_QWORD *)(v16 + 40) + 64LL);
    if ( (_WORD)v24 != v12 )
      xxxAppAdjustDpiCandidateRect(a1, v24, *((_QWORD *)a1 + 5) + 88LL, &v45);
  }
  else
  {
    v33 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v46 = *(_QWORD *)(v33 + 416);
    *(_QWORD *)(v33 + 416) = &v46;
    v47 = v32;
    HMLockObject(v32);
    if ( !HasMaximizedState(a1) )
    {
      v34 = *((_QWORD *)a1 + 5);
      if ( (*(_DWORD *)(v34 + 288) & 0xF) == 2 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 648LL) & 0x2000000) == 0 )
      {
        if ( i )
        {
          v35 = v34 + 88;
          v36 = *(_QWORD *)(v34 + 88);
          v37 = *(unsigned __int16 *)(*(_QWORD *)(v32 + 40) + 64LL);
          if ( (_WORD)v37 != v12 && !(unsigned int)xxxAppAdjustDpiCandidateRect(a1, v37, v35, &v45) )
            ScaleDPIRect(
              &v45,
              (__m128i *)(*((_QWORD *)a1 + 5) + 88LL),
              *(_WORD *)(*(_QWORD *)(v32 + 40) + 64LL),
              v12,
              v36,
              v36);
        }
      }
    }
  }
  if ( ThreadUnlock1(v23) )
  {
    v25 = BuildHwndList(a1);
    v26 = (struct tagBWL *)v25;
    if ( v25 )
    {
      v28 = (struct tagFREELIST *)BuildWindowListWithDpiBoundaryInfo(a1, *((_QWORD *)a1 + 13), v25, 0LL);
      for ( j = (_QWORD *)((char *)v26 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v27) = 1;
        v30 = (struct tagWND *)HMValidateHandleNoSecure(*j, v27);
        if ( v30 )
          UpdateWindowMonitor(v30);
      }
      if ( v28 )
      {
        UpdateWindowPositionsForDpiBoundaryChange(v28);
        FreeListFree(v28);
      }
      xxxNotifyMonitorChanged(a1, &v45, v26, v12);
    }
  }
  return v7;
}
