/*
 * XREFs of xxxMNDragOver @ 0x1C024961C
 * Callers:
 *     NtUserMNDragOver @ 0x1C01FE260 (NtUserMNDragOver.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D7BC (safe_cast_fnid_to_PMENUWND.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0221234 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     GetMenuStateWindow @ 0x1C0236464 (GetMenuStateWindow.c)
 *     IsMFMWFPWindow @ 0x1C0236498 (IsMFMWFPWindow.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236AD0 (xxxCallHandleMenuMessages.c)
 */

__int64 __fastcall xxxMNDragOver(unsigned __int16 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  int v6; // eax
  _QWORD *v7; // rcx
  __int64 *MenuStateWindow; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v25; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v27; // rax
  _QWORD *v28; // rcx
  _QWORD v30[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v30, 0LL);
  v32 = 0LL;
  v31 = 0LL;
  v5 = *(_QWORD *)(gptiCurrent + 608LL);
  if ( v5
    && (v6 = *(_DWORD *)(v5 + 8), (v6 & 0x400) != 0)
    && (v7 = *(_QWORD **)(gptiCurrent + 608LL),
        *(_DWORD *)(v5 + 8) = v6 | 0x8000,
        (MenuStateWindow = (__int64 *)GetMenuStateWindow(v7)) != 0LL) )
  {
    ++*(_DWORD *)(v5 + 40);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v31 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v31;
    *((_QWORD *)&v31 + 1) = MenuStateWindow;
    HMLockObject(MenuStateWindow);
    xxxCallHandleMenuMessages(v5, MenuStateWindow, 160, 0LL, (a1[2] << 16) | *a1);
    ThreadUnlock1(v10);
    if ( IsMFMWFPWindow(*(_QWORD *)(v5 + 80))
      && (v12 = safe_cast_fnid_to_PMENUWND(v11)) != 0
      && (v13 = *(_QWORD *)(v12 + 8)) != 0 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v30, v13);
      if ( *(_QWORD *)(*(_QWORD *)v30[0] + 40LL) )
        v14 = **(_QWORD **)(*(_QWORD *)v30[0] + 40LL);
      else
        v14 = 0LL;
      *(_QWORD *)(a2 + 8) = v14;
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 88);
      if ( *(_QWORD *)(*(_QWORD *)v30[0] + 8LL) )
        v15 = **(_QWORD **)(*(_QWORD *)v30[0] + 8LL);
      else
        v15 = 0LL;
      *(_QWORD *)(a2 + 24) = v15;
      v16 = *(_DWORD *)(v5 + 92);
      *(_DWORD *)a2 = v16;
      if ( (v16 & 2) != 0 )
        ++*(_DWORD *)(a2 + 16);
      v17 = 1;
    }
    else
    {
      v17 = 0;
    }
    xxxUnlockMenuStateInternal((struct tagMENUSTATE *)v5, 1);
  }
  else
  {
    v17 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v21, v20, v22),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v25),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v27 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v27 )
      v19 = *v27;
  }
  if ( v30[0] != gSmartObjNullRef && !--*(_DWORD *)(v30[0] + 8LL) )
  {
    if ( *(_BYTE *)(v30[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v30[0]);
  }
  v28 = *(_QWORD **)(v19 + 1472);
  if ( v28 )
    *(_QWORD *)(v19 + 1472) = *v28;
  return v17;
}
