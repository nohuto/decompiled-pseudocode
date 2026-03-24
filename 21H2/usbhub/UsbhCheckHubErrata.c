/*
 * XREFs of UsbhCheckHubErrata @ 0x1C00525B0
 * Callers:
 *     UsbhInitialize @ 0x1C002D870 (UsbhInitialize.c)
 * Callees:
 *     UsbhGetRegUsbHubFlags @ 0x1C0046580 (UsbhGetRegUsbHubFlags.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 *     UsbhApplyHubFix @ 0x1C00521B0 (UsbhApplyHubFix.c)
 *     UsbhGetDeviceFlags @ 0x1C0052760 (UsbhGetDeviceFlags.c)
 */

void __fastcall UsbhCheckHubErrata(__int64 a1, __int64 a2, __int64 a3)
{
  const void *v3; // rsi
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(a3) = *(_BYTE *)(a1 + 2560);
  v3 = (const void *)(a1 + 2540);
  v5 = 0LL;
  LOBYTE(a3) = a3 & 1;
  UsbhGetDeviceFlags(a1 + 2540, &v5, a3);
  if ( (v5 & 0x80u) != 0LL )
  {
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 6, usbfile_dq_c, 2681, 0);
    UsbhApplyHubFix((_DWORD *)a1, 6);
  }
  if ( (v5 & 0x100) != 0 )
  {
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 8, usbfile_dq_c, 2689, 0);
    UsbhApplyHubFix((_DWORD *)a1, 8);
  }
  if ( (v5 & 0x200) != 0 )
  {
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 9, usbfile_dq_c, 2698, 0);
    UsbhApplyHubFix((_DWORD *)a1, 9);
  }
  if ( (v5 & 0x400000000LL) != 0 )
  {
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 0x85u, v3, 0x12u, 0, 13, usbfile_dq_c, 2706, 0);
    UsbhApplyHubFix((_DWORD *)a1, 13);
  }
  UsbhGetRegUsbHubFlags((unsigned __int16 *)a1);
}
