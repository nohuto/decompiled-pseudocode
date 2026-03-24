/*
 * XREFs of ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C02431F0
 * Callers:
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0235D70 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C02394F8 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024A5F0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetUserHandedness @ 0x1C01EE2D0 (GetUserHandedness.c)
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
