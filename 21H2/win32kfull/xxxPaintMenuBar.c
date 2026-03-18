/*
 * XREFs of xxxPaintMenuBar @ 0x1C00BCDEC
 * Callers:
 *     NtUserPaintMenuBar @ 0x1C00BCCC0 (NtUserPaintMenuBar.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     xxxSendUAHMenuMessage @ 0x1C00BD2C0 (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00BD464 (xxxSendUAHInitMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00BD4E0 (xxxMenuDraw.c)
 *     xxxMenuBarCompute @ 0x1C00C2488 (xxxMenuBarCompute.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxPaintMenuBar(__int64 a1, HDC a2, LONG a3, int a4, LONG a5, char a6)
{
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v25; // rdx
  __int64 v26; // rsi
  _QWORD v27[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int128 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v10 = *(_QWORD *)(a1 + 168);
  v30 = 0LL;
  v11 = 0;
  v32 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v31 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v27, v10);
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
  {
    v12 = v28;
    if ( !v28 )
      v12 = *(_QWORD *)v27[0];
    *(_DWORD *)(*(_QWORD *)(v12 + 40) + 40LL) |= 0x200u;
    ThreadLock(v12, (__int64 *)&v29);
    v13 = *(_QWORD *)(*(_QWORD *)v27[0] + 40LL);
    if ( (a6 & 1) != 0 )
      *(_DWORD *)(v13 + 40) &= ~0x10u;
    else
      *(_DWORD *)(v13 + 40) |= 0x10u;
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 96LL) - *(_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL) - a3 - a4;
    v15 = *(_QWORD *)(*(_QWORD *)v27[0] + 80LL);
    ThreadLock(v15, (__int64 *)&v31);
    if ( a1 != *(_QWORD *)(*(_QWORD *)v27[0] + 80LL)
      || !*(_DWORD *)(*(_QWORD *)v27[0] + 64LL)
      || (v18 = *(_QWORD *)v27[0], !*(_DWORD *)(*(_QWORD *)v27[0] + 68LL)) )
    {
      xxxMenuBarCompute((unsigned int)v27, a1, a5, a3, v14);
    }
    if ( gihmodUserApiHook >= 0 && v15 && (unsigned int)xxxSendUAHInitMenuMessage(v15, v27, a2) )
    {
      v19 = v28;
      if ( !v28 )
        v19 = *(_QWORD *)v27[0];
      xxxSendUAHMenuMessage(v15, 145LL, v19, a2);
    }
    ThreadUnlock1(v18, v16, v17);
    if ( v28 )
      v20 = v28;
    else
      v20 = *(_QWORD *)v27[0];
    if ( (unsigned int)MNIsUAHMenu(v20) )
    {
      xxxMenuDraw(a2);
    }
    else
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 24LL) )
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v27[0] + 40LL) + 24LL);
      else
        v25 = *(_QWORD *)(gpsi + 4936LL);
      v26 = GreSelectBrush(a2, v25);
      NtGdiPatBlt(a2, a3, a5, *(_DWORD *)(*(_QWORD *)v27[0] + 64LL), *(_DWORD *)(*(_QWORD *)v27[0] + 68LL), 15728673);
      xxxMenuDraw(a2);
      GreSelectBrush(a2, v26);
    }
    v11 = *(_DWORD *)(*(_QWORD *)v27[0] + 68LL);
    v23 = *(_QWORD *)(*((_QWORD *)&v29 + 1) + 40LL);
    *(_DWORD *)(v23 + 40) &= ~0x200u;
    ThreadUnlock1(v23, v21, v22);
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v27);
  return v11;
}
