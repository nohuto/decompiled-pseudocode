/*
 * XREFs of _HasCaptionIcon @ 0x1C0061D98
 * Callers:
 *     SendDwmIconChange @ 0x1C0038A00 (SendDwmIconChange.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0061054 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0064D40 (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxGetMenuBarInfo @ 0x1C008AAD8 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C0122508 (FindNCHit.c)
 *     xxxDrawCaptionTemp @ 0x1C01590D4 (xxxDrawCaptionTemp.c)
 *     xxxMNFindWindowFromPoint @ 0x1C02386D0 (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF7D0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  _BYTE *v1; // r8
  unsigned int v2; // ebx
  char v4; // dl
  char v5; // cl
  char v7; // si
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  _QWORD *v13; // rcx
  __int64 v14; // rdi
  __int64 ThreadWin32Thread; // rbp
  _QWORD *v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 0;
  v4 = 0;
  v5 = v1[24];
  if ( v5 < 0 )
    return 0LL;
  if ( (v1[30] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1LL;
  if ( (v1[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v17, *(_QWORD *)(a1 + 136)),
        v4 = 1,
        v7 = 1,
        **(_WORD **)(*(_QWORD *)v17[0] + 8LL) != 0x8002) )
  {
    v7 = 0;
  }
  if ( (v4 & 1) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v17);
    v16 = *(_QWORD **)(ThreadWin32Thread + 1472);
    if ( v16 )
      *(_QWORD *)(ThreadWin32Thread + 1472) = *v16;
  }
  if ( v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(v8 + 272);
    if ( v10 && v10 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v18, *(_QWORD *)(a1 + 136));
    v11 = *(_QWORD *)v18[0];
    v12 = W32GetThreadWin32Thread(KeGetCurrentThread());
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v18);
    v13 = *(_QWORD **)(v12 + 1472);
    if ( v13 )
      *(_QWORD *)(v12 + 1472) = *v13;
    v14 = *(_QWORD *)(v11 + 112);
    if ( v14 )
    {
      if ( v14 != _HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v2) = v9 != *(_QWORD *)(gpsi + 6968LL);
  return v2;
}
