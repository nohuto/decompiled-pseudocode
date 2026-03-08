/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C005BD4C
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C002BEBC (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwRundown @ 0x1C005BED0 (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     __security_check_cookie @ 0x1C0022A90 (__security_check_cookie.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005B848 (UsbhEtwLogHubEventWithExtraData.c)
 */

_DWORD *__fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rsi
  unsigned __int16 v4; // bx
  __int64 v5; // r12
  _DWORD *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rbp
  _TBYTE v9; // [rsp+30h] [rbp-48h] BYREF

  result = 0LL;
  v9 = 0.0;
  if ( dword_1C006B690 )
  {
    v3 = FdoExt(a1);
    v4 = 1;
    v5 = *((_QWORD *)v3 + 377);
    while ( 1 )
    {
      result = FdoExt(a1);
      if ( v4 > *((unsigned __int8 *)result + 2938) )
        break;
      UsbhGetPortData(a1, v4);
      v6 = (_DWORD *)(v5 + 4LL * v4);
      UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, v4, (__int64)v6, 4);
      v7 = *((_QWORD *)v3 + 378);
      if ( v7 )
      {
        v8 = 28LL * v4;
        if ( (*v6 & 0x20) != 0 )
        {
          LOBYTE(v9) = *(_BYTE *)(v7 + 28LL * v4);
          BYTE1(v9) = *(_BYTE *)(*((_QWORD *)v3 + 378) + v8 + 1);
          *(_DWORD *)((char *)&v9 + 2) = *(_DWORD *)(*((_QWORD *)v3 + 378) + v8 + 4);
          *(_DWORD *)((char *)&v9 + 6) = *(_DWORD *)(*((_QWORD *)v3 + 378) + v8 + 8);
          UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, v4, (__int64)&v9, 10);
          v7 = *((_QWORD *)v3 + 378);
        }
        if ( (*v6 & 0x40) != 0 )
          UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE, v4, v8 + v7 + 12, 16);
      }
      ++v4;
    }
  }
  return result;
}
