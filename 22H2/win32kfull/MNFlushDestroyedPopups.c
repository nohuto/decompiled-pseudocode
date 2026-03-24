/*
 * XREFs of MNFlushDestroyedPopups @ 0x1C0221530
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 *     xxxMNLoop @ 0x1C0234488 (xxxMNLoop.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C01690B8 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     NullifyLookasideRef @ 0x1C0221190 (NullifyLookasideRef.c)
 *     MNFreePopup @ 0x1C02217B8 (MNFreePopup.c)
 */

_QWORD *__fastcall MNFlushDestroyedPopups(_DWORD *a1)
{
  _DWORD *v2; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v10; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v12; // rcx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v14; // rax
  struct _KTHREAD *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rax
  _QWORD *result; // rax
  __int64 v26; // rbx
  _QWORD v27[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v28[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, 0LL);
  v2 = a1;
LABEL_2:
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v27, (__int64)v2);
  while ( *(_QWORD *)(*(_QWORD *)v27[0] + 72LL) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)v27[0] + 72LL);
    if ( (*v2 & 0x8000) == 0 )
      goto LABEL_2;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v28, (__int64)v2);
    *(_QWORD *)(*(_QWORD *)v27[0] + 72LL) = *(_QWORD *)(*(_QWORD *)v28[0] + 72LL);
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, *(_QWORD *)v28[0]);
    MNFreePopup(v29);
    if ( (**(_DWORD **)v28[0] & 0x40000000) != 0 )
    {
      **(_DWORD **)v28[0] &= ~0x20000000u;
    }
    else
    {
      v26 = *(_QWORD *)v28[0];
      NullifyLookasideRef(*(_QWORD *)(*(_QWORD *)v28[0] + 88LL));
      UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(v26);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(*(_QWORD *)v27[0])
    || (CurrentProcess = PsGetCurrentProcess(v6, v5, v7),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v10),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( v28[0] != gSmartObjNullRef && !--*(_DWORD *)(v28[0] + 8LL) )
  {
    if ( *(_BYTE *)(v28[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28[0]);
  }
  v14 = *(_QWORD **)(v4 + 1472);
  if ( v14 )
    *(_QWORD *)(v4 + 1472) = *v14;
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v12)
    || (v20 = PsGetCurrentProcess(v18, v17, v19),
        v21 = PsGetProcessSessionIdEx(v20),
        v23 = PsGetCurrentThreadProcess(v22),
        v21 == (unsigned int)PsGetProcessSessionIdEx(v23)) )
  {
    v24 = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( v24 )
      v16 = *v24;
  }
  if ( v27[0] != gSmartObjNullRef && !--*(_DWORD *)(v27[0] + 8LL) )
  {
    if ( *(_BYTE *)(v27[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v27[0]);
  }
  result = *(_QWORD **)(v16 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v16 + 1472) = result;
  }
  return result;
}
