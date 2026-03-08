/*
 * XREFs of ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0218A2C
 * Callers:
 *     xxxMNButtonUp @ 0x1C02198AC (xxxMNButtonUp.c)
 *     xxxMNDoubleClick @ 0x1C021A56C (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0062470 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     zzzStartFade @ 0x1C01BE6C0 (zzzStartFade.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0219098 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMNCancel @ 0x1C02199C4 (xxxMNCancel.c)
 */

__int64 __fastcall xxxMNDismissWithNotify(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v7; // r14d
  unsigned int v8; // edi
  int v9; // ebx
  int v10; // r8d
  _QWORD v12[4]; // [rsp+30h] [rbp-38h] BYREF

  v7 = a1;
  if ( (**(_DWORD **)a1 & 4) != 0 )
  {
    v8 = 274;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 8) & 0x20000) != 0 )
    {
      v8 = 294;
      goto LABEL_7;
    }
    v8 = 273;
  }
  a4 = *(_DWORD *)(*(_QWORD *)a3 + 8LL);
LABEL_7:
  SmartObjStackRefBase<tagMENU>::Init(v12, *(_QWORD *)(**(_QWORD **)a2 + 40LL));
  v12[2] = 0LL;
  v9 = zzzMNFadeSelection(v12, a3);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v12);
  if ( v9 )
    zzzStartFade();
  v10 = -1;
  if ( v8 != 274 )
    v10 = -3;
  xxxWindowEvent(0x8013u, *(struct tagWND **)(**(_QWORD **)a2 + 16LL), v10, a4, 0);
  return xxxMNCancel(v7, v8);
}
