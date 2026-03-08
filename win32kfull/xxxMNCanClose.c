/*
 * XREFs of xxxMNCanClose @ 0x1C00A4C44
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A3E1C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     ?xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z @ 0x1C01BA638 (-xxxDCECalcCaptionButton@@YAXPEAUtagWND@@HPEAG@Z.c)
 *     xxxCalcCaptionButton @ 0x1C022EAF0 (xxxCalcCaptionButton.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00A4DDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1C00A8678 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxMNCanClose(__int64 a1)
{
  char v2; // si
  __int64 ThreadWin32Thread; // rax
  __int64 SysMenuPtr; // rax
  unsigned int v5; // ebx
  bool v6; // di
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h]
  _QWORD v17[3]; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v14 = (_QWORD *)gSmartObjNullRef;
  v15 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v15;
  v16 = 0LL;
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL) + 9LL) & 2) != 0 )
    goto LABEL_16;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v16 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(&v14, SysMenuPtr);
  v5 = 1;
  v6 = 1;
  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v14) )
  {
    SmartObjStackRefBase<tagMENU>::Init(v17, *v14);
    v17[2] = v16;
    SmartObjStackRefBase<tagMENU>::operator=(&v14, *(_QWORD *)v17[0]);
    v2 = 1;
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(&v14) )
      v6 = 0;
  }
  if ( (v2 & 1) != 0 )
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v17);
  if ( v6 )
  {
LABEL_16:
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(&v14);
    return 0LL;
  }
  else
  {
    v7 = v16;
    if ( !v16 )
      v7 = *v14;
    v8 = MNLookUpItem(v7, 61536LL, 0LL, 0LL);
    if ( !v8 )
    {
      v12 = v16;
      if ( !v16 )
        v12 = *v14;
      v8 = MNLookUpItem(v12, 32864LL, 0LL, 0LL);
      if ( !v8 )
      {
        v13 = v16;
        if ( !v16 )
          v13 = *v14;
        v8 = MNLookUpItem(v13, 49264LL, 0LL, 0LL);
        if ( !v8 )
          goto LABEL_18;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 4LL) & 3) != 0 )
LABEL_18:
      v5 = 0;
    v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(&v14);
    v10 = *(_QWORD **)(v9 + 1512);
    if ( v10 )
      *(_QWORD *)(v9 + 1512) = *v10;
    return v5;
  }
}
