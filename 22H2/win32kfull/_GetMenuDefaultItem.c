/*
 * XREFs of _GetMenuDefaultItem @ 0x1C025DB9C
 * Callers:
 *     xxxMNDoubleClick @ 0x1C0237DB8 (xxxMNDoubleClick.c)
 *     ?SetupFakeMDIAppStuff@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C023EF0C (-SetupFakeMDIAppStuff@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025DB9C (_GetMenuDefaultItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetMenuDefaultItem @ 0x1C025DB9C (_GetMenuDefaultItem.c)
 */

__int64 __fastcall GetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  signed int v6; // edi
  _QWORD *v7; // rsi
  int v8; // ebp
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int MenuDefaultItem; // ebx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]

  SmartObjStackRefBase<tagMENU>::Init(v14, 0LL);
  v15 = 0LL;
  v6 = 0;
  v7 = *(_QWORD **)(a1 + 88);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  if ( v8 <= 0 )
  {
LABEL_15:
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
        goto LABEL_11;
    }
    if ( (a3 & 2) != 0 )
    {
      v10 = v7[2];
      if ( v10 )
      {
        SmartObjStackRefBase<tagMENU>::operator=(v14, v10);
        v11 = v15;
        if ( !v15 )
          v11 = *(_QWORD *)v14[0];
        MenuDefaultItem = GetMenuDefaultItem(v11, a2, a3);
        if ( MenuDefaultItem != -1 )
          goto LABEL_16;
      }
    }
LABEL_11:
    if ( v6 >= v8 )
      goto LABEL_15;
    if ( a2 )
      MenuDefaultItem = v6;
    else
      MenuDefaultItem = *(_DWORD *)(*v7 + 8LL);
  }
LABEL_16:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v14);
  return MenuDefaultItem;
}
