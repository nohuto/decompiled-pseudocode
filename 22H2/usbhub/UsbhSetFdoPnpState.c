/*
 * XREFs of UsbhSetFdoPnpState @ 0x1C0044C50
 * Callers:
 *     Usbh_FDO_WaitPnpAdd @ 0x1C0044DE0 (Usbh_FDO_WaitPnpAdd.c)
 *     Usbh_FDO_WaitPnpRemove @ 0x1C0044E60 (Usbh_FDO_WaitPnpRemove.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C0044F00 (Usbh_FDO_WaitPnpRestart.c)
 *     Usbh_FDO_WaitPnpStart @ 0x1C00450A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpStop @ 0x1C0045290 (Usbh_FDO_WaitPnpStop.c)
 *     Usbh_FDO_WaitPnpStop_CB @ 0x1C0045400 (Usbh_FDO_WaitPnpStop_CB.c)
 *     Usbh_PnpRemove @ 0x1C0045544 (Usbh_PnpRemove.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhEtwLogHubInformation @ 0x1C005C820 (UsbhEtwLogHubInformation.c)
 */

unsigned __int64 __fastcall UsbhSetFdoPnpState(__int64 a1, int a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 v6; // r9
  unsigned __int64 result; // rax
  void *v8; // rdx

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
      v8 = &USBHUB_ETW_EVENT_HUB_REMOVE;
    }
    else
    {
      if ( a2 != 5 )
        goto LABEL_7;
      v8 = &USBHUB_ETW_EVENT_HUB_START;
    }
    result = UsbhEtwLogHubInformation(v5, v8);
  }
LABEL_7:
  switch ( a2 )
  {
    case 1:
      result = (unsigned __int64)Usbh_FDO_WaitPnpAdd;
      goto LABEL_21;
    case 2:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStart;
      goto LABEL_21;
    case 3:
      *((_QWORD *)v5 + 171) = 0LL;
      break;
    case 4:
      result = (unsigned __int64)Usbh_FDO_WaitPnpRemove;
      goto LABEL_21;
    case 5:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStop;
      goto LABEL_21;
    case 6:
      result = (unsigned __int64)Usbh_FDO_WaitPnpStop_CB;
      goto LABEL_21;
    case 7:
      result = (unsigned __int64)Usbh_FDO_WaitPnpRestart;
LABEL_21:
      *((_QWORD *)v5 + 171) = result;
      break;
  }
  v5[340] = a2;
  return result;
}
