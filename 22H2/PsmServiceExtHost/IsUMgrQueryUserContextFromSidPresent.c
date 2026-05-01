/*
 * XREFs of IsUMgrQueryUserContextFromSidPresent @ 0x180045080
 * Callers:
 *     ?HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_LICENSE_TYPE@@_K@Z @ 0x180035884 (-HampSystemBeginStoreLicenseAcquisition@@YAJPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x180045380 (ApiSetQueryApiSetPresence_0.c)
 */

char IsUMgrQueryUserContextFromSidPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C10 == 1 )
    return 1;
  if ( dword_1800B3C10 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"BD", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C10 = 2 - (v1 != 0);
  return result;
}
