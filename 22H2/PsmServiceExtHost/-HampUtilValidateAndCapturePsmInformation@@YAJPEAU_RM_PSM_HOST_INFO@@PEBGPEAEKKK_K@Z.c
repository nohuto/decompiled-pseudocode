/*
 * XREFs of ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180035BC8
 * Callers:
 *     ?HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000DE20 (-HamSrvRegisterProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z @ 0x18007A3EC (-HamSrvIsHostBeingDebugged@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_K2@Z.c)
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x180084D2C (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     CempHostInfoInitialize @ 0x18000ECBC (CempHostInfoInitialize.c)
 *     CempHostInfoValidate @ 0x18000F900 (CempHostInfoValidate.c)
 */

__int64 __fastcall HampUtilValidateAndCapturePsmInformation(
        STRSAFE_LPWSTR pszDest,
        STRSAFE_PCNZWCH pszSrc,
        PSID SourceSid,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  __int64 result; // rax

  result = CempHostInfoValidate((__int64)pszSrc, SourceSid, a4, a4, a6, a7);
  if ( (int)result < 0 )
  {
    if ( (unsigned int)(result + 1073741585) <= 5 )
      return (unsigned int)(result + 1);
  }
  else
  {
    CempHostInfoInitialize(pszSrc, SourceSid, a5, a6, a7, pszDest);
    return 0LL;
  }
  return result;
}
