/*
 * XREFs of ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E6418
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E6418 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?GetMenuAncestors@@YAIAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E6418 (-GetMenuAncestors@@YAIAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

__int64 __fastcall GetMenuAncestors(__int64 a1)
{
  unsigned int v1; // edi
  _QWORD *v2; // rsi
  unsigned int MenuAncestors; // ebx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v2 = *(_QWORD **)(**(_QWORD **)a1 + 104LL);
  while ( v2 )
  {
    SmartObjStackRefBase<tagMENU>::Init(v5, v2[1]);
    v5[2] = 0LL;
    MenuAncestors = GetMenuAncestors(v5);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v5);
    v2 = (_QWORD *)*v2;
    if ( MenuAncestors > v1 )
      v1 = MenuAncestors;
  }
  return v1 + 1;
}
