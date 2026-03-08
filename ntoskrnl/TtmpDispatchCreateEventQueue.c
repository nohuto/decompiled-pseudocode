/*
 * XREFs of TtmpDispatchCreateEventQueue @ 0x1409A3450
 * Callers:
 *     TtmDispatchApi @ 0x1409A2FAC (TtmDispatchApi.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1409A1E3C (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1409A3258 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiCreateEventQueue @ 0x1409A901C (TtmiCreateEventQueue.c)
 */

__int64 __fastcall TtmpDispatchCreateEventQueue(__int64 a1, _QWORD *a2)
{
  void *v2; // rcx
  PVOID v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  HANDLE v9; // rax
  PVOID v11[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  PVOID Object; // [rsp+70h] [rbp+30h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 8);
  v12 = 0LL;
  v11[0] = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  inserted = TtmpAcquireSessionFromTerminalHandle(v2, 1, 0, &v12, v11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v7 = 307LL;
LABEL_3:
    TtmiLogError("TtmpDispatchCreateEventQueue", v7, (unsigned int)inserted, (unsigned int)inserted);
    goto LABEL_11;
  }
  v8 = TtmiCreateEventQueue(v12, &Object);
  v6 = v8;
  if ( v8 >= 0 )
  {
    v4 = Object;
    inserted = TtmiWriteEnumerationEventsToQueue(v12, (__int64)Object);
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
    v9 = Handle;
    Handle = 0LL;
    v6 = 0;
    *a2 = v9;
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateEventQueue", 313LL, (unsigned int)v8, (unsigned int)v8);
    v4 = Object;
  }
LABEL_11:
  if ( v12 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  if ( v11[0] )
    ObfDereferenceObject(v11[0]);
  if ( v4 )
    ObfDereferenceObject(v4);
  return v6;
}
