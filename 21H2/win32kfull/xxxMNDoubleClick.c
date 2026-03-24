/*
 * XREFs of xxxMNDoubleClick @ 0x1C0238378
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C0048370 (MNGetpItemIndex.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     xxxInternalGetMessage @ 0x1C00D9FB0 (xxxInternalGetMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C02360A8 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C02361AC (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     xxxSendMenuSelect @ 0x1C025140C (xxxSendMenuSelect.c)
 *     _GetMenuDefaultItem @ 0x1C025E15C (_GetMenuDefaultItem.c)
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
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD v25[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v26; // [rsp+48h] [rbp-39h]
  _QWORD v27[3]; // [rsp+50h] [rbp-31h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-19h] BYREF
  _QWORD v29[3]; // [rsp+80h] [rbp-1h] BYREF
  _OWORD v30[3]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  memset(v30, 0, sizeof(v30));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage(v30, 0LL, 0, 0, 2, 0) && (DWORD2(v30[0]) == 514 || DWORD2(v30[0]) == 162) )
    xxxInternalGetMessage(v30, 0LL, DWORD2(v30[0]), DWORD2(v30[0]), 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_28:
    v6 = 0;
    goto LABEL_29;
  }
  v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v8 + 4LL) & 3) != 0 )
    goto LABEL_28;
  while ( 1 )
  {
    v9 = v8[2];
    if ( !v9 )
      break;
    v26 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v25, v9);
    v10 = v26;
    if ( !v26 )
      v10 = *(_QWORD *)v25[0];
    MenuDefaultItem = GetMenuDefaultItem(v10, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_28;
    v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v25[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v12 = *(_QWORD *)a2;
    v27[2] = 0LL;
    v28[2] = 0LL;
    v29[2] = 0LL;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 64LL) + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v27[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v27;
    v27[1] = v13;
    HMLockObject(v13);
    v15 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v28[0] = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = v28;
    v28[1] = v15;
    if ( v15 )
      HMLockObject(v15);
    v17 = v26;
    if ( !v26 )
      v17 = *(_QWORD *)v25[0];
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v29[0] = *(_QWORD *)(v18 + 416);
    *(_QWORD *)(v18 + 416) = v29;
    v29[1] = v17;
    if ( v17 )
      HMLockObject(v17);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v25,
      v4,
      a1);
    v20 = ThreadUnlock1(v19);
    v26 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v25, v20);
    ThreadUnlock1(v21);
    ThreadUnlock1(v22);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
    goto LABEL_28;
  v23 = v26;
  if ( !v26 )
    v23 = *(_QWORD *)v25[0];
  if ( (unsigned int)MNGetpItemIndex(v23, (__int64)v8) == -1 )
    goto LABEL_28;
  xxxMNDismissWithNotify(a1, a2, (__int64)v8, v4);
LABEL_29:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v25);
  return v6;
}
