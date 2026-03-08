/*
 * XREFs of PiCollapseEnumRequests @ 0x1402F4C5C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407855A8 (PiMarkDeviceTreeForReenumeration.c)
 */

bool __fastcall PiCollapseEnumRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 *i; // rbx
  __int64 *v9; // r8
  __int64 **v10; // rax
  __int64 *v11; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v9 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      if ( *(_DWORD *)(v3 + 24) == 9 || *(_DWORD *)(v3 + 24) == 10 || *(_DWORD *)(v3 + 24) == 14 )
      {
        v10 = *(__int64 ***)(v3 + 8);
        if ( v9[1] != v3
          || *v10 != (__int64 *)v3
          || (*v10 = v9, v9[1] = (__int64)v10, v11 = *(__int64 **)(a1 + 8), *v11 != a1) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v11;
        *v11 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v9;
    }
    while ( v9 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = -1LL << ((unsigned __int8)v5 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)v6;
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    LOBYTE(v6) = 1;
    PiMarkDeviceTreeForReenumeration(*(_QWORD *)(*(_QWORD *)(i[2] + 312) + 40LL), v6);
    ObfDereferenceObject((PVOID)i[2]);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
