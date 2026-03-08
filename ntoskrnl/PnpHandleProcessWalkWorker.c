/*
 * XREFs of PnpHandleProcessWalkWorker @ 0x1409551D0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140343B10 (IoGetBaseFileSystemDeviceObject.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

char __fastcall PnpHandleProcessWalkWorker(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 HandlePointer; // rax
  char v9; // bl
  struct _DEVICE_OBJECT *v10; // rbp
  unsigned __int64 v11; // rsi
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] == IoFileObjectType
    && (v10 = *(struct _DEVICE_OBJECT **)a4,
        v11 = HandlePointer + 48,
        IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)(HandlePointer + 48)) == v10) )
  {
    v9 = (*(__int64 (__fastcall **)(struct _DEVICE_OBJECT *, _QWORD, unsigned __int64, __int64, _QWORD))(a4 + 16))(
           v10,
           *(_QWORD *)(a4 + 8),
           v11,
           a3,
           *(_QWORD *)(a4 + 24));
  }
  else
  {
    v9 = 0;
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v9;
}
