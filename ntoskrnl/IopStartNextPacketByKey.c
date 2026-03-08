/*
 * XREFs of IopStartNextPacketByKey @ 0x140555718
 * Callers:
 *     IoStartNextPacketByKey @ 0x140554E90 (IoStartNextPacketByKey.c)
 *     IopStartNextPacketByKeyEx @ 0x1405557DC (IopStartNextPacketByKeyEx.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KeRemoveByKeyDeviceQueue @ 0x140570D20 (KeRemoveByKeyDeviceQueue.c)
 */

void __fastcall IopStartNextPacketByKey(__int64 a1, int a2, ULONG a3)
{
  KIRQL v3; // si
  PKDEVICE_QUEUE_ENTRY v7; // rax
  PKDEVICE_QUEUE_ENTRY v8; // rdi

  v3 = 0;
  if ( a2 )
    v3 = KeAcquireQueuedSpinLock(7uLL);
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = KeRemoveByKeyDeviceQueue((PKDEVICE_QUEUE)(a1 + 160), a3);
  if ( v7 )
  {
    v8 = v7 - 5;
    *(_QWORD *)(a1 + 32) = v7 - 5;
    if ( a2 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 312) + 64LL) & 0x200) != 0 )
        v8[4].DeviceListEntry.Blink = 0LL;
      KeReleaseQueuedSpinLock(7uLL, v3);
    }
    (*(void (__fastcall **)(__int64, PKDEVICE_QUEUE_ENTRY))(*(_QWORD *)(a1 + 8) + 96LL))(a1, v8);
  }
  else if ( a2 )
  {
    KeReleaseQueuedSpinLock(7uLL, v3);
  }
}
