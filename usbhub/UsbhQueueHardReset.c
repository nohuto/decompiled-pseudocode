/*
 * XREFs of UsbhQueueHardReset @ 0x1C003D3B0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x1C00098E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 */

__int64 __fastcall UsbhQueueHardReset(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _BYTE *v5; // rax
  _DWORD *v6; // rax

  v4 = 3;
  FdoExt(a1);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_HARD_RESET_QUEUE);
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 16) == 132 )
    {
      v5 = *(_BYTE **)(a2 + 40);
      if ( v5 )
      {
        if ( !*v5 )
          v4 = 9;
      }
    }
  }
  v6 = FdoExt(a1);
  return UsbhDispatch_HardResetEvent(a1, (__int64)(v6 + 566), v4);
}
