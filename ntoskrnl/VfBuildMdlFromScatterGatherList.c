/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x140AC2460
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(int a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  _QWORD *v8; // rdi
  __int64 RealDmaAdapter; // r12
  __int64 AdapterInformationInternal; // rax
  _QWORD **v11; // rbx
  volatile signed __int64 *v12; // r14
  KIRQL v13; // al
  _QWORD *v14; // r8
  unsigned __int64 v15; // rbp
  __int64 v16; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // rbp
  PMDL Mdl; // rax
  PMDL v26; // rsi

  v8 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    if ( *(_QWORD *)(a2 + 8) != -559026163LL )
      goto LABEL_20;
    v11 = (_QWORD **)(AdapterInformationInternal + 88);
    if ( *v11 != v11 )
    {
      v12 = (volatile signed __int64 *)(AdapterInformationInternal + 104);
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
      v14 = *v11;
      v15 = v13;
      v16 = (__int64)(*v11 - 9);
      if ( v11 != *v11 )
      {
        while ( *(_QWORD *)(v16 + 64) != a2 )
        {
          v16 = *v14 - 72LL;
          v14 = (_QWORD *)*v14;
          if ( v11 == v14 )
            goto LABEL_9;
        }
        v8 = *(_QWORD **)(v16 + 96);
      }
LABEL_9:
      KxReleaseSpinLock(v12);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v21 = (v20 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(v15);
    }
  }
  if ( *(_QWORD *)(a2 + 8) == -559026163LL && v8 )
    *(_QWORD *)(a2 + 8) = v8[6];
LABEL_20:
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, struct _MDL *, PMDL *))(*(_QWORD *)(RealDmaAdapter + 8) + 120LL))(
          RealDmaAdapter,
          a2,
          a3,
          a4);
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
