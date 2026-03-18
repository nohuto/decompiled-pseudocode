/*
 * XREFs of _HasCaptionIcon @ 0x1C00684C0
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0066D38 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     SendDwmIconChange @ 0x1C0085110 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     xxxGetMenuBarInfo @ 0x1C00BB868 (xxxGetMenuBarInfo.c)
 *     FindNCHit @ 0x1C010C5EC (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  _BYTE *v1; // r8
  unsigned int v2; // ebx
  char v4; // dl
  char v5; // cl
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 0;
  v4 = 0;
  v5 = v1[24];
  if ( v5 < 0 )
    return 0LL;
  if ( (v1[30] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1LL;
  if ( (v1[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v12, *(_QWORD *)(a1 + 136)),
        v4 = 1,
        v7 = 1,
        **(_WORD **)(*(_QWORD *)v12[0] + 8LL) != 0x8002) )
  {
    v7 = 0;
  }
  if ( (v4 & 1) != 0 )
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v12);
  if ( v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 264);
  if ( !v9 )
  {
    v10 = *(_QWORD *)(v8 + 272);
    if ( v10 && v10 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v13, *(_QWORD *)(a1 + 136));
    v11 = *(_QWORD *)v13[0];
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
    if ( *(_QWORD *)(v11 + 112) )
    {
      if ( *(_QWORD *)(v11 + 112) != _HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL)) )
        return 1LL;
    }
    return 0LL;
  }
  LOBYTE(v2) = v9 != *(_QWORD *)(gpsi + 6968LL);
  return v2;
}
