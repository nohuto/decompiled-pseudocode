/*
 * XREFs of McTemplateK0z_EtwWriteTransfer @ 0x14055EEE8
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14020368C (PnpLogActionQueueEvent.c)
 *     PnpProcessTargetDeviceEvent @ 0x140681D34 (PnpProcessTargetDeviceEvent.c)
 *     PiUpdateGuestAssignedState @ 0x140682FF0 (PiUpdateGuestAssignedState.c)
 *     PnpInsertEventInQueue @ 0x140688D90 (PnpInsertEventInQueue.c)
 *     PiUEventNotifyUserMode @ 0x14068C2D0 (PiUEventNotifyUserMode.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     PiSwCloseDescendants @ 0x1408672DC (PiSwCloseDescendants.c)
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1403BE3A0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0z_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v7);
}
