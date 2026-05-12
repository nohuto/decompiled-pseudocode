/*
 * XREFs of RaidBusEnumeratorGetUnit @ 0x1C001866C
 * Callers:
 *     RaidBusEnumeratorProbeLunZero @ 0x1C00126EC (RaidBusEnumeratorProbeLunZero.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C00173A4 (RaidBusEnumeratorVisitUnit.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017870 (RaidBusEnumeratorGetLunList.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 *     RaidBusEnumeratorAllocateUnitResources @ 0x1C0018774 (RaidBusEnumeratorAllocateUnitResources.c)
 *     RaidAdapterInsertUnit @ 0x1C0018BC8 (RaidAdapterInsertUnit.c)
 *     RaidAdapterFindZombieUnit @ 0x1C0018D78 (RaidAdapterFindZombieUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0018E08 (RaUnitSetQueueDepth.c)
 *     RaidCreateUnit @ 0x1C00194C0 (RaidCreateUnit.c)
 */

__int64 __fastcall RaidBusEnumeratorGetUnit(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 Unit; // rdi
  int v9; // eax
  __int64 ZombieUnit; // rax
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 1;
  result = RaidBusEnumeratorAllocateUnitResources(a1, a1 + 1, 0LL);
  if ( (int)result >= 0 )
  {
    Unit = RaidAdapterFindUnit(*a1, a2);
    if ( Unit )
      goto LABEL_3;
    ZombieUnit = RaidAdapterFindZombieUnit(*a1, a2);
    v13 = ZombieUnit;
    if ( ZombieUnit )
    {
      Unit = ZombieUnit & -(__int64)((*(_BYTE *)(ZombieUnit + 448) & 4) != 0);
      v13 = Unit;
      if ( Unit )
        goto LABEL_3;
    }
    Unit = v3[6];
    v11 = *a1;
    if ( Unit )
    {
      RaUnitSetQueueDepth(
        v3[6],
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 540LL),
        *(unsigned int *)(*(_QWORD *)(Unit + 24) + 536LL));
LABEL_8:
      v12 = *(_QWORD *)(Unit + 24);
      *(_DWORD *)(Unit + 96) = a2;
      *(_WORD *)(Unit + 88) = 1;
      *(_DWORD *)(Unit + 92) = 4;
      *(_WORD *)(Unit + 90) = *(_WORD *)(v12 + 56);
      RaidAdapterInsertUnit(v11, Unit);
      *(_BYTE *)(a3 + 92) = 1;
LABEL_3:
      *(_QWORD *)(a3 + 8) = Unit;
      v9 = *(_DWORD *)(Unit + 96);
      *(_DWORD *)(a3 + 88) = 0;
      *(_DWORD *)(a3 + 1) = v9;
      return 0LL;
    }
    result = RaidCreateUnit(v11, &v13);
    if ( (int)result >= 0 )
    {
      Unit = v13;
      v3[6] = v13;
      *(_BYTE *)(Unit + 448) |= 8u;
      *(_BYTE *)(Unit + 693) = 0;
      goto LABEL_8;
    }
  }
  return result;
}
