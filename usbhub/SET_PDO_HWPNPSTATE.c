/*
 * XREFs of SET_PDO_HWPNPSTATE @ 0x1C0036750
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C0001B70 (UsbhBusConnectPdo.c)
 *     UsbhQueryBusRelations @ 0x1C0008DD0 (UsbhQueryBusRelations.c)
 *     UsbhDeregisterPdo @ 0x1C0037578 (UsbhDeregisterPdo.c)
 *     UsbhSoftDisconnectPdo @ 0x1C003A19C (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x1C003A81C (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1C003AB58 (Usbh_BusPnpStop_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1C003B22C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003B488 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhCreatePdo @ 0x1C0053530 (UsbhCreatePdo.c)
 *     UsbhDeleteOrphanPdo @ 0x1C0053EF8 (UsbhDeleteOrphanPdo.c)
 *     UsbhDeletePdo @ 0x1C005409C (UsbhDeletePdo.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_HWPNPSTATE(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)result[1] + 1) & 7;
  result[1] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 16) = a3;
  *(_DWORD *)((char *)result + v6 + 20) = result[281];
  *(_DWORD *)((char *)result + v6 + 24) = a2;
  result[281] = a2;
  return result;
}
