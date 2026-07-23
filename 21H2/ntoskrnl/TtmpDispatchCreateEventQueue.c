/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x140900C9C
 * Callers:
 *     TtmDispatchApi @ 0x1409007F4 (TtmDispatchApi.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ObInsertObject @ 0x1406AB4A0 (ObInsertObject.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408FF63C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x140900A94 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 *     TtmiCreateEventQueue @ 0x140905598 (TtmiCreateEventQueue.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, HANDLE *a2)
{
  void *v2; // rcx
  struct _DMA_ADAPTER *v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  PVOID v10[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v11 = 0LL;
  v10[0] = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  inserted = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v11, (__int64 *)v10);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 307LL;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v7, (unsigned int)inserted, (unsigned int)inserted);
    goto LABEL_11;
  }
  v8 = TtmiCreateEventQueue(v11, &Object);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = (struct _DMA_ADAPTER *)Object;
    inserted = TtmiWriteEnumerationEventsToQueue(v11, (__int64)Object);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 323LL;
      goto LABEL_3;
    }
    inserted = ObInsertObject(v4, 0LL, 0x1F0000u, 0, 0LL, &Handle);
    v4 = 0LL;
    v6 = inserted;
    if ( inserted < 0 )
    {
      v7 = 342LL;
      goto LABEL_3;
    }
    v6 = 0;
    *a2 = Handle;
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 313LL, (unsigned int)v8, (unsigned int)v8);
    v4 = (struct _DMA_ADAPTER *)Object;
  }
LABEL_11:
  if ( v11 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v10[0] )
    HalPutDmaAdapter((PADAPTER_OBJECT)v10[0]);
  if ( v4 )
    HalPutDmaAdapter(v4);
  return v6;
}
