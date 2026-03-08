/*
 * XREFs of IopIsFileOpenOrSection @ 0x1408A0330
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x1403120A0 (ExGetHandlePointer.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     MmSectionToSectionObjectPointers @ 0x1408A770E (MmSectionToSectionObjectPointers.c)
 */

bool __fastcall IopIsFileOpenOrSection(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  unsigned __int64 HandlePointer; // rax
  __int64 v8; // rsi
  bool v9; // bl
  struct _OBJECT_TYPE *v10; // rcx
  unsigned __int64 v11; // rax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  HandlePointer = ExGetHandlePointer(a2);
  v8 = *a4;
  v9 = 0;
  v10 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( v10 == (struct _OBJECT_TYPE *)IoFileObjectType )
  {
    v11 = HandlePointer + 48;
    if ( v8 == v11 )
      v9 = *((_BYTE *)a4 + 8) == 0;
    else
      v9 = *(_QWORD *)(v8 + 24) == *(_QWORD *)(v11 + 24);
  }
  else if ( v10 == MmSectionObjectType && *(_QWORD *)(v8 + 40) )
  {
    v9 = MmSectionToSectionObjectPointers(HandlePointer + 48) == *(_QWORD *)(v8 + 40);
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v13, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  return v9;
}
