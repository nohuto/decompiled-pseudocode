/*
 * XREFs of ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x180034F78
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180019690 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180034FDC (-HampUserReleaseLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z @ 0x180035010 (-HampUserAcquireLockShared@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003CAB0 (-HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 */

__int64 __fastcall HampUserTryGetContextToken(struct _HAM_USER *a1, unsigned __int64 *a2)
{
  int refreshed; // eax

  HampUserAcquireLockShared(a1);
  if ( (*((_BYTE *)a1 + 192) & 2) != 0 )
  {
    *a2 = *((_QWORD *)a1 + 23);
    HampUserReleaseLockShared(a1);
    return 0;
  }
  else
  {
    HampUserReleaseLockShared(a1);
    refreshed = HampUserTryRefreshContextToken(a1, a2);
    if ( refreshed >= 0 )
      return 0;
    return (unsigned int)refreshed;
  }
}
