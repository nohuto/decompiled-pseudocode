/*
 * XREFs of ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235370
 * Callers:
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuInheritedContextHelpId(__int64 **a1)
{
  __int64 v1; // rcx
  unsigned int v2; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v13; // rcx
  __int64 v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v16, **a1);
  if ( (**(_DWORD **)v16[0] & 1) == 0 )
  {
    while ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) + 48LL) )
    {
      if ( (**(_DWORD **)v16[0] & 2) != 0
        && *(_QWORD *)(*(_QWORD *)v16[0] + 32LL) == *(_QWORD *)(*(_QWORD *)v16[0] + 8LL) )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v16, *(_QWORD *)(*(_QWORD *)v16[0] + 64LL));
        break;
      }
      v1 = *(_QWORD *)v16[0];
      if ( *(_QWORD *)(*(_QWORD *)v16[0] + 32LL) )
      {
        v15 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v16[0] + 32LL));
        if ( v15 )
        {
          SmartObjStackRefBase<tagPOPUPMENU>::operator=(v16, *(_QWORD *)(v15 + 8));
          if ( *(_QWORD *)v16[0] )
            continue;
        }
      }
      v2 = 0;
      goto LABEL_3;
    }
  }
  v1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL);
  v2 = *(_DWORD *)(v1 + 48);
LABEL_3:
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v1)
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v10),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v16[0] != gSmartObjNullRef && !--*(_DWORD *)(v16[0] + 8LL) )
  {
    if ( *(_BYTE *)(v16[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v16[0]);
  }
  v13 = *(_QWORD **)(v4 + 1472);
  if ( v13 )
    *(_QWORD *)(v4 + 1472) = *v13;
  return v2;
}
