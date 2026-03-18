/*
 * XREFs of _GetMenuDefaultItem @ 0x1C025AD30
 * Callers:
 *     xxxMNDoubleClick @ 0x1C0231350 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0239A8C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025AD30 (_GetMenuDefaultItem.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0066A74 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00685A0 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E7BF4 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025AD30 (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed int v6; // esi
  _QWORD *v7; // rdi
  int v8; // r8d
  int v9; // ecx
  unsigned int MenuDefaultItem; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+30h] [rbp-18h]

  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v15 = 0LL;
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v8 <= 0 )
  {
LABEL_5:
    MenuDefaultItem = -1;
  }
  else
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(*v7 + 4LL);
      if ( (v9 & 0x1000) != 0 && ((v9 & 3) == 0 || (a3 & 1) != 0) )
        break;
      ++v6;
      v7 += 12;
      if ( v6 >= v8 )
        goto LABEL_5;
    }
    if ( (a3 & 2) == 0 )
      goto LABEL_12;
    v12 = v7[2];
    if ( !v12 )
      goto LABEL_12;
    SmartObjStackRefBase<tagMENU>::operator=((__int64)v14, v12);
    v13 = v15;
    if ( !v15 )
      v13 = *(_QWORD *)v14[0];
    MenuDefaultItem = GetMenuDefaultItem(v13, a2, a3);
    if ( MenuDefaultItem == -1 )
    {
LABEL_12:
      if ( a2 )
        MenuDefaultItem = v6;
      else
        MenuDefaultItem = *(_DWORD *)(*v7 + 8LL);
    }
  }
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v14);
  return MenuDefaultItem;
}
