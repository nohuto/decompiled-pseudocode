/*
 * XREFs of ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C0232F94
 * Callers:
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C0233070 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxHiliteMenuItem @ 0x1C0233248 (xxxHiliteMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A6450 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C00A75F0 (MNLookUpItem.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00D3DA0 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00D5030 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z @ 0x1C00E5104 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NAEBV0@@Z.c)
 *     ?ItemContainingSubMenu@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_K@Z @ 0x1C0232ED8 (-ItemContainingSubMenu@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_K@Z.c)
 */

__int64 __fastcall UT_FindTopLevelMenuIndex(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+50h] [rbp+10h] BYREF

  v2 = a2;
  SmartObjStackRefBase<tagMENU>::Init(v10, 0LL);
  v11 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)v10[0];
  if ( !v4 )
    v4 = **(_QWORD **)a1;
  v5 = MNLookUpItem(v4, v2, 0, &v12);
  v11 = 0LL;
  v6 = v5;
  SmartObjStackRefBase<tagMENU>::operator=(v10, v12);
  if ( !v6 || *(_QWORD *)(v6 + 16) )
  {
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v10);
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v10, a1) )
    {
      v7 = v2;
    }
    else
    {
      v7 = v11;
      if ( !v11 )
        v7 = *(_QWORD *)v10[0];
    }
    v8 = ItemContainingSubMenu(a1, v7);
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v10);
    return v8;
  }
}
