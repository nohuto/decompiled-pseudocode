/*
 * XREFs of IoGetLowerDeviceObjectWithTag @ 0x140365D8C
 * Callers:
 *     IoGetLowerDeviceObject @ 0x140365D70 (IoGetLowerDeviceObject.c)
 *     IopSynchronousCall @ 0x1407688B4 (IopSynchronousCall.c)
 *     PiControlGetDeviceStack @ 0x140856970 (PiControlGetDeviceStack.c)
 *     IoBuildPoDeviceNotifyList @ 0x140A9E1B8 (IoBuildPoDeviceNotifyList.c)
 *     IopCheckDeviceFlags @ 0x140A9E930 (IopCheckDeviceFlags.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

void *__fastcall IoGetLowerDeviceObjectWithTag(__int64 a1, ULONG a2)
{
  KIRQL v4; // di
  __int64 v5; // rax
  void *v6; // rbx
  int v7; // ecx
  void *v8; // rax

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *(_QWORD *)(a1 + 312);
  v6 = 0LL;
  v7 = *(_DWORD *)(v5 + 32);
  if ( (v7 & 0xF) == 0 || (v7 & 0xE) == 0 && *(_QWORD *)(v5 + 48) )
  {
    v8 = *(void **)(v5 + 48);
    if ( v8 )
    {
      v6 = v8;
      ObfReferenceObjectWithTag(v8, a2);
    }
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return v6;
}
