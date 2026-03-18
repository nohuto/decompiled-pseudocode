/*
 * XREFs of SET_PDO_SWPNPSTATE @ 0x1C0053FE8
 * Callers:
 *     UsbhCreatePdo @ 0x1C00542B4 (UsbhCreatePdo.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0057150 (UsbhPdoPnp_RemoveDevice.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0057340 (UsbhPdoPnp_StartDevice.c)
 *     UsbhPdoPnp_StopDevice @ 0x1C00577B0 (UsbhPdoPnp_StopDevice.c)
 *     UsbhPdoPnp_SurpriseRemoveDevice @ 0x1C00578C0 (UsbhPdoPnp_SurpriseRemoveDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 */

_DWORD *__fastcall SET_PDO_SWPNPSTATE(__int64 a1, int a2, int a3)
{
  _DWORD *result; // rax
  __int64 v6; // r9

  result = PdoExt(a1);
  v6 = ((unsigned __int8)result[3] + 1) & 7;
  result[3] = v6;
  v6 *= 32LL;
  *(_DWORD *)((char *)result + v6 + 528) = a3;
  *(_DWORD *)((char *)result + v6 + 532) = result[280];
  *(_DWORD *)((char *)result + v6 + 536) = a2;
  result[280] = a2;
  return result;
}
