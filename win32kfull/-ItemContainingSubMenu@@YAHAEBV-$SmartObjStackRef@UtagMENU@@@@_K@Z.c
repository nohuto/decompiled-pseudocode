/*
 * XREFs of ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C0232ED8
 * Callers:
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C0232ED8 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0232F94 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C0232ED8 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall ItemContainingSubMenu(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  _QWORD *i; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(**(_QWORD **)a1 + 40LL);
  v4 = *(_DWORD *)(v3 + 44) - 1;
  if ( !*(_DWORD *)(v3 + 44) )
    return v4 | (unsigned int)v3;
  for ( i = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 88LL) + 96LL * (int)v4); (v4 & 0x80000000) == 0; --v4 )
  {
    v7 = i[2];
    if ( v7 )
    {
      if ( v7 == a2 )
        return v4;
      SmartObjStackRefBase<tagMENU>::Init(v9, v7);
      v9[2] = 0LL;
      v8 = (unsigned int)ItemContainingSubMenu(v9, a2) != -1;
      SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v9);
      if ( v8 )
        return v4;
    }
    else if ( *(_DWORD *)(*i + 8LL) == a2 )
    {
      return v4;
    }
    i -= 12;
  }
  return v4;
}
