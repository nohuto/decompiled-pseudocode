/*
 * XREFs of xxxEndMenu @ 0x1C024A3F4
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00468C8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     xxxEndMenuLoop @ 0x1C0233D00 (xxxEndMenuLoop.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237D20 (xxxMNCloseHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C023AAFC (xxxMNReleaseCapture.c)
 */

__int64 *__fastcall xxxEndMenu(__int64 a1)
{
  __int64 v2; // rcx
  _DWORD **v3; // rax
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ebx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 *result; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, *(_QWORD *)a1);
  if ( *(_QWORD *)v18[0] )
  {
    v3 = (_DWORD **)v18[0];
    *(_DWORD *)(a1 + 8) &= 0xFFFFFFFA;
    **v3 |= 0x8000u;
    v4 = *(_QWORD *)(a1 + 32);
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == v2 )
      xxxMNReleaseCapture(a1);
    if ( gptiCurrent == v4 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      if ( (v5 & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 8) = v5 | 0x10;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
        {
          if ( (**(_DWORD **)a1 & 0x80000) == 0 )
            xxxMNCancel(a1, 0, 0, 0LL);
        }
        else
        {
          v6 = **(_DWORD **)v18[0];
          xxxMNCloseHierarchy(*(_QWORD *)v18[0], a1);
          if ( (v6 & 8) != 0 )
          {
            v2 = *(_QWORD *)v18[0];
            if ( *(_QWORD *)(*(_QWORD *)v18[0] + 16LL) )
              xxxDestroyWindow(*(_QWORD *)(*(_QWORD *)v18[0] + 16LL));
          }
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  if ( v18[0] != gSmartObjNullRef && !--*(_DWORD *)(v18[0] + 8LL) )
  {
    if ( *(_BYTE *)(v18[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v18[0]);
  }
  result = *(__int64 **)(v8 + 1472);
  if ( result )
  {
    result = (__int64 *)*result;
    *(_QWORD *)(v8 + 1472) = result;
  }
  return result;
}
