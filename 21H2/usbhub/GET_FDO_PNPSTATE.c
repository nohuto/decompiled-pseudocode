/*
 * XREFs of GET_FDO_PNPSTATE @ 0x1C003B4D4
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0043B30 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0043BB0 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_PnpRemove @ 0x1C0044294 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_PNPSTATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[340];
}
