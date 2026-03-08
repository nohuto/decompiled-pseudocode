/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C0044248
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C00443E0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0044460 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044500 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00446A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0044890 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0044A00 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1C0044B44 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1C005BA60 (UsbhEtwLogHubInformation.c)
 */

unsigned __int64 __fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // r9
  unsigned __int64 result; // rax

  v5 = FdoExt(a1);
  v6 = ((unsigned __int8)v5[6] + 1) & 7;
  v5[6] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)v5 + v6 + 28) = a3;
  *(_DWORD *)((char *)v5 + v6 + 32) = v5[340];
  *(_DWORD *)((char *)v5 + v6 + 36) = a2;
  result = (unsigned int)v5[340];
  if ( a2 != (_DWORD)result )
  {
    if ( (_DWORD)result == 5 )
    {
      result = UsbhEtwLogHubInformation(v5, &USBHUB_ETW_EVENT_HUB_REMOVE);
    }
    else if ( a2 == 5 )
    {
      UsbhEtwLogHubInformation(v5, &USBHUB_ETW_EVENT_HUB_START);
      goto LABEL_14;
    }
  }
  switch ( a2 )
  {
    case 1:
      result = (unsigned __int64)Usbh_FDO_WaitPnpAdd;
      goto LABEL_20;
    case 2:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStart;
      goto LABEL_20;
    case 3:
      *((_QWORD *)v5 + 171) = 0LL;
      break;
    case 4:
      result = (unsigned __int64)Usbh_FDO_WaitPnpRemove;
      goto LABEL_20;
    case 5:
LABEL_14:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStop;
      goto LABEL_20;
    case 6:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStop_CB;
      goto LABEL_20;
    case 7:
      result = (unsigned __int64)Usbh_FDO_WaitPnpRestart;
LABEL_20:
      *((_QWORD *)v5 + 171) = result;
      break;
  }
  v5[340] = a2;
  return result;
}
