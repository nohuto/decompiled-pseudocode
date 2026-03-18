/*
 * XREFs of UsbhEtwLogPortInformation @ 0x1C005B45C
 * Callers:
 *     UsbhGetExtendedHubInformation @ 0x1C002B4EC (UsbhGetExtendedHubInformation.c)
 *     UsbhEtwRundown @ 0x1C005B5E4 (UsbhEtwRundown.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C000F370 (UsbhGetPortData.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005AF58 (UsbhEtwLogHubEventWithExtraData.c)
 */

_DWORD *__fastcall UsbhEtwLogPortInformation(__int64 a1)
{
  _DWORD *result; // rax
  _DWORD *v3; // rsi
  unsigned __int16 v4; // bx
  __int64 v5; // r13
  int *v6; // r15
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // r14
  _TBYTE v10; // [rsp+30h] [rbp-48h] BYREF

  result = 0LL;
  v10 = 0.0;
  if ( dword_1C006A690 )
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
      v6 = (int *)(v5 + 4LL * v4);
      UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ATTRIBUTES, v4, (__int64)v6, 4);
      v7 = *((_QWORD *)v3 + 378);
      if ( v7 )
      {
        v8 = *v6;
        v9 = 28LL * v4;
        if ( (*v6 & 0x20) != 0 )
        {
          LOBYTE(v10) = *(_BYTE *)(v9 + v7);
          BYTE1(v10) = *(_BYTE *)(v9 + *((_QWORD *)v3 + 378) + 1);
          *(_DWORD *)((char *)&v10 + 2) = *(_DWORD *)(v9 + *((_QWORD *)v3 + 378) + 4);
          *(_DWORD *)((char *)&v10 + 6) = *(_DWORD *)(v9 + *((_QWORD *)v3 + 378) + 8);
          UsbhEtwLogHubEventWithExtraData(a1, &USBHUB_ETW_EVENT_HUB_PORT_ACPI_UPC_VALUE, v4, (__int64)&v10, 10);
          v8 = *v6;
        }
        if ( (v8 & 0x40) != 0 )
          UsbhEtwLogHubEventWithExtraData(
            a1,
            &USBHUB_ETW_EVENT_HUB_PORT_ACPI_PLD_VALUE,
            v4,
            v9 + *((_QWORD *)v3 + 378) + 12LL,
            16);
      }
      ++v4;
    }
  }
  return result;
}
