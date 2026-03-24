/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C02380E4
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F19F8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0059990 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01F2328 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02386D0 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  __int64 v16; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v24; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *v26; // rax
  _QWORD *v27; // rcx
  _QWORD v29[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v30; // [rsp+60h] [rbp-20h] BYREF
  __int64 v31; // [rsp+70h] [rbp-10h]
  char v32; // [rsp+A0h] [rbp+20h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0LL);
  v31 = 0LL;
  v5 = *(_QWORD *)(a1 + 40);
  v30 = 0LL;
  if ( *(char *)(v5 + 20) < 0 || *(char *)(v5 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_18;
  v7 = *(_QWORD **)(v6 + 608);
  v8 = v7 ? *v7 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, v8);
  if ( !*(_QWORD *)v29[0] )
    goto LABEL_18;
  v4 = *(_QWORD *)v29[0];
  if ( !*(_QWORD *)(*(_QWORD *)v29[0] + 8LL) )
    goto LABEL_18;
  v9 = xxxMNFindWindowFromPoint(v29, &v32, a2);
  v4 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 || v9 )
    goto LABEL_18;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
  v11 = v10 ? *v10 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, v11);
  if ( *(_QWORD *)v29[0] && (v4 = *(_QWORD *)v29[0], *(_QWORD *)(*(_QWORD *)v29[0] + 8LL)) )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v29[0] + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v30 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v30;
    *((_QWORD *)&v30 + 1) = v12;
    HMLockObject(v12);
    v14 = 1;
    v15 = *(_QWORD *)(*(_QWORD *)v29[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v15, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v16);
  }
  else
  {
LABEL_18:
    v14 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v4)
    || (CurrentProcess = PsGetCurrentProcess(v20, v19, v21),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v24),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v26 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v26 )
      v18 = *v26;
  }
  if ( v29[0] != gSmartObjNullRef && !--*(_DWORD *)(v29[0] + 8LL) )
  {
    if ( *(_BYTE *)(v29[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v29[0]);
  }
  v27 = *(_QWORD **)(v18 + 1472);
  if ( v27 )
    *(_QWORD *)(v18 + 1472) = *v27;
  return v14;
}
