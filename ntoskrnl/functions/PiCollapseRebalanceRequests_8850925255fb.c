bool __fastcall PiCollapseRebalanceRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  unsigned __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 **v7; // rax
  __int64 *v8; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 *i; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v6 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      if ( *(_DWORD *)(v3 + 24) == 6 && (*(_DWORD *)(v3 + 32) & 1) != 0 )
      {
        v7 = *(__int64 ***)(v3 + 8);
        if ( v6[1] != v3
          || *v7 != (__int64 *)v3
          || (*v7 = v6, v6[1] = (__int64)v7, v8 = *(__int64 **)(a1 + 8), *v8 != a1) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v8;
        *v8 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v6;
    }
    while ( v6 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PnpSpinLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    ObfDereferenceObject((PVOID)i[2]);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
