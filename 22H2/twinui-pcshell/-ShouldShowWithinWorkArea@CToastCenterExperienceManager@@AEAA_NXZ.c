/*
 * XREFs of ?ShouldShowWithinWorkArea@CToastCenterExperienceManager@@AEAA_NXZ @ 0x18009B110
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x180234354 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ??$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x1802304EC (--$wnf_query_nothrow@K@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAKPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

char __fastcall CToastCenterExperienceManager::ShouldShowWithinWorkArea(CToastCenterExperienceManager *this)
{
  char v2; // bl
  bool v3; // zf
  char v5; // [rsp+38h] [rbp+10h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( !IsPPIEdition() )
  {
    v3 = *((_BYTE *)this + 424) == 0;
    return !v3;
  }
  v3 = *((_BYTE *)this + 424) == 0;
  if ( !*((_BYTE *)this + 424) )
    return !v3;
  v5 = 0;
  v6 = 0;
  if ( (int)wil::wnf_query_nothrow<unsigned long>(&WNF_SHEL_LOCKSCREEN_ACTIVE, &v5, &v6) < 0 || !v5 || !v6 )
    return 1;
  return v2;
}
