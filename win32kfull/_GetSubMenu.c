/*
 * XREFs of _GetSubMenu @ 0x1C002165C
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxMNKeyDown @ 0x1C021ABF8 (xxxMNKeyDown.c)
 *     xxxGetSysMenu @ 0x1C0224EB0 (xxxGetSysMenu.c)
 *     xxxSetSysMenu @ 0x1C0224F64 (xxxSetSysMenu.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C022C368 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
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
      SmartObjStackRefBase<tagMENU>::operator=(v6, v3);
    }
  }
  v4 = v7;
  if ( !v7 )
    v4 = *(_QWORD *)v6[0];
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v6);
  return v4;
}
