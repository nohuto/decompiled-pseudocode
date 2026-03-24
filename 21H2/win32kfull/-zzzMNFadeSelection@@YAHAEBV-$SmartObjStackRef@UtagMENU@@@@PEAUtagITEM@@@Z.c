/*
 * XREFs of ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236740
 * Callers:
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02360A8 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0047998 (MNGetPopupFromMenu.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E7108 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E8784 (zzzShowFade.c)
 */

__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rcx
  _DWORD *v7; // rax
  __int64 v8; // rbx
  _DWORD *v9; // r9
  HDC v10; // r14
  HDC DCEx; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v22; // rcx
  _QWORD v24[2]; // [rsp+60h] [rbp+17h] BYREF
  struct tagRECT v25; // [rsp+70h] [rbp+27h] BYREF

  v25 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v24, 0LL);
  if ( gbDisableAlpha )
    goto LABEL_12;
  v4 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000400;
  if ( (_DWORD)v4 != -2147482624 )
    goto LABEL_12;
  v5 = 1;
  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4
    || CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
  {
    goto LABEL_12;
  }
  v6 = *(_QWORD *)(a1 + 16);
  if ( !v6 )
    v6 = **(_QWORD **)a1;
  v7 = MNGetPopupFromMenu(v6, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v24, (__int64)v7);
  if ( !*(_QWORD *)v24[0] )
    goto LABEL_12;
  v4 = *(_QWORD *)v24[0];
  v8 = *(_QWORD *)(*(_QWORD *)v24[0] + 16LL);
  if ( !v8
    || (v9 = *(_DWORD **)a2,
        v25.left = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v25.top = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 108LL) + v9[17],
        v25.right = v25.left + v9[18],
        v25.bottom = v25.top + v9[19],
        (v10 = CreateFadeInternal(
                 0LL,
                 &v25,
                 350,
                 (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                 *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL))) == 0LL) )
  {
LABEL_12:
    v5 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(v8, 0LL, 1073807360LL);
    NtGdiBitBltInternal(
      v10,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)a2 + 72LL),
      *(_DWORD *)(*(_QWORD *)a2 + 76LL),
      DCEx,
      *(_DWORD *)(*(_QWORD *)a2 + 64LL),
      *(_DWORD *)(*(_QWORD *)a2 + 68LL),
      13369376,
      0,
      0);
    _ReleaseDC(DCEx);
    zzzShowFade();
  }
  CurrentThread = KeGetCurrentThread();
  v13 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v15, v14, v16),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v13 = *ThreadWin32Thread;
  }
  if ( v24[0] != gSmartObjNullRef && !--*(_DWORD *)(v24[0] + 8LL) )
  {
    if ( *(_BYTE *)(v24[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v24[0]);
  }
  v22 = *(_QWORD **)(v13 + 1472);
  if ( v22 )
    *(_QWORD *)(v13 + 1472) = *v22;
  return v5;
}
