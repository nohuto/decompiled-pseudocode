/*
 * XREFs of xxxSetMenuInfo @ 0x1C0062B7C
 * Callers:
 *     NtUserThunkedMenuInfo @ 0x1C0012560 (NtUserThunkedMenuInfo.c)
 *     xxxLoadSysMenu @ 0x1C006272C (xxxLoadSysMenu.c)
 *     xxxSetMenuInfo @ 0x1C0062B7C (xxxSetMenuInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0062940 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSetMenuInfo @ 0x1C0062B7C (xxxSetMenuInfo.c)
 *     MNGetPopupFromMenu @ 0x1C0064740 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNGetpItemFromIndex @ 0x1C00652C8 (MNGetpItemFromIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00A9F90 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00AE308 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02314D0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxSetMenuInfo(_QWORD **a1, __int64 a2)
{
  int v4; // r15d
  int v5; // r13d
  int v6; // eax
  unsigned int v7; // r12d
  _QWORD *v8; // rcx
  unsigned int v9; // r14d
  __int64 v10; // rsi
  unsigned int v11; // edx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rcx
  __int64 v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD v21[2]; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v22[16]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h]
  __int128 v24; // [rsp+48h] [rbp-18h] BYREF
  __int64 v25; // [rsp+58h] [rbp-8h]

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  v4 = 0;
  v5 = 0;
  v25 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  v24 = 0LL;
  v7 = 1;
  if ( (v6 & 0x10) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 40LL)) & 0xFC000000;
  }
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v4 = 1;
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 52LL) = *(_DWORD *)(a2 + 12);
  }
  if ( (*(_DWORD *)(a2 + 4) & 2) != 0 )
  {
    v5 = 1;
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 24LL) = *(_QWORD *)(a2 + 16);
    if ( (*(_BYTE *)(**a1 + 124LL) & 3) != 0 )
      v7 = 5;
  }
  if ( (*(_DWORD *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 48LL) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 4) & 8) != 0 )
    *(_QWORD *)(*(_QWORD *)(**a1 + 40LL) + 16LL) = *(_QWORD *)(a2 + 32);
  if ( *(int *)(a2 + 4) < 0 )
  {
    v8 = a1[2];
    v9 = 0;
    if ( !v8 )
      v8 = (_QWORD *)**a1;
    v10 = MNGetpItemFromIndex(v8, 0LL);
    if ( *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) > v11 )
    {
      do
      {
        if ( !v10 )
          break;
        v12 = *(_QWORD *)(v10 + 16);
        if ( v12 )
        {
          SmartObjStackRefBase<tagMENU>::Init(v22, v12);
          v17 = *(_QWORD *)(v10 + 16);
          v23 = 0LL;
          ThreadLock(v17, &v24);
          xxxSetMenuInfo(v22, a2);
          ThreadUnlock1(v19, v18, v20);
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
        }
        v13 = a1[2];
        ++v9;
        if ( !v13 )
          v13 = (_QWORD *)**a1;
        v10 = MNGetpItemFromIndex(v13, v9);
      }
      while ( v9 < *(_DWORD *)(*(_QWORD *)(**a1 + 40LL) + 44LL) );
    }
  }
  if ( v4 )
  {
    *(_DWORD *)(**a1 + 64LL) = 0;
    *(_DWORD *)(**a1 + 68LL) = 0;
  }
  else if ( !v5 )
  {
    goto LABEL_26;
  }
  v14 = a1[2];
  if ( !v14 )
    v14 = (_QWORD *)**a1;
  v15 = MNGetPopupFromMenu(v14, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, v15);
  if ( *(_QWORD *)v21[0] )
    xxxMNUpdateShownMenu(v21, 0LL, v7);
LABEL_26:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21);
  return 1LL;
}
