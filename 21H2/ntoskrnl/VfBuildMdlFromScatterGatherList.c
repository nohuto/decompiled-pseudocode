/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x1409CBE30
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(__int64 a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  _QWORD *v8; // rbx
  __int64 AdapterInformationInternal; // rax
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // al
  _QWORD *v13; // rcx
  unsigned __int64 v14; // rbp
  _QWORD *v15; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, struct _MDL *, PMDL *); // rax
  int v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rbp
  PMDL Mdl; // rax
  PMDL v26; // rdi

  v8 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    if ( *(_QWORD *)(a2 + 8) != -559026163LL )
      goto LABEL_21;
    v10 = (_QWORD *)(AdapterInformationInternal + 56);
    if ( (_QWORD *)*v10 != v10 )
    {
      v11 = (KSPIN_LOCK *)(AdapterInformationInternal + 72);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
      v13 = (_QWORD *)*v10;
      v14 = v12;
      while ( 1 )
      {
        v15 = v13 - 9;
        if ( v10 == v15 + 9 )
          break;
        if ( v15[8] == a2 )
        {
          v8 = (_QWORD *)v15[12];
          break;
        }
        v13 = (_QWORD *)v15[9];
      }
      KxReleaseSpinLock(v11);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v14);
    }
  }
  if ( *(_QWORD *)(a2 + 8) == -559026163LL && v8 )
    *(_QWORD *)(a2 + 8) = v8[6];
LABEL_21:
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, struct _MDL *, PMDL *))ViGetRealDmaOperation(a1);
  v22 = RealDmaOperation(a1, a2, a3, a4);
  v23 = v22;
  if ( v8 )
  {
    v8[6] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = -559026163LL;
  }
  if ( v22 >= 0 && *a4 == a3 && v8 )
  {
    if ( v8[5] )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v24 = v8[7];
      Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v24 + 40), 0, 0, 0LL);
      v26 = Mdl;
      if ( Mdl )
      {
        v8[5] = Mdl;
        memmove(&Mdl[1], (const void *)(v24 + 48), 8 * ((unsigned __int64)*(unsigned int *)(v24 + 40) >> 12));
        v26->ByteOffset += a3->ByteOffset;
        v26->ByteCount -= v26->ByteOffset;
        v26->MdlFlags |= 2u;
        *a4 = v26;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v23;
}
