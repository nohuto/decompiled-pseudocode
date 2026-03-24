/*
 * XREFs of NtGdiDdDDISharedPrimaryUnLockNotification @ 0x1C0277B20
 * Callers:
 *     <none>
 * Callees:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0275B98 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryUnLockNotification(ULONG64 a1)
{
  struct _LUID *v1; // rdx

  v1 = (struct _LUID *)a1;
  if ( gbDisableLddmSpriteTearDown )
    return 0LL;
  if ( a1 >= MmUserProbeAddress )
    v1 = (struct _LUID *)MmUserProbeAddress;
  return DxLddmSharedPrimaryUnLockNotification(*v1, v1[1].LowPart);
}
