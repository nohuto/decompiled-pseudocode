/*
 * XREFs of ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C022A9CC
 * Callers:
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0218C94 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C02353CC (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetUserHandedness @ 0x1C01C4370 (GetUserHandedness.c)
 */

bool __fastcall MenuHelpers::GetMenuRightAlignHint(MenuHelpers *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 13
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 11 )
  {
    return (unsigned int)GetUserHandedness(v2, v1, v3, v4) == 1;
  }
  else
  {
    return (unsigned int)RIMIsDefaultUILanguageRTL(v2, v1, v3, v4) != 0;
  }
}
