/*
 * XREFs of _GetSubMenu @ 0x1C00BC870
 * Callers:
 *     xxxGetSysMenu @ 0x1C00BBF14 (xxxGetSysMenu.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxSetSysMenu @ 0x1C00BC268 (xxxSetSysMenu.c)
 *     xxxMNKeyDown @ 0x1C0231A20 (xxxMNKeyDown.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0240CA4 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 */

__int64 __fastcall GetSubMenu(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v6, 0LL);
  v7 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v8, a1);
  v8[2] = 0LL;
  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v8[0] + 40LL) + 44LL);
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v8);
  if ( v2 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL);
    if ( v3 )
    {
      v7 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=((__int64)v6, v3);
    }
  }
  v4 = v7;
  if ( !v7 )
    v4 = *(_QWORD *)v6[0];
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v6);
  return v4;
}
