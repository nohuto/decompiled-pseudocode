/*
 * XREFs of MNLookUpItem @ 0x1C0061BA0
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C0045858 (xxxSetMenuItemInfo.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0046F48 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00473F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxMNCanClose @ 0x1C0061560 (xxxMNCanClose.c)
 *     MNLookUpItem @ 0x1C0061BA0 (MNLookUpItem.c)
 *     xxxInsertMenuItem @ 0x1C007933C (xxxInsertMenuItem.c)
 *     _GetMenuState @ 0x1C00DB120 (_GetMenuState.c)
 *     DwmGetClassStyle @ 0x1C00EA4A8 (DwmGetClassStyle.c)
 *     _SetMenuDefaultItem @ 0x1C01110FC (_SetMenuDefaultItem.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C015C5BC (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C015C654 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     MNLookUpItem @ 0x1C0061BA0 (MNLookUpItem.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall MNLookUpItem(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  _QWORD *v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  int v16; // r12d
  int v17; // edx
  struct _KTHREAD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 *v23; // rax
  _QWORD *v24; // rcx
  __int64 v26; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v29; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // [rsp+20h] [rbp-20h] BYREF
  __int64 v37; // [rsp+28h] [rbp-18h] BYREF
  __int64 v38; // [rsp+30h] [rbp-10h]

  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  v8 = 0LL;
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v29),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v36 = (__int64 *)gSmartObjNullRef;
  v37 = *(_QWORD *)(v9 + 1472);
  *(_QWORD *)(v9 + 1472) = &v37;
  v38 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( !a1 )
    goto LABEL_34;
  v14 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( !(_DWORD)v14 || (_DWORD)v6 == -1 )
    goto LABEL_34;
  if ( a3 )
  {
    if ( (unsigned int)v6 < (unsigned int)v14 )
    {
      v26 = *(_QWORD *)(a1 + 88) + 96 * v6;
      if ( a4 )
        *a4 = a1;
      goto LABEL_29;
    }
LABEL_34:
    v26 = 0LL;
LABEL_29:
    v15 = (_QWORD *)v26;
    goto LABEL_18;
  }
  v15 = *(_QWORD **)(a1 + 88);
  v16 = 0;
  if ( (int)v14 <= 0 )
  {
LABEL_14:
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(&v36) )
    {
      v8 = 0LL;
    }
    else if ( a4 )
    {
      v31 = v38;
      if ( !v38 )
        v31 = *v36;
      *a4 = v31;
    }
    goto LABEL_19;
  }
  while ( 1 )
  {
    v14 = v15[2];
    v17 = *(_DWORD *)(*v15 + 8LL);
    if ( !v14 )
      break;
    if ( v17 == (_DWORD)v6 )
    {
      v38 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(&v36);
      v14 = v15[2];
      v8 = v15;
    }
    v26 = MNLookUpItem(v14, (unsigned int)v6, 0LL, a4);
    if ( v26 )
      goto LABEL_29;
LABEL_13:
    ++v16;
    v15 += 12;
    if ( v16 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
      goto LABEL_14;
  }
  if ( v17 != (_DWORD)v6 )
    goto LABEL_13;
  if ( a4 )
    *a4 = a1;
LABEL_18:
  v8 = v15;
LABEL_19:
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v14)
    || (v32 = PsGetCurrentProcess(v21, v20, v22),
        v33 = PsGetProcessSessionIdEx(v32),
        v35 = PsGetCurrentThreadProcess(v34),
        v33 == (unsigned int)PsGetProcessSessionIdEx(v35)) )
  {
    v23 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v23 )
      v19 = *v23;
  }
  if ( v36 != (__int64 *)gSmartObjNullRef && !--*((_DWORD *)v36 + 2) )
  {
    if ( *((_BYTE *)v36 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v36);
  }
  v24 = *(_QWORD **)(v19 + 1472);
  if ( v24 )
    *(_QWORD *)(v19 + 1472) = *v24;
  return v8;
}
