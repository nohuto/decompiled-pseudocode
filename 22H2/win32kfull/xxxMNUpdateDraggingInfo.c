/*
 * XREFs of xxxMNUpdateDraggingInfo @ 0x1C0249B78
 * Callers:
 *     xxxMNMouseMove @ 0x1C023913C (xxxMNMouseMove.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C00480C4 (MNGetpItemFromIndex.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IsMFMWFPWindow @ 0x1C0236498 (IsMFMWFPWindow.c)
 *     LockMFMWFPWindow @ 0x1C02364C4 (LockMFMWFPWindow.c)
 *     MNGetpItem @ 0x1C023663C (MNGetpItem.c)
 *     xxxMNSetGapState @ 0x1C024988C (xxxMNSetGapState.c)
 */

_QWORD *__fastcall xxxMNUpdateDraggingInfo(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v9; // r12
  unsigned int v10; // r13d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // r9
  __int64 v20; // rdx
  int v21; // r9d
  int v22; // r8d
  int v23; // r8d
  int v24; // r10d
  unsigned int v25; // eax
  BOOL v26; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v35; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v37; // rax
  _QWORD *result; // rax
  _QWORD v39[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v40[4]; // [rsp+30h] [rbp-20h] BYREF

  v40[2] = 0LL;
  v3 = (__int64 *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 80);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v40[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v40;
  v40[1] = v4;
  if ( v4 )
    HMLockObject(v4);
  v9 = (struct tagWND *)*v3;
  v10 = *(_DWORD *)(a1 + 88);
  v11 = *(_DWORD *)(a1 + 92) & 3;
  LockMFMWFPWindow(v3, a2);
  v12 = *v3;
  *(_DWORD *)(a1 + 88) = a3;
  if ( !IsMFMWFPWindow(v12) || (v14 = safe_cast_fnid_to_PMENUWND(v13)) == 0 || (v15 = *(_QWORD *)(v14 + 8)) == 0 )
  {
    *(_DWORD *)(a1 + 88) = -1;
    *v3 = 0LL;
    return (_QWORD *)ThreadUnlock1(v13);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v39, v15);
  v16 = MNGetpItem((__int64)v39, *(_DWORD *)(a1 + 88));
  *(_DWORD *)(a1 + 92) = 0;
  if ( v16 )
  {
    v18 = MNGetpItemFromIndex(
            *(_QWORD *)(*(_QWORD *)v39[0] + 40LL),
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v39[0] + 40LL) + 116LL));
    v20 = *v19;
    v21 = *(_DWORD *)(*v19 + 68);
    v23 = *(_DWORD *)(*(_QWORD *)v18 + 68LL) + v22;
    v17 = gpsi;
    v24 = *(_DWORD *)(gpsi + 2172LL);
    if ( v23 > v21 + v24 )
    {
      if ( v23 >= v21 + *(_DWORD *)(v20 + 76) - v24 )
        *(_DWORD *)(a1 + 92) = 2;
    }
    else
    {
      *(_DWORD *)(a1 + 92) = 1;
    }
  }
  if ( v9 != (struct tagWND *)*v3 )
    goto LABEL_23;
  v25 = *(_DWORD *)(a1 + 88) - v10;
  if ( v25 != -1 )
  {
    if ( v25 )
    {
      if ( v25 == 1 && *(_DWORD *)(a1 + 92) == 1 && v11 == 2 )
        goto LABEL_24;
LABEL_23:
      *(_DWORD *)(a1 + 92) |= 4u;
      xxxMNSetGapState(v9, v10, v11, 0);
      xxxMNSetGapState((struct tagWND *)*v3, *(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), 1);
      goto LABEL_24;
    }
    v26 = v11 != *(_DWORD *)(a1 + 92);
LABEL_22:
    if ( !v26 )
      goto LABEL_24;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a1 + 92) != 2 || v11 != 1 )
  {
    v26 = 1;
    goto LABEL_22;
  }
LABEL_24:
  ThreadUnlock1(v17);
  CurrentThread = KeGetCurrentThread();
  v28 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v29)
    || (CurrentProcess = PsGetCurrentProcess(v31, v30, v32),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v35),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v37 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v37 )
      v28 = *v37;
  }
  if ( v39[0] != gSmartObjNullRef && !--*(_DWORD *)(v39[0] + 8LL) )
  {
    if ( *(_BYTE *)(v39[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v39[0]);
  }
  result = *(_QWORD **)(v28 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v28 + 1472) = result;
  }
  return result;
}
