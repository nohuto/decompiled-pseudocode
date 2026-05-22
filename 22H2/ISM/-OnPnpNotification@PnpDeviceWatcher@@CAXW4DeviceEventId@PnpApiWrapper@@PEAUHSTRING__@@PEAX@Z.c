/*
 * XREFs of ?OnPnpNotification@PnpDeviceWatcher@@CAXW4DeviceEventId@PnpApiWrapper@@PEAUHSTRING__@@PEAX@Z @ 0x180033B50
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z @ 0x18009EEC8 (--_GNotificationListEntry@PnpDeviceWatcher@@QEAAPEAXI@Z.c)
 */

void __fastcall PnpDeviceWatcher::OnPnpNotification(int a1, HSTRING a2, __int64 a3)
{
  _QWORD *v6; // rax
  ULONG_PTR v7; // rbx
  HSTRING *v8; // rdi
  unsigned int v9; // edx

  if ( a3 )
  {
    v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = (ULONG_PTR)v6;
    if ( v6 )
    {
      *v6 = 0LL;
      v6[1] = 0LL;
      v6[2] = 0LL;
      v6[3] = 0LL;
      v6[4] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      *(_QWORD *)(v7 + 16) = a3;
      *(_DWORD *)(v7 + 24) = a1;
      v8 = (HSTRING *)(v7 + 32);
      if ( a2 && a2 == *v8
        || (WindowsDeleteString(*v8), *v8 = 0LL, WindowsDuplicateString(a2, (HSTRING *)(v7 + 32)) >= 0) )
      {
        if ( QueueUserAPC(PnpDeviceWatcher::PnpNotificationApc, *(HANDLE *)(a3 + 24), v7) == 1 )
          v7 = 0LL;
      }
      if ( v7 )
        PnpDeviceWatcher::NotificationListEntry::`scalar deleting destructor'(
          (PnpDeviceWatcher::NotificationListEntry *)v7,
          v9);
    }
  }
}
