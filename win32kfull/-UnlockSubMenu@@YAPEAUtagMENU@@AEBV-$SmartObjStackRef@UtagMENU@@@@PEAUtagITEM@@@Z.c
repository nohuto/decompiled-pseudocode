/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00A1018
 * Callers:
 *     MNFreeItem @ 0x1C00A25D0 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E6550 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

__int64 __fastcall UnlockSubMenu(__int64 a1, _QWORD *a2)
{
  if ( !a2[2] )
    return 0LL;
  RemoveParentMenu();
  *(_QWORD *)(*a2 + 16LL) = 0LL;
  return HMAssignmentUnlock(a2 + 2);
}
