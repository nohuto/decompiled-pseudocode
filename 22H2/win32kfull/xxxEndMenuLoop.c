/*
 * XREFs of xxxEndMenuLoop @ 0x1C0233740
 * Callers:
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 *     xxxCallHandleMenuMessages @ 0x1C0236AD0 (xxxCallHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023B5E0 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxDWP_DoNCActivate @ 0x1C00DC844 (xxxDWP_DoNCActivate.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00E1BE0 (xxxDrawMenuBarUnderlines.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxEndMenu @ 0x1C0249E34 (xxxEndMenu.c)
 */

_QWORD *__fastcall xxxEndMenuLoop(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // edx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v23; // rax
  _QWORD *result; // rax
  __int64 *v25; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v26[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v27[3]; // [rsp+48h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(&v25, a2);
  if ( (*(_DWORD *)*v25 & 8) != 0 )
  {
    if ( (*(_DWORD *)*v25 & 0x80000) == 0 )
      xxxMNCancel(a1, 0, 0);
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( (v4 & 0x20) != 0 )
    {
      v26[2] = 0LL;
      v5 = *(_QWORD *)(*v25 + 8);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v26[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v26;
      v26[1] = v5;
      if ( v5 )
        HMLockObject(v5);
      xxxDrawMenuBarUnderlines(*(_QWORD *)(*v25 + 8), 0);
      ThreadUnlock1(v7);
      v4 = *(_DWORD *)(a1 + 8);
    }
    if ( (v4 & 0x10) == 0 )
      xxxEndMenu(a1);
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x100) != 0 )
  {
    v3 = *v25;
    if ( *(_QWORD *)(*v25 + 8) )
    {
      v8 = *(_QWORD *)(*v25 + 8);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 432LL);
      if ( v9 == gpqForeground && *(_QWORD *)(v9 + 120) == v8 )
      {
        v10 = 1;
        v11 = 1;
      }
      else
      {
        v10 = 0;
        v11 = 2;
      }
      v27[2] = 0LL;
      v3 = (*(unsigned __int8 *)(*(_QWORD *)(v8 + 40) + 16LL) >> 6) & 1;
      if ( (_DWORD)v3 != v10 )
      {
        v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v27[0] = *(_QWORD *)(v12 + 416);
        *(_QWORD *)(v12 + 416) = v27;
        v27[1] = v8;
        HMLockObject(v8);
        xxxDWP_DoNCActivate(v8, v11, 1LL);
        ThreadUnlock1(v13);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v15 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v3)
    || (CurrentProcess = PsGetCurrentProcess(v17, v16, v18),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v23 )
      v15 = *v23;
  }
  if ( v25 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v25 + 2) )
  {
    if ( *((_BYTE *)v25 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v25);
  }
  result = *(_QWORD **)(v15 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v15 + 1472) = result;
  }
  return result;
}
