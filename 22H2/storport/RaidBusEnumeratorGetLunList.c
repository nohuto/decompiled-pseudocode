/*
 * XREFs of RaidBusEnumeratorGetLunList @ 0x1C0017870
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0017758 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C00304B8 (RaidAdapterTargetedRescan.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x1C0005A08 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterFindUnitAtDirql @ 0x1C0005A80 (RaidAdapterFindUnitAtDirql.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1C0005B8C (RaidAdapterReleaseInterruptLock.c)
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00126EC (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0017AB4 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGetLunListFromTarget @ 0x1C0017C34 (RaidBusEnumeratorGetLunListFromTarget.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C001866C (RaidBusEnumeratorGetUnit.c)
 *     memset @ 0x1C0020480 (memset.c)
 */

__int64 __fastcall RaidBusEnumeratorGetLunList(__int64 *a1, unsigned int a2, _QWORD *a3)
{
  _QWORD *v4; // r14
  __int64 result; // rax
  int v7; // edi
  unsigned __int8 v8; // di
  int v9; // r13d
  __int64 v10; // rbp
  unsigned __int8 CurrentIrql; // al
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 *v14; // rbx
  __int64 UnitAtDirql; // rsi
  bool v16; // zf
  __int64 v17; // rbx
  _QWORD *v18; // rbx
  _QWORD *v19; // r8
  _QWORD *v20; // rsi
  KIRQL v21; // bl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-C8h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v24[96]; // [rsp+50h] [rbp-98h] BYREF
  int v25; // [rsp+F0h] [rbp+8h]

  v4 = a3;
  memset(v24, 0, sizeof(v24));
  result = RaidBusEnumeratorGetUnit(a1, a2, v24);
  if ( (int)result >= 0 )
  {
    if ( (int)RaidBusEnumeratorGetLunListFromTarget(a1, a2, v24, v4) < 0 )
    {
      v7 = RaidBusEnumeratorProbeLunZero((__int64)a1, a2);
      memset(v4, 0, 0xFFuLL);
      if ( v7 >= 0 )
        *v4 = 0x101010101010101LL;
    }
    RaidBusEnumeratorReleaseUnit(a1, v24);
    v25 = a2;
    v8 = 0;
    v9 = BYTE1(a2);
    do
    {
      v10 = *a1;
      BYTE2(v25) = v8;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql )
      {
        if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v10 + 704) )
        {
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v10, v25);
        }
        else
        {
          v21 = RaidAdapterAcquireInterruptLock(v10);
          UnitAtDirql = RaidAdapterFindUnitAtDirql(v10, v25);
          RaidAdapterReleaseInterruptLock(v10, v21);
        }
      }
      else
      {
        memset(&LockHandle, 0, sizeof(LockHandle));
        v12 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 128), &LockHandle);
        v13 = v10 + 136;
        v14 = *(__int64 **)(v10 + 136);
        if ( v14 != (__int64 *)(v10 + 136) )
        {
          do
          {
            v12 = (__int64)(v14 - 7);
            if ( ((unsigned __int8)BYTE2(*((_DWORD *)v14 + 10)) | ((((unsigned __int8)*((_DWORD *)v14 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v14 + 10))) << 8)) == (v8 | ((v9 | ((unsigned __int8)v25 << 8)) << 8)) )
              break;
            v14 = (__int64 *)*v14;
          }
          while ( v14 != (__int64 *)v13 );
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        UnitAtDirql = 0LL;
        v16 = v14 == (__int64 *)v13;
        v4 = a3;
        if ( !v16 )
          UnitAtDirql = v12;
      }
      if ( UnitAtDirql )
        goto LABEL_19;
      v17 = *a1;
      memset(&v23, 0, sizeof(v23));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 208), &v23);
      v18 = (_QWORD *)(v17 + 216);
      v19 = (_QWORD *)*v18;
      if ( (_QWORD *)*v18 == v18 )
        goto LABEL_14;
      do
      {
        v20 = v19 - 7;
        if ( ((unsigned __int8)BYTE2(*((_DWORD *)v19 + 10)) | ((((unsigned __int8)*((_DWORD *)v19 + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)v19 + 10))) << 8)) == (v8 | ((v9 | ((unsigned __int8)v25 << 8)) << 8)) )
          break;
        v19 = (_QWORD *)*v19;
      }
      while ( v19 != v18 );
      if ( v19 == v18 )
LABEL_14:
        v20 = 0LL;
      KeReleaseInStackQueuedSpinLock(&v23);
      if ( v20 )
LABEL_19:
        *((_BYTE *)v4 + v8) = 1;
      ++v8;
    }
    while ( v8 != 0xFF );
    return 0LL;
  }
  return result;
}
