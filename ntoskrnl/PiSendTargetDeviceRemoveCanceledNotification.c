/*
 * XREFs of PiSendTargetDeviceRemoveCanceledNotification @ 0x14096EB08
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x14096EC0C (PipProcessQueryRemovalInKernelMode.c)
 *     PipSendTargetDeviceQueryRemoveNotification @ 0x14096EEA8 (PipSendTargetDeviceQueryRemoveNotification.c)
 * Callees:
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 */

__int64 __fastcall PiSendTargetDeviceRemoveCanceledNotification(__int64 a1, unsigned int a2)
{
  unsigned int i; // ebx
  _QWORD *v5; // rdx
  __int64 v6; // rcx
  int v7; // ecx
  __int64 result; // rax

  if ( a2 )
  {
    for ( i = 0; i < a2; ++i )
    {
      v5 = *(_QWORD **)(a1 + 8LL * (a2 - i - 1));
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5[39] + 40LL);
        if ( v6 )
        {
          v7 = *(_DWORD *)(v6 + 300);
          result = (unsigned int)(v7 - 769);
          if ( (unsigned int)result <= 3 || v7 == 788 )
            continue;
        }
      }
      result = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_REMOVE_CANCELLED, v5, 0LL, 0LL);
    }
  }
  return result;
}
