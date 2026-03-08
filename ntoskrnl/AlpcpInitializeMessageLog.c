/*
 * XREFs of AlpcpInitializeMessageLog @ 0x140857130
 * Callers:
 *     AlpcpInitSystem @ 0x140856E38 (AlpcpInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeMessageLog(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r8
  PVOID v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax

  v2 = 0;
  AlpcpMessageLogLock = 0LL;
  qword_140C402C8 = (__int64)&AlpcpMessageLogListHead;
  AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
  qword_140C40298 = (__int64)&AlpcpFreeMessageLogListHead;
  AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
  qword_140C402A8 = (__int64)&AlpcpFreeMessageSnapshotListHead;
  AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
  if ( !a1 || !a2 )
    return 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 0x4000LL, 1817013313LL);
  AlpcpMessageLogLookupTable = Pool2;
  if ( Pool2 )
  {
    v7 = 1024LL;
    do
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      Pool2 += 2;
      --v7;
    }
    while ( v7 );
    v8 = ExAllocatePool2(256LL, a1 << 6, 1817013313LL);
    if ( !v8 )
    {
      v10 = AlpcpMessageLogLookupTable;
      goto LABEL_11;
    }
    v9 = ExAllocatePool2(256LL, 120 * a2, 1934453825LL);
    if ( !v9 )
    {
      ExFreePoolWithTag(AlpcpMessageLogLookupTable, 0);
      v10 = (PVOID)v8;
LABEL_11:
      ExFreePoolWithTag(v10, 0);
      return 3221225626LL;
    }
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (_QWORD *)((v12 << 6) + v8);
        v13[7] = v13 + 6;
        v13[6] = v13 + 6;
        v14 = (_QWORD *)qword_140C40298;
        if ( *(__int64 **)qword_140C40298 != &AlpcpFreeMessageLogListHead )
          break;
        v13[1] = qword_140C40298;
        ++v11;
        *v13 = &AlpcpFreeMessageLogListHead;
        *v14 = v13;
        v12 = v11;
        qword_140C40298 = (__int64)v13;
        if ( v11 >= a1 )
          goto LABEL_17;
      }
LABEL_22:
      __fastfail(3u);
    }
LABEL_17:
    if ( a2 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        v16 = (_QWORD *)qword_140C402A8;
        v17 = (_QWORD *)(v9 + 120 * v15);
        if ( *(__int64 **)qword_140C402A8 != &AlpcpFreeMessageSnapshotListHead )
          break;
        *v17 = &AlpcpFreeMessageSnapshotListHead;
        ++v2;
        v17[1] = v16;
        *v16 = v17;
        qword_140C402A8 = (__int64)v17;
        v15 = v2;
        if ( v2 >= a2 )
          return 0LL;
      }
      goto LABEL_22;
    }
    return 0LL;
  }
  return 3221225626LL;
}
