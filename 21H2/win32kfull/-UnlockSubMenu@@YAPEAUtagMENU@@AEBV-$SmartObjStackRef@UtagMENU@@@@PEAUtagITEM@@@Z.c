/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0069260
 * Callers:
 *     MNFreeItem @ 0x1C0065704 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C0068DF0 (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01076C4 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

__int64 __fastcall UnlockSubMenu(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = a2 + 16;
  if ( !*(_QWORD *)(a2 + 16) )
    return 0LL;
  RemoveParentMenu(a1, a2);
  *(_QWORD *)(*(_QWORD *)(v2 - 16) + 16LL) = 0LL;
  return HMAssignmentUnlock(v2);
}
