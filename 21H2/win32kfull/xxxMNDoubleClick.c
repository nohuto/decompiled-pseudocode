/*
 * XREFs of xxxMNDoubleClick @ 0x1C0231350
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     xxxInternalGetMessage @ 0x1C00A4B4C (xxxInternalGetMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C022F774 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C022F878 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C024E3F8 (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025AD30 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  unsigned int v6; // r15d
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int MenuDefaultItem; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  _QWORD v28[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v29; // [rsp+48h] [rbp-39h]
  _QWORD v30[3]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v31; // [rsp+68h] [rbp-19h] BYREF
  __int64 v32; // [rsp+78h] [rbp-9h]
  __int128 v33; // [rsp+80h] [rbp-1h] BYREF
  __int64 v34; // [rsp+90h] [rbp+Fh]
  _OWORD v35[3]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v28, 0LL);
  v29 = 0LL;
  memset(v35, 0, sizeof(v35));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage(v35, 0LL, 0, 0, 2, 0) && (DWORD2(v35[0]) == 514 || DWORD2(v35[0]) == 162) )
    xxxInternalGetMessage(v35, 0LL, DWORD2(v35[0]), DWORD2(v35[0]), 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v29 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v28, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v28)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_24:
    v6 = 0;
    goto LABEL_25;
  }
  v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v8 + 4LL) & 3) != 0 )
    goto LABEL_24;
  while ( 1 )
  {
    v9 = v8[2];
    if ( !v9 )
      break;
    v29 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v28, v9);
    v10 = v29;
    if ( !v29 )
      v10 = *(_QWORD *)v28[0];
    MenuDefaultItem = GetMenuDefaultItem(v10, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_24;
    v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v28[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v30[2] = 0LL;
    v32 = 0LL;
    v34 = 0LL;
    v12 = *(_QWORD *)a2;
    v31 = 0LL;
    v33 = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v30[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v30;
    v30[1] = v13;
    HMLockObject(v13);
    ThreadLock(*(_QWORD *)(**(_QWORD **)a2 + 16LL), (__int64 *)&v31);
    v15 = v29;
    if ( !v29 )
      v15 = *(_QWORD *)v28[0];
    ThreadLock(v15, (__int64 *)&v33);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v28,
      v4,
      a1);
    v19 = ThreadUnlock1(v17, v16, v18);
    v29 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v28, v19);
    ThreadUnlock1(v21, v20, v22);
    ThreadUnlock1(v24, v23, v25);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v28) )
    goto LABEL_24;
  v26 = v29;
  if ( !v29 )
    v26 = *(_QWORD *)v28[0];
  if ( (unsigned int)MNGetpItemIndex(v26, (__int64)v8) == -1 )
    goto LABEL_24;
  xxxMNDismissWithNotify(a1, a2, (__int64)v8, v4);
LABEL_25:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v28);
  return v6;
}
