/*
 * XREFs of AlpcpAllocateSnapshotMessageLog @ 0x1409777D8
 * Callers:
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140977A1C (AlpcpEnterStateChangeEventMessageLog.c)
 * Callees:
 *     <none>
 */

__int64 AlpcpAllocateSnapshotMessageLog()
{
  __int64 result; // rax
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD **v5; // rdx
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = AlpcpFreeMessageSnapshotListHead;
    if ( (__int64 *)AlpcpFreeMessageSnapshotListHead != &AlpcpFreeMessageSnapshotListHead )
      break;
    v1 = AlpcpMessageLogListHead;
    if ( (__int64 *)AlpcpMessageLogListHead == &AlpcpMessageLogListHead )
      return 0LL;
    if ( *(__int64 **)(AlpcpMessageLogListHead + 8) != &AlpcpMessageLogListHead )
      goto LABEL_19;
    v2 = *(_QWORD *)AlpcpMessageLogListHead;
    if ( *(_QWORD *)(*(_QWORD *)AlpcpMessageLogListHead + 8LL) != AlpcpMessageLogListHead )
      goto LABEL_19;
    AlpcpMessageLogListHead = *(_QWORD *)AlpcpMessageLogListHead;
    *(_QWORD *)(v2 + 8) = &AlpcpMessageLogListHead;
    *(_DWORD *)(v1 + 44) = 0;
    v3 = *(_QWORD *)(v1 + 16);
    if ( *(_QWORD *)(v3 + 8) != v1 + 16 )
      goto LABEL_19;
    v4 = *(_QWORD **)(v1 + 24);
    if ( *v4 != v1 + 16 )
      goto LABEL_19;
    *v4 = v3;
    v5 = (_QWORD **)(v1 + 48);
    *(_QWORD *)(v3 + 8) = v4;
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == v5 )
        break;
      if ( (_QWORD **)v6[1] != v5 )
        goto LABEL_19;
      v7 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_19;
      *v5 = v7;
      v7[1] = v5;
      v8 = (_QWORD *)qword_140C402A8;
      if ( *(__int64 **)qword_140C402A8 != &AlpcpFreeMessageSnapshotListHead )
        goto LABEL_19;
      *v6 = &AlpcpFreeMessageSnapshotListHead;
      v6[1] = v8;
      *v8 = v6;
      qword_140C402A8 = (__int64)v6;
    }
    v9 = (__int64 *)qword_140C40298;
    if ( *(__int64 **)qword_140C40298 != &AlpcpFreeMessageLogListHead )
      goto LABEL_19;
    *(_QWORD *)v1 = &AlpcpFreeMessageLogListHead;
    *(_QWORD *)(v1 + 8) = v9;
    *v9 = v1;
    qword_140C40298 = v1;
  }
  v10 = *(_QWORD *)AlpcpFreeMessageSnapshotListHead;
  if ( *(__int64 **)(AlpcpFreeMessageSnapshotListHead + 8) != &AlpcpFreeMessageSnapshotListHead
    || *(_QWORD *)(v10 + 8) != AlpcpFreeMessageSnapshotListHead )
  {
LABEL_19:
    __fastfail(3u);
  }
  AlpcpFreeMessageSnapshotListHead = *(_QWORD *)AlpcpFreeMessageSnapshotListHead;
  *(_QWORD *)(v10 + 8) = &AlpcpFreeMessageSnapshotListHead;
  return result;
}
