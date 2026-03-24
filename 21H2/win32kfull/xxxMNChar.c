/*
 * XREFs of xxxMNChar @ 0x1C02378A4
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C02378A4 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0250A2C (xxxMNKeyFilter.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x1C0048164 (MNGetpItemFromIndex.c)
 *     xxxSendMessage @ 0x1C005D634 (xxxSendMessage.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00C15B0 (ThreadLockExchange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMessageBeep @ 0x1C015D9A0 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C02378A4 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C023B8F4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C02508D8 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // r13
  int v7; // r12d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // r14d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ebx
  unsigned __int64 v25; // rcx
  int v26; // r14d
  __int64 v27; // rbx
  __int64 v28; // rax
  struct _LARGE_STRING *v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD v33[2]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v34; // [rsp+38h] [rbp-39h]
  __int128 v35; // [rsp+40h] [rbp-31h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h]
  __int128 v37; // [rsp+58h] [rbp-19h] BYREF
  __int64 v38; // [rsp+68h] [rbp-9h]
  __int128 v39; // [rsp+70h] [rbp-1h] BYREF
  __int64 v40; // [rsp+80h] [rbp+Fh]
  _QWORD v41[4]; // [rsp+88h] [rbp+17h] BYREF
  int v42; // [rsp+D8h] [rbp+67h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v33, 0LL);
  v40 = 0LL;
  v38 = 0LL;
  v6 = 0LL;
  v42 = 0;
  v7 = 0;
  v36 = 0LL;
  v8 = *a1;
  v39 = 0LL;
  v37 = 0LL;
  v35 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 40LL);
  v34 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v33, v9);
  if ( (**(_DWORD **)*a1 & 0x8000) == 0 )
  {
    v10 = v34;
    if ( !v34 )
      v10 = *(_QWORD *)v33[0];
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v37 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v37;
    *((_QWORD *)&v37 + 1) = v10;
    if ( v10 )
      HMLockObject(v10);
    v12 = *(_QWORD *)(*(_QWORD *)*a1 + 48LL);
    v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v35 = *(_QWORD *)(v13 + 416);
    *(_QWORD *)(v13 + 416) = &v35;
    *((_QWORD *)&v35 + 1) = v12;
    if ( v12 )
      HMLockObject(v12);
    v14 = xxxMNFindChar(v33, a3, *(unsigned int *)(*(_QWORD *)*a1 + 80LL), &v42);
    v15 = v14;
    if ( v14 != -1 )
    {
      v16 = v14;
      while ( 1 )
      {
        v17 = v34;
        if ( !v34 )
          v17 = *(_QWORD *)v33[0];
        v18 = MNGetpItemFromIndex(v17, v15);
        if ( !v18 || (*(_DWORD *)(*(_QWORD *)v18 + 4LL) & 3) == 0 )
          break;
        v15 = xxxMNFindChar(v33, a3, v19, &v42);
        if ( v15 == v16 )
          goto LABEL_57;
      }
      v20 = v19;
      do
      {
        v21 = xxxMNFindChar(v33, a3, v19, &v42);
        v22 = v34;
        if ( !v34 )
          v22 = *(_QWORD *)v33[0];
        v23 = MNGetpItemFromIndex(v22, v21);
      }
      while ( v23 && (*(_DWORD *)(*(_QWORD *)v23 + 4LL) & 3) != 0 && v19 != v16 );
      if ( v16 == v19 || v19 == v20 )
        v7 = 1;
      if ( v20 != -1 )
        goto LABEL_51;
    }
    if ( (**(_DWORD **)*a1 & 1) != 0 && a3 == 32 )
    {
      if ( (**(_DWORD **)*a1 & 4) != 0 )
      {
        v7 = 1;
        goto LABEL_51;
      }
      if ( *(_QWORD *)(*(_QWORD *)*a1 + 48LL) )
        goto LABEL_62;
    }
    if ( (**(_DWORD **)*a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)*a1 + 48LL) )
      {
        ThreadLockExchange(*(_QWORD *)(*(_QWORD *)*a1 + 48LL), (__int64)&v35);
        SmartObjStackRefBase<tagMENU>::Init(v41, *(_QWORD *)(*(_QWORD *)*a1 + 48LL));
        v41[2] = 0LL;
        v24 = xxxMNFindChar(v41, a3, 0LL, &v42);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v41);
        if ( v24 != -1 )
        {
LABEL_62:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_58;
        }
      }
    }
    v26 = ((**(_DWORD **)*a1 & 4) << 11) | 0x10;
    if ( (**(_DWORD **)*a1 & 1) != 0 )
      v26 = (**(_DWORD **)*a1 & 4) << 11;
    if ( *(_QWORD *)(*(_QWORD *)*a1 + 8LL) )
    {
      v27 = *(_QWORD *)(*(_QWORD *)*a1 + 8LL);
      v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v39 = *(_QWORD *)(v28 + 416);
      *(_QWORD *)(v28 + 416) = &v39;
      *((_QWORD *)&v39 + 1) = v27;
      HMLockObject(v27);
      if ( *(_QWORD *)(*(_QWORD *)*a1 + 40LL) )
        v29 = **(struct _LARGE_STRING ***)(*(_QWORD *)*a1 + 40LL);
      else
        v29 = 0LL;
      v6 = xxxSendMessage(
             *(_QWORD *)(*(_QWORD *)*a1 + 8LL),
             0x120u,
             (unsigned __int16)a3 | (unsigned __int64)(unsigned int)(v26 << 16),
             v29);
      ThreadUnlock1(v30);
    }
    v25 = v6 >> 16;
    if ( WORD1(v6) )
    {
      if ( WORD1(v6) != 1 )
      {
        if ( WORD1(v6) == 2 )
        {
          v7 = 1;
        }
        else if ( WORD1(v6) != 3 )
        {
          goto LABEL_58;
        }
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)*a1 + 40LL) + 40LL);
        if ( (unsigned int)(unsigned __int16)v6 < *(_DWORD *)(v25 + 44) && (__int16)v6 != -1 )
        {
LABEL_51:
          xxxMNSelectItem(a1, a2);
          if ( v7 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_58:
        ThreadUnlock1(v25);
        ThreadUnlock1(v31);
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v33);
      }
    }
    else
    {
      if ( !*(_QWORD *)(*(_QWORD *)*a1 + 8LL)
        || (v25 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1392LL) != *(_QWORD *)(*(_QWORD *)*a1 + 8LL)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v26 & 0x10) != 0 )
        goto LABEL_58;
    }
LABEL_57:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_58;
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v33);
}
