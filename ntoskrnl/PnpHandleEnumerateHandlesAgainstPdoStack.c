/*
 * XREFs of PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14055EB08
 * Callers:
 *     PnpCollectOpenHandles @ 0x14096114C (PnpCollectOpenHandles.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140240954 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140955108 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstPdoStack(PVOID *Object, __int64 a2, __int64 a3)
{
  PVOID *v4; // rdi
  unsigned int v5; // ebp
  KIRQL v6; // al
  PVOID v7; // rcx
  void *v8; // rsi
  KIRQL v9; // bl
  void *DeviceAttachmentBaseRefWithTag; // rbx
  KIRQL v11; // al
  PVOID *v12; // rbx
  KIRQL v13; // si

  v4 = Object;
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  while ( 1 )
  {
    v5 = PnpHandleEnumerateHandlesAgainstDeviceObject(v4, PnpCollectOpenHandlesCallBack, a3);
    if ( v5 )
      break;
    v6 = KeAcquireQueuedSpinLock(9uLL);
    v7 = v4[7];
    v8 = 0LL;
    v9 = v6;
    if ( v7 )
    {
      v8 = (void *)*((_QWORD *)v7 + 1);
      if ( v8 )
        ObfReferenceObjectWithTag(*((PVOID *)v7 + 1), 0x746C6644u);
    }
    KeReleaseQueuedSpinLock(9uLL, v9);
    if ( v8 )
    {
      DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)v8, 0x746C6644u);
      v5 = PnpHandleEnumerateHandlesAgainstDeviceObject(
             DeviceAttachmentBaseRefWithTag,
             PnpCollectOpenHandlesCallBack,
             a3);
      ObfDereferenceObjectWithTag(DeviceAttachmentBaseRefWithTag, 0x746C6644u);
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      if ( v5 )
        break;
    }
    v11 = KeAcquireQueuedSpinLock(0xAuLL);
    v12 = (PVOID *)v4[3];
    v13 = v11;
    if ( v12 )
      ObfReferenceObjectWithTag(v4[3], 0x746C6644u);
    KeReleaseQueuedSpinLock(0xAuLL, v13);
    ObfDereferenceObjectWithTag(v4, 0x746C6644u);
    v4 = v12;
    if ( !v12 )
      return v5;
  }
  ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return v5;
}
