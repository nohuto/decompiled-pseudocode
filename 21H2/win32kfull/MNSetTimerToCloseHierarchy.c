/*
 * XREFs of MNSetTimerToCloseHierarchy @ 0x1C0236E00
 * Callers:
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C007D85C (safe_cast_fnid_to_PMENUWND.c)
 *     InternalSetTimer @ 0x1C0080820 (InternalSetTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall MNSetTimerToCloseHierarchy(_QWORD **a1)
{
  _DWORD *v2; // rcx
  __int64 v3; // rax
  unsigned int v4; // edi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v15; // rcx
  _QWORD v17[3]; // [rsp+30h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v17, 0LL);
  if ( (*(_DWORD *)**a1 & 0x20) == 0 )
    goto LABEL_5;
  v2 = (_DWORD *)**a1;
  if ( (*v2 & 0x4000) == 0 )
  {
    v3 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 24LL));
    if ( !v3 || (SmartObjStackRefBase<tagPOPUPMENU>::operator=(v17, *(_QWORD *)(v3 + 8)), !*(_QWORD *)v17[0]) )
    {
LABEL_5:
      v4 = 0;
      goto LABEL_10;
    }
    if ( !InternalSetTimer(*(_QWORD *)(**a1 + 16LL), 0xFFFFLL, HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument1), 0LL, 0, 16) )
    {
      v4 = -1;
      goto LABEL_10;
    }
    *(_DWORD *)**a1 |= 0x4000u;
    v2 = *(_DWORD **)v17[0];
    **(_DWORD **)v17[0] |= 0x1000u;
  }
  v4 = 1;
LABEL_10:
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v2)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v12),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  if ( v17[0] != gSmartObjNullRef && !--*(_DWORD *)(v17[0] + 8LL) )
  {
    if ( *(_BYTE *)(v17[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v17[0]);
  }
  v15 = *(_QWORD **)(v6 + 1472);
  if ( v15 )
    *(_QWORD *)(v6 + 1472) = *v15;
  return v4;
}
