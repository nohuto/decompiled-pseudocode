/*
 * XREFs of NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C0272B90
 * Callers:
 *     <none>
 * Callees:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0271484 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryUnLockNotification(struct _LUID *a1)
{
  if ( (unsigned int)DxDdIsTearDownLddmSpriteDisabled() )
    return 0LL;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (struct _LUID *)MmUserProbeAddress;
  return DxLddmSharedPrimaryUnLockNotification(*a1, a1[1].LowPart);
}
