/*
 * XREFs of xxxMNChar @ 0x1C02309F8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C022D700 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C024D9FC (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C0050D34 (xxxSendMessage.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C00FDE30 (ThreadLockExchange.c)
 *     xxxMessageBeep @ 0x1C014C6C4 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0230708 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02309F8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C02334EC (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0233F20 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C024D8A8 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r13
  __int64 *v7; // rax
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // edx
  unsigned int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // ebx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // edx
  char v26; // r14
  __int64 v27; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD v36[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v37; // [rsp+38h] [rbp-39h]
  __int128 v38; // [rsp+40h] [rbp-31h] BYREF
  __int64 v39; // [rsp+50h] [rbp-21h]
  __int128 v40; // [rsp+58h] [rbp-19h] BYREF
  __int64 v41; // [rsp+68h] [rbp-9h]
  _QWORD v42[3]; // [rsp+70h] [rbp-1h] BYREF
  __int128 v43; // [rsp+88h] [rbp+17h] BYREF
  __int64 v44; // [rsp+98h] [rbp+27h]
  int v45; // [rsp+D8h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v36, 0LL);
  v37 = 0LL;
  v39 = 0LL;
  v44 = 0LL;
  v41 = 0LL;
  v6 = 0LL;
  v7 = *a1;
  v8 = 0;
  v45 = 0;
  v38 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v9 = *(_QWORD *)(*v7 + 40);
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v36, v9);
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v10 = v37;
    if ( !v37 )
      v10 = *(_QWORD *)v36[0];
    ThreadLock(v10, (__int64 *)&v43);
    ThreadLock(*(_QWORD *)(**a1 + 48), (__int64 *)&v40);
    v11 = xxxMNFindChar(v36, a3, *(unsigned int *)(**a1 + 80), &v45);
    v13 = v11;
    if ( v11 != -1 )
    {
      v14 = v11;
      while ( 1 )
      {
        v15 = v37;
        if ( !v37 )
          v15 = *(_QWORD *)v36[0];
        v16 = MNGetpItemFromIndex(v15, v13);
        if ( !v16 || (*(_DWORD *)(*(_QWORD *)v16 + 4LL) & 3) == 0 )
          break;
        v13 = xxxMNFindChar(v36, a3, v17, &v45);
        if ( v13 == v14 )
          goto LABEL_50;
      }
      v18 = v17;
      do
      {
        v19 = xxxMNFindChar(v36, a3, v17, &v45);
        v20 = v37;
        if ( !v37 )
          v20 = *(_QWORD *)v36[0];
        v21 = MNGetpItemFromIndex(v20, v19);
      }
      while ( v21 && (*(_DWORD *)(*(_QWORD *)v21 + 4LL) & 3) != 0 && v17 != v14 );
      if ( v14 == v17 || v17 == v18 )
        v8 = 1;
      if ( v18 != -1 )
        goto LABEL_44;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)**a1 & 4) != 0 )
      {
        v8 = 1;
        goto LABEL_44;
      }
      if ( *(_QWORD *)(**a1 + 48) )
        goto LABEL_55;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**a1 + 48), (__int64)&v40);
        SmartObjStackRefBase<tagMENU>::Init(v42, *(_QWORD *)(**a1 + 48));
        v42[2] = 0LL;
        v22 = xxxMNFindChar(v42, a3, 0LL, &v45);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v42);
        if ( v22 != -1 )
        {
LABEL_55:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_51;
        }
      }
    }
    v25 = (*(_DWORD *)**a1 & 4) << 11;
    v26 = v25 | 0x10;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      v26 = v25;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      v27 = *(_QWORD *)(**a1 + 8);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v38 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v38;
      *((_QWORD *)&v38 + 1) = v27;
      HMLockObject(v27);
      v6 = xxxSendMessage(*(_QWORD *)(**a1 + 8));
      ThreadUnlock1(v30, v29, v31);
    }
    v24 = v6 >> 16;
    if ( WORD1(v6) )
    {
      if ( WORD1(v6) != 1 )
      {
        v23 = (unsigned int)WORD1(v6) - 2;
        if ( WORD1(v6) == 2 )
        {
          v8 = 1;
        }
        else if ( WORD1(v6) != 3 )
        {
          goto LABEL_51;
        }
        v23 = (unsigned __int16)v6;
        v24 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v6 < *(_DWORD *)(v24 + 44) && (__int16)v6 != -1 )
        {
LABEL_44:
          xxxMNSelectItem(a1, a2);
          if ( v8 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_51:
        ThreadUnlock1(v24, v23, v12);
        ThreadUnlock1(v33, v32, v34);
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
      }
    }
    else
    {
      if ( !*(_QWORD *)(**a1 + 8)
        || (v23 = **a1, v24 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1392LL) != *(_QWORD *)(v23 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v26 & 0x10) != 0 )
        goto LABEL_51;
    }
LABEL_50:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_51;
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
}
