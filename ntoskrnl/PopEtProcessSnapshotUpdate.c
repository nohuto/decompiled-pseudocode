/*
 * XREFs of PopEtProcessSnapshotUpdate @ 0x140701D28
 * Callers:
 *     PopEtEnergyTrackerEnumSnapshotCallback @ 0x1407015AC (PopEtEnergyTrackerEnumSnapshotCallback.c)
 *     PopEtProcessEnumSnapshotCallback @ 0x140701C20 (PopEtProcessEnumSnapshotCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopEtProcessSnapshotCreate @ 0x140701954 (PopEtProcessSnapshotCreate.c)
 *     PopEtProcessSnapshotFind @ 0x140701F10 (PopEtProcessSnapshotFind.c)
 *     PopEtEnergyTrackerUpdateAggregate @ 0x140702020 (PopEtEnergyTrackerUpdateAggregate.c)
 *     PopEtProcessSnapshotUpdateFromSnapshotContext @ 0x140702468 (PopEtProcessSnapshotUpdateFromSnapshotContext.c)
 *     PopEtAggregateKeyCleanup @ 0x140702A18 (PopEtAggregateKeyCleanup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopEtProcessSnapshotUpdate(unsigned int *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // r14
  _QWORD *v5; // rbx
  int v6; // ebx
  _QWORD *v8; // rdx
  __int64 v9; // [rsp+50h] [rbp+8h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a1 + 1);
  v3 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v2 + 1124) & 4) != 0 && *a1 != 4 )
    return 0;
  v4 = *(_QWORD *)(v2 + 2280);
  if ( *(_QWORD *)(v4 + 448) == PopEtGlobals + 784 )
    return 0;
  PopAcquireRwLockExclusive(v3 + 16);
  v10 = PopEtProcessSnapshotFind(a1);
  v5 = (_QWORD *)v10;
  if ( v10 )
    goto LABEL_4;
  v6 = PopEtProcessSnapshotCreate((__int64)a1, &v10);
  if ( v6 >= 0 )
  {
    if ( *a1 == 1 || *(_DWORD *)(v4 + 468) > 1u )
    {
      v5 = (_QWORD *)v10;
      goto LABEL_5;
    }
    v5 = (_QWORD *)v10;
LABEL_4:
    PopEtEnergyTrackerUpdateAggregate(v3, v5, *((_QWORD *)a1 + 3), *a1);
LABEL_5:
    if ( *a1 == 4 )
    {
      v9 = v5[1] & (-1LL << (*(_DWORD *)(v3 + 68) & 0x1F));
      v8 = (_QWORD *)(*(_QWORD *)(v3 + 72)
                    + 8LL
                    * ((37
                      * (BYTE6(v9)
                       + 37
                       * (BYTE5(v9)
                        + 37
                        * (BYTE4(v9)
                         + 37
                         * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
                      + HIBYTE(v9)) & (unsigned int)((*(_DWORD *)(v3 + 68) >> 5) - 1)));
      if ( (*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v5 = (_QWORD *)v10;
      while ( (*v8 & 1) == 0 )
      {
        if ( (_QWORD *)*v8 == v5 )
        {
          *v8 = *v5;
          --*(_DWORD *)(v3 + 64);
          *v5 |= 0x8000000000000002uLL;
          goto LABEL_23;
        }
        v8 = (_QWORD *)*v8;
      }
      v5 = (_QWORD *)v10;
LABEL_23:
      PopEtAggregateKeyCleanup(v5 + 2);
      ExFreePoolWithTag(v5, 0x54456F50u);
    }
    else
    {
      PopEtProcessSnapshotUpdateFromSnapshotContext(v5, a1);
    }
    v6 = 0;
  }
  PopReleaseRwLock(v3 + 16);
  return (unsigned int)v6;
}
