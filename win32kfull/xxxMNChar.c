/*
 * XREFs of xxxMNChar @ 0x1C0219CB8
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0216988 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxMenuWindowProc @ 0x1C021D3D0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0241E88 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxSendMessage @ 0x1C006E518 (xxxSendMessage.c)
 *     MNGetpItemFromIndex @ 0x1C00A266C (MNGetpItemFromIndex.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ThreadLockExchange @ 0x1C010A0D0 (ThreadLockExchange.c)
 *     xxxMessageBeep @ 0x1C01F7F58 (xxxMessageBeep.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0219CB8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxMNSelectItem @ 0x1C021C660 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C021D0B4 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMNFindChar @ 0x1C0241D40 (xxxMNFindChar.c)
 */

_QWORD *__fastcall xxxMNChar(__int64 **a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  int v8; // r13d
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // r14d
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ebx
  __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  int v23; // edx
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD v32[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v33; // [rsp+30h] [rbp-49h]
  __int128 v34; // [rsp+38h] [rbp-41h] BYREF
  __int64 v35; // [rsp+48h] [rbp-31h]
  _QWORD v36[3]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v37; // [rsp+68h] [rbp-11h] BYREF
  __int64 v38; // [rsp+78h] [rbp-1h]
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF
  __int64 v40; // [rsp+90h] [rbp+17h]
  int v41; // [rsp+E0h] [rbp+67h] BYREF
  unsigned __int64 v42; // [rsp+F8h] [rbp+7Fh]

  SmartObjStackRefBase<tagMENU>::Init(v32, 0LL);
  v40 = 0LL;
  v38 = 0LL;
  v35 = 0LL;
  v6 = 0LL;
  v7 = *a1;
  v8 = 0;
  v33 = 0LL;
  v39 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v41 = 0;
  v34 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v32, *(_QWORD *)(*v7 + 40));
  if ( (*(_DWORD *)**a1 & 0x8000) == 0 )
  {
    v9 = v33;
    if ( !v33 )
      v9 = *(_QWORD *)v32[0];
    ThreadLock(v9, &v37);
    ThreadLock(*(_QWORD *)(**a1 + 48), &v34);
    v10 = xxxMNFindChar(v32, a3, *(unsigned int *)(**a1 + 80), &v41);
    v11 = 0xFFFFFFFFLL;
    v12 = v10;
    if ( v10 != -1 )
    {
      v13 = v10;
      while ( 1 )
      {
        v14 = v33;
        if ( !v33 )
          v14 = *(_QWORD *)v32[0];
        v15 = MNGetpItemFromIndex(v14, v12);
        if ( !v15 || (*(_DWORD *)(*(_QWORD *)v15 + 4LL) & 3) == 0 )
          break;
        v12 = xxxMNFindChar(v32, a3, v12, &v41);
        if ( v12 == v13 )
          goto LABEL_53;
      }
      v16 = v12;
      do
      {
        v17 = xxxMNFindChar(v32, a3, v12, &v41);
        v18 = v33;
        v12 = v17;
        if ( !v33 )
          v18 = *(_QWORD *)v32[0];
        v19 = MNGetpItemFromIndex(v18, v17);
      }
      while ( v19 && (*(_DWORD *)(*(_QWORD *)v19 + 4LL) & 3) != 0 && v12 != v13 );
      if ( v13 == v12 || v12 == v16 )
        v8 = 1;
      v6 = v42;
      v12 = v16;
      v11 = 0xFFFFFFFFLL;
    }
    if ( v12 != -1 )
      goto LABEL_45;
    if ( (*(_DWORD *)**a1 & 1) != 0 && a3 == 32 )
    {
      if ( (*(_DWORD *)**a1 & 4) != 0 )
      {
        v8 = 1;
        goto LABEL_45;
      }
      if ( *(_QWORD *)(**a1 + 48) )
        goto LABEL_56;
    }
    if ( (*(_DWORD *)**a1 & 1) != 0 )
    {
      if ( *(_QWORD *)(**a1 + 48) )
      {
        ThreadLockExchange(*(_QWORD *)(**a1 + 48), (__int64)&v34);
        SmartObjStackRefBase<tagMENU>::Init(v36, *(_QWORD *)(**a1 + 48));
        v36[2] = 0LL;
        v20 = xxxMNFindChar(v36, a3, 0LL, &v41);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v36);
        v11 = 0xFFFFFFFFLL;
        if ( v20 != -1 )
        {
LABEL_56:
          if ( (unsigned int)xxxMNSwitchToAlternateMenu(a1, a2) )
            xxxMNChar(a1, a2, a3);
          goto LABEL_47;
        }
      }
    }
    v23 = (*(_DWORD *)**a1 & 4) << 11;
    v24 = v23 | 0x10;
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      v24 = v23;
    if ( *(_QWORD *)(**a1 + 8) )
    {
      ThreadLockAlways(*(_QWORD *)(**a1 + 8), &v39);
      v6 = xxxSendMessage(*(struct tagWND **)(**a1 + 8), 0x120u);
      ThreadUnlock1(v26, v25, v27);
      v11 = 0xFFFFFFFFLL;
    }
    v22 = v6 >> 16;
    if ( WORD1(v6) )
    {
      if ( WORD1(v6) != 1 )
      {
        v21 = (unsigned int)WORD1(v6) - 2;
        if ( WORD1(v6) == 2 )
        {
          v8 = 1;
        }
        else if ( WORD1(v6) != 3 )
        {
          goto LABEL_47;
        }
        v21 = (unsigned __int16)v6;
        v22 = *(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL);
        if ( (unsigned int)(unsigned __int16)v6 < *(_DWORD *)(v22 + 44) && (__int16)v6 != -1 )
        {
LABEL_45:
          xxxMNSelectItem(a1, a2);
          if ( v8 )
            xxxMNKeyDown(a1, a2, 13LL);
        }
LABEL_47:
        ThreadUnlock1(v22, v21, v11);
        ThreadUnlock1(v29, v28, v30);
        return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
      }
    }
    else
    {
      if ( !*(_QWORD *)(**a1 + 8)
        || (v21 = **a1, v22 = gptiCurrent, *(_QWORD *)(gptiCurrent + 1432LL) != *(_QWORD *)(v21 + 8)) )
      {
        xxxMessageBeep(0LL);
      }
      if ( (v24 & 0x10) != 0 )
        goto LABEL_47;
    }
LABEL_53:
    xxxMNCancel(a2, 0, 0, 0LL);
    goto LABEL_47;
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v32);
}
