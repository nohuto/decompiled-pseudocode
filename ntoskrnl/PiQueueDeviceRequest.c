/*
 * XREFs of PiQueueDeviceRequest @ 0x14096AF78
 * Callers:
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMDeviceAction @ 0x14096671C (PiCMDeviceAction.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     PnpDeleteDeviceActionRequest @ 0x1402FDD5C (PnpDeleteDeviceActionRequest.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PnpCancelDeviceActionRequest @ 0x140560204 (PnpCancelDeviceActionRequest.c)
 *     PnpRemoveDeviceActionRequestFromQueue @ 0x14056025C (PnpRemoveDeviceActionRequestFromQueue.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 */

__int64 __fastcall PiQueueDeviceRequest(__int64 a1, int a2, int a3, unsigned __int64 a4)
{
  _QWORD *v7; // rax
  void *v8; // rsi
  unsigned int v9; // ebx
  int v10; // eax
  volatile signed __int32 *v11; // rdi
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF
  volatile signed __int32 *v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  memset(&Event, 0, sizeof(Event));
  if ( a4 )
    *(_DWORD *)a4 = 0;
  v7 = PnpDeviceObjectFromDeviceInstanceWithTag(a1, 0x43706E50u);
  v8 = v7;
  if ( v7 )
  {
    if ( *(_QWORD *)(v7[39] + 40LL) )
    {
      if ( a3 )
        KeInitializeEvent(&Event, NotificationEvent, 0);
      v10 = PnpRequestDeviceAction(
              v8,
              a2,
              0,
              0LL,
              (unsigned __int64)&Event & -(__int64)(a3 != 0),
              a4 & -(__int64)(a3 != 0),
              (__int64 *)((unsigned __int64)&v14 & -(__int64)(a3 != 0)));
      v11 = v14;
      v9 = v10;
      if ( v10 >= 0 )
      {
        if ( a3 )
        {
          v9 = KeWaitForSingleObject(&Event, Executive, 0, 1u, 0LL);
          if ( v9 == 257 )
          {
            if ( (unsigned int)PnpRemoveDeviceActionRequestFromQueue(v11) )
            {
              v9 = -1073741536;
            }
            else
            {
              PnpCancelDeviceActionRequest((__int64)v11);
              v9 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            }
          }
        }
      }
      if ( v11 )
        PnpDeleteDeviceActionRequest(v11);
    }
    else
    {
      v9 = -1073741810;
    }
    ObfDereferenceObjectWithTag(v8, 0x43706E50u);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return v9;
}
