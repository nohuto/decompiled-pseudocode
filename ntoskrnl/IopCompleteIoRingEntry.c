LONG_PTR __fastcall IopCompleteIoRingEntry(__int64 a1, __int64 a2, _OWORD *a3, KPRIORITY a4)
{
  int *v4; // r15
  int v6; // ebx
  struct _KEVENT *v8; // rbp
  int v9; // edi
  KIRQL v10; // al
  unsigned int v11; // edx
  unsigned __int64 v12; // r14
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // bl
  LONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v21; // zf
  signed __int32 v22[22]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(int **)(a1 + 80);
  v6 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  v9 = *v4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
  v11 = v4[1];
  v12 = v10;
  v13 = v11 + 1;
  v14 = v6 & v11;
  if ( v13 - v9 <= *(_DWORD *)(a1 + 28) )
  {
    v15 = 3 * v14;
    *(_QWORD *)&v4[2 * v15 + 2] = a2;
    *(_OWORD *)&v4[2 * v15 + 4] = *a3;
    v4[1] = v13;
    if ( *(_QWORD *)(a1 + 168) )
    {
      _InterlockedOr(v22, 0);
      if ( (v13 - *v4) % *(_DWORD *)(a1 + 28) == 1 )
      {
        v8 = *(struct _KEVENT **)(a1 + 168);
        ObfReferenceObjectWithTag(v8, 0x746C6644u);
      }
    }
  }
  v16 = 0;
  ++*(_QWORD *)(a1 + 120);
  if ( *(_BYTE *)(a1 + 160) && *(_QWORD *)(a1 + 120) == *(_QWORD *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 160) = 0;
    v16 = 1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)(a1 + 104));
  if ( v16 )
    KeSetEvent((PRKEVENT)(a1 + 136), a4, 0);
  if ( v8 )
    KeSetEvent(v8, a4, 0);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v21 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v21 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( v8 )
    return ObfDereferenceObject(v8);
  return result;
}
