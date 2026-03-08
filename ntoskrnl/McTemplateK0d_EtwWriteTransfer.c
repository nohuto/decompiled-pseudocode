/*
 * XREFs of McTemplateK0d_EtwWriteTransfer @ 0x14055D19C
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x1406C46EC (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PiSwIrpStartCreate @ 0x1408085B8 (PiSwIrpStartCreate.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0d_EtwWriteTransfer(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4)
{
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+30h] [rbp-38h] BYREF
  int *v6; // [rsp+40h] [rbp-28h]
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]
  int v9; // [rsp+88h] [rbp+20h] BYREF

  v9 = a4;
  v6 = &v9;
  v8 = 0;
  v7 = 4;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v5);
}
