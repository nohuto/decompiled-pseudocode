/*
 * XREFs of NtUserMenuItemFromPoint @ 0x1C01FF910
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078B40 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxMenuItemFromPoint @ 0x1C024EE94 (xxxMenuItemFromPoint.c)
 */

__int64 __fastcall NtUserMenuItemFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+30h] [rbp-40h]
  __int128 v21; // [rsp+38h] [rbp-38h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]
  __int64 v25; // [rsp+A0h] [rbp+30h] BYREF

  v25 = a3;
  v24 = 0LL;
  v22 = 0LL;
  v5 = 1;
  v23 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
    {
      v8 = -1;
      goto LABEL_26;
    }
  }
  else
  {
    v7 = 0LL;
  }
  *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v21;
  *((_QWORD *)&v21 + 1) = v7;
  if ( v7 )
    HMLockObject(v7);
  SmartObjStackRefBase<tagMENU>::Init(v19, 0LL);
  v9 = ValidateHmenu(a2);
  v20 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v19, v9);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v19) )
  {
    v8 = -1;
  }
  else
  {
    if ( v7 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) == 0 )
      {
        v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480);
        if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
        {
          v11 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v10) >> 8)) & 0x1FF) != 0 )
            goto LABEL_21;
          v12 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          v13 = (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) == 2 && (v12 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v12) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v14) & 0x20000000) == 0 )
          {
            v5 = 0;
          }
          if ( v13 != v5 )
LABEL_21:
            TransformPointBetweenCoordinateSpaces(&v25, &v25, v7, 0LL);
        }
      }
    }
    v15 = v20;
    if ( !v20 )
      v15 = *(_QWORD *)v19[0];
    *(_QWORD *)&v23 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v23;
    *((_QWORD *)&v23 + 1) = v15;
    HMLockObject(v15);
    v8 = xxxMenuItemFromPoint(v7, v19, v25);
    ThreadUnlock1(v16);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v19);
  ThreadUnlock1(v17);
LABEL_26:
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
