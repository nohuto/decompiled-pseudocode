/*
 * XREFs of xxxMNSetGapState @ 0x1C0249E4C
 * Callers:
 *     xxxInsertMenuItem @ 0x1C007933C (xxxInsertMenuItem.c)
 *     NtUserMNDragLeave @ 0x1C01FE780 (NtUserMNDragLeave.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024A138 (xxxMNUpdateDraggingInfo.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0048164 (MNGetpItemFromIndex.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     xxxInvalidateRect @ 0x1C023533C (xxxInvalidateRect.c)
 *     IsMFMWFPWindow @ 0x1C0236A58 (IsMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C0236BFC (MNGetpItem.c)
 */

_QWORD *__fastcall xxxMNSetGapState(struct tagWND *a1, unsigned int a2, char a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // r8
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rax
  __int64 *v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v30; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v32; // rax
  _QWORD *result; // rax
  _QWORD v34[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v35; // [rsp+30h] [rbp-30h] BYREF
  __int64 v36; // [rsp+40h] [rbp-20h]
  __int128 v37; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v34, 0LL);
  v36 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  if ( (a3 & 3) == 0 )
    goto LABEL_21;
  if ( !IsMFMWFPWindow((__int64)a1) )
    goto LABEL_21;
  v9 = safe_cast_fnid_to_PMENUWND(v8);
  if ( !v9 )
    goto LABEL_21;
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
    goto LABEL_21;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v34, v10);
  if ( !*(_QWORD *)v34[0] )
    goto LABEL_21;
  v11 = MNGetpItem((__int64)v34, a2);
  if ( !v11 )
    goto LABEL_21;
  LODWORD(v37) = *(_DWORD *)(*(_QWORD *)v11 + 64LL);
  DWORD2(v37) = *(_DWORD *)(*(_QWORD *)v11 + 64LL) + *(_DWORD *)(*(_QWORD *)v11 + 72LL);
  DWORD1(v37) = *(_DWORD *)(*(_QWORD *)v11 + 68LL);
  HIDWORD(v37) = *(_DWORD *)(*(_QWORD *)v11 + 68LL) + *(_DWORD *)(*(_QWORD *)v11 + 76LL);
  if ( (a3 & 1) == 0 )
  {
    v16 = MNGetpItem((__int64)v34, a2 + 1);
    v18 = *v17;
    v19 = *(_DWORD *)(*v17 + 4);
    if ( a4 )
    {
      *(_DWORD *)(v18 + 4) = v19 | 0x40000000;
      if ( !v16 )
        goto LABEL_20;
      *(_DWORD *)(*(_QWORD *)v16 + 4LL) |= 0x80000000;
    }
    else
    {
      *(_DWORD *)(v18 + 4) = v19 & 0xBFFFFFFF;
      if ( !v16 )
        goto LABEL_20;
      *(_DWORD *)(*(_QWORD *)v16 + 4LL) &= ~0x80000000;
    }
    HIDWORD(v37) += *(_DWORD *)(gpsi + 2172LL);
    goto LABEL_20;
  }
  v12 = MNGetpItem((__int64)v34, a2 - 1);
  v14 = *v13;
  v15 = *(_DWORD *)(*v13 + 4);
  if ( a4 )
  {
    *(_DWORD *)(v14 + 4) = v15 | 0x80000000;
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)v12 + 4LL) |= 0x40000000u;
LABEL_13:
      DWORD1(v37) -= *(_DWORD *)(gpsi + 2172LL);
    }
  }
  else
  {
    *(_DWORD *)(v14 + 4) = v15 & 0x7FFFFFFF;
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)v12 + 4LL) &= ~0x40000000u;
      goto LABEL_13;
    }
  }
LABEL_20:
  v20 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(
                                 *(_QWORD *)(*(_QWORD *)v34[0] + 40LL),
                                 *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v34[0] + 40LL) + 116LL))
                  + 68LL);
  DWORD1(v37) -= v20;
  HIDWORD(v37) -= v20;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *(_QWORD *)&v35 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v35;
  *((_QWORD *)&v35 + 1) = a1;
  HMLockObject(a1);
  xxxInvalidateRect(a1, (int *)&v37, 1);
  ThreadUnlock1(v22);
LABEL_21:
  CurrentThread = KeGetCurrentThread();
  v24 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v26, v25, v27),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v30),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v32 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v32 )
      v24 = *v32;
  }
  if ( v34[0] != gSmartObjNullRef && !--*(_DWORD *)(v34[0] + 8LL) )
  {
    if ( *(_BYTE *)(v34[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v34[0]);
  }
  result = *(_QWORD **)(v24 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v24 + 1472) = result;
  }
  return result;
}
