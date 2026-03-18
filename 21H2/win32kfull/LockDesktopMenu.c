/*
 * XREFs of LockDesktopMenu @ 0x1C0114C94
 * Callers:
 *     xxxLoadSysDesktopMenu @ 0x1C0114BD8 (xxxLoadSysDesktopMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0240CA4 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall LockDesktopMenu(__int64 a1, _QWORD **a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v12, 0LL);
  v4 = 0;
  v13 = 0LL;
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a2)
    && *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 44LL)
    && *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL) )
  {
    *(_DWORD *)(*(_QWORD *)(**a2 + 40LL) + 40LL) |= 0x40u;
    v5 = a2[2];
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 40LL) + 56LL) + 16LL);
    if ( !v5 )
      v5 = (_QWORD *)**a2;
    HMChangeOwnerProcess(v5, v6);
    v7 = *(_QWORD *)(*(_QWORD *)(**a2 + 88LL) + 16LL);
    v13 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v12, v7);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v12[0] + 40LL) + 40LL) |= 0x40u;
    v8 = v13;
    if ( !v13 )
      v8 = *(_QWORD *)v12[0];
    HMChangeOwnerProcess(v8, v6);
    v9 = a2[2];
    if ( !v9 )
      v9 = (_QWORD *)**a2;
    v11[0] = a1;
    v11[1] = v9;
    HMAssignmentLock(v11, 0LL);
    v4 = 1;
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v12);
  return v4;
}
