/*
 * XREFs of IopCheckHandleForRevocation @ 0x1405562E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpUnblockPushLock @ 0x1402BFD34 (ExpUnblockPushLock.c)
 *     IopRevokeFileObjectForProcess @ 0x1405566CC (IopRevokeFileObjectForProcess.c)
 */

char __fastcall IopCheckHandleForRevocation(__int64 a1, volatile signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL)
                                                                                             + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*a2) & 0xFFF0) >> 8)] == IoFileObjectType
    && *(_QWORD *)(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x38) == *a4 )
  {
    IopRevokeFileObjectForProcess(((*(__int64 *)a2 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 48, a4[1]);
  }
  _InterlockedExchangeAdd64(a2, 1uLL);
  _InterlockedOr(v7, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExpUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL, 0);
  return 0;
}
