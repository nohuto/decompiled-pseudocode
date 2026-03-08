/*
 * XREFs of _HasCaptionIcon @ 0x1C00A47EC
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C004524C (xxxInitSendValidateMinMaxInfoEx.c)
 *     SendDwmIconChange @ 0x1C00A1060 (SendDwmIconChange.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00A3E1C (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     FindNCHit @ 0x1C00E609C (FindNCHit.c)
 *     xxxMNFindWindowFromPoint @ 0x1C021A850 (xxxMNFindWindowFromPoint.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 *     xxxGetMenuBarInfo @ 0x1C0233A80 (xxxGetMenuBarInfo.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00E02D4 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall HasCaptionIcon(__int64 a1)
{
  _BYTE *v1; // r8
  unsigned int v2; // ebx
  char v4; // dl
  char v5; // cl
  char v7; // di
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdi
  bool v12; // zf
  _QWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(_BYTE **)(a1 + 40);
  v2 = 0;
  v4 = 0;
  v5 = v1[24];
  if ( v5 < 0 )
    return 0LL;
  if ( (v1[30] & 0xC0) != 0x40 && (v5 & 1) == 0 )
    return 1LL;
  if ( (v1[21] & 2) != 0
    || (SmartObjStackRefBase<tagCLS>::Init(v13, *(_QWORD *)(a1 + 136)),
        v4 = 1,
        v7 = 1,
        **(_WORD **)(*(_QWORD *)v13[0] + 8LL) != 0x8002) )
  {
    v7 = 0;
  }
  if ( (v4 & 1) != 0 )
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v13);
  if ( v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(v8 + 264);
  if ( v9 )
  {
    v12 = v9 == *(_QWORD *)(gpsi + 6968LL);
  }
  else
  {
    v10 = *(_QWORD *)(v8 + 272);
    if ( v10 && v10 != *(_QWORD *)(gpsi + 6976LL) )
      return 1LL;
    SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(a1 + 136));
    v11 = *(_QWORD *)v14[0];
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64)v14);
    if ( !*(_QWORD *)(v11 + 112) )
      return 0LL;
    v12 = *(_QWORD *)(v11 + 112) == _HMObjectFromHandle(*(_QWORD *)(gpsi + 6968LL));
  }
  LOBYTE(v2) = !v12;
  return v2;
}
