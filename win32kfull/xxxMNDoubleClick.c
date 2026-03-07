__int64 __fastcall xxxMNDoubleClick(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // r14d
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int MenuDefaultItem; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  _QWORD v26[2]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v27; // [rsp+48h] [rbp-39h]
  __int128 v28; // [rsp+50h] [rbp-31h] BYREF
  __int64 v29; // [rsp+60h] [rbp-21h]
  __int128 v30; // [rsp+68h] [rbp-19h] BYREF
  __int64 v31; // [rsp+78h] [rbp-9h]
  __int128 v32; // [rsp+80h] [rbp-1h] BYREF
  __int64 v33; // [rsp+90h] [rbp+Fh]
  _OWORD v34[3]; // [rsp+98h] [rbp+17h] BYREF

  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v26, 0LL);
  v27 = 0LL;
  memset(v34, 0, sizeof(v34));
  v6 = 1;
  if ( (unsigned int)xxxInternalGetMessage(v34, 0LL, 0, 0, 2, 0) && (DWORD2(v34[0]) == 514 || DWORD2(v34[0]) == 162) )
    xxxInternalGetMessage(v34, 0LL, DWORD2(v34[0]), DWORD2(v34[0]), 1, 0);
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  v27 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v26, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v26)
    || (unsigned int)v4 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 40LL) + 44LL) )
  {
    xxxMNDoScroll(a2, *(_DWORD *)(**(_QWORD **)a2 + 80LL), 0);
LABEL_24:
    v6 = 0;
    goto LABEL_25;
  }
  v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 88LL) + 96 * v4);
  if ( (*(_DWORD *)(*v8 + 4LL) & 3) != 0 )
    goto LABEL_24;
  while ( 1 )
  {
    v9 = v8[2];
    if ( !v9 )
      break;
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v26, v9);
    v10 = v27;
    if ( !v27 )
      v10 = *(_QWORD *)v26[0];
    MenuDefaultItem = GetMenuDefaultItem(v10, 1024LL, 0LL);
    LODWORD(v4) = MenuDefaultItem;
    if ( MenuDefaultItem == -1 )
      goto LABEL_24;
    v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)v26[0] + 88LL) + 96LL * MenuDefaultItem);
  }
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL)
    && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL) + 40LL) + 21LL) & 2) == 0 )
  {
    v29 = 0LL;
    v31 = 0LL;
    v33 = 0LL;
    v12 = *(_QWORD *)a2;
    v28 = 0LL;
    v30 = 0LL;
    v32 = 0LL;
    ThreadLockAlways(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v12 + 64LL) + 8LL), &v28);
    ThreadLock(*(_QWORD *)(**(_QWORD **)a2 + 16LL), &v30);
    v13 = v27;
    if ( !v27 )
      v13 = *(_QWORD *)v26[0];
    ThreadLock(v13, &v32);
    xxxSendMenuSelect(
      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 64LL) + 8LL),
      *(_QWORD *)(**(_QWORD **)a2 + 16LL),
      (unsigned int)v26,
      v4,
      a1);
    v17 = ThreadUnlock1(v15, v14, v16);
    v27 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v26, v17);
    ThreadUnlock1(v19, v18, v20);
    ThreadUnlock1(v22, v21, v23);
  }
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v26) )
    goto LABEL_24;
  v24 = v27;
  if ( !v27 )
    v24 = *(_QWORD *)v26[0];
  if ( (unsigned int)MNGetpItemIndex(v24, (__int64)v8) == -1 )
    goto LABEL_24;
  xxxMNDismissWithNotify(a1, a2, (__int64)v8, v4);
LABEL_25:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v26);
  return v6;
}
