/*
 * XREFs of AlpcpAllocateMessageLog @ 0x1409776F4
 * Callers:
 *     AlpcpEnterAllocationEventMessageLog @ 0x1409778E8 (AlpcpEnterAllocationEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  _QWORD *v3; // rcx
  _QWORD **v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // r8
  __int64 v8; // rcx

  result = AlpcpFreeMessageLogListHead;
  if ( (__int64 *)AlpcpFreeMessageLogListHead != &AlpcpFreeMessageLogListHead )
  {
    v8 = *(_QWORD *)AlpcpFreeMessageLogListHead;
    if ( *(__int64 **)(AlpcpFreeMessageLogListHead + 8) == &AlpcpFreeMessageLogListHead
      && *(_QWORD *)(v8 + 8) == AlpcpFreeMessageLogListHead )
    {
      AlpcpFreeMessageLogListHead = *(_QWORD *)AlpcpFreeMessageLogListHead;
      *(_QWORD *)(v8 + 8) = &AlpcpFreeMessageLogListHead;
      return result;
    }
    goto LABEL_18;
  }
  result = AlpcpMessageLogListHead;
  if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
    return 0LL;
  v1 = *(_QWORD *)AlpcpMessageLogListHead;
  if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead
    || *(_QWORD *)(v1 + 8) != AlpcpMessageLogListHead
    || (AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead,
        *(_QWORD *)(v1 + 8) = &AlpcpMessageLogListHead,
        *(_DWORD *)(result + 44) = 0,
        v2 = *(_QWORD *)(result + 16),
        *(_QWORD *)(v2 + 8) != result + 16)
    || (v3 = *(_QWORD **)(result + 24), *v3 != result + 16) )
  {
LABEL_18:
    __fastfail(3u);
  }
  *v3 = v2;
  v4 = (_QWORD **)(result + 48);
  *(_QWORD *)(v2 + 8) = v3;
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      return result;
    if ( (_QWORD **)v5[1] != v4 )
      goto LABEL_18;
    v6 = (_QWORD *)*v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 )
      goto LABEL_18;
    *v4 = v6;
    v6[1] = v4;
    v7 = (_QWORD *)qword_140C402A8;
    if ( *(__int64 **)qword_140C402A8 != &AlpcpFreeMessageSnapshotListHead )
      goto LABEL_18;
    *v5 = &AlpcpFreeMessageSnapshotListHead;
    v5[1] = v7;
    *v7 = v5;
    qword_140C402A8 = (__int64)v5;
  }
}
