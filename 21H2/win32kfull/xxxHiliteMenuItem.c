/*
 * XREFs of xxxHiliteMenuItem @ 0x1C0244CA8
 * Callers:
 *     NtUserHiliteMenuItem @ 0x1C01F7A90 (NtUserHiliteMenuItem.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x1C014F6C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 *     xxxMNInvertItem @ 0x1C0248188 (xxxMNInvertItem.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C024A058 (xxxMNRecomputeBarIfNeeded.c)
 */

__int64 __fastcall xxxHiliteMenuItem(__int64 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  char v4; // si
  unsigned int TopLevelMenuIndex; // edi
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  TopLevelMenuIndex = a3;
  if ( (a4 & 0x400) == 0 )
    TopLevelMenuIndex = UT_FindTopLevelMenuIndex(a2, a3);
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) == 0 )
    xxxMNRecomputeBarIfNeeded(a1, a2);
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v9, 0LL);
  xxxMNInvertItem(v9, a2, TopLevelMenuIndex, a1, v4 & 0x80);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v9);
  return 1LL;
}
