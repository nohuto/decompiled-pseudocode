/*
 * XREFs of IopAdjustFileObjectKeepAliveCount @ 0x14055606C
 * Callers:
 *     IoDecrementKeepAliveCount @ 0x140555BC0 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x140555D20 (IoIncrementKeepAliveCount.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14023EA58 (IopGetSetSpecificExtension.c)
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAdjustFileObjectKeepAliveCount(__int64 a1, __int64 a2, int a3, _DWORD *a4, __int64 *a5)
{
  _QWORD *Pool2; // rbx
  __int64 v6; // rsi
  __int64 result; // rax
  unsigned int v11; // edi
  __int64 v12; // r14
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 *v15; // rcx
  _DWORD *v16; // rax
  bool v17; // cl
  int v18; // edx
  int v19; // edx
  unsigned __int8 CurrentIrql; // al
  KIRQL v21; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf
  __int64 FileObjectExtension; // [rsp+30h] [rbp-38h] BYREF
  volatile signed __int64 *v27; // [rsp+38h] [rbp-30h]
  KIRQL v28; // [rsp+80h] [rbp+18h]

  FileObjectExtension = 0LL;
  Pool2 = 0LL;
  v6 = 0LL;
  if ( a3 )
  {
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &FileObjectExtension, 0LL);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1632333641LL);
    if ( Pool2 )
    {
      v6 = ExAllocatePool2(64LL, 56LL, 1632333641LL);
      if ( !v6 )
      {
        ExFreePoolWithTag(Pool2, 0);
        Pool2 = 0LL;
      }
    }
    v12 = FileObjectExtension;
  }
  else
  {
    v11 = 0;
    FileObjectExtension = IopGetFileObjectExtension(a1, 1, 0LL);
    v12 = FileObjectExtension;
    if ( !FileObjectExtension )
      return 3221225485LL;
  }
  v27 = (volatile signed __int64 *)(a1 + 184);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v14 = *(_QWORD *)(v12 + 24);
  v28 = v13;
  if ( v14 )
  {
    v15 = *(__int64 **)(v12 + 24);
    while ( v15[1] != a2 )
    {
      v15 = (__int64 *)*v15;
      if ( !v15 )
        goto LABEL_11;
    }
    v18 = *((_DWORD *)v15 + 4);
    if ( a3 )
      v19 = v18 + 1;
    else
      v19 = v18 - 1;
    *((_DWORD *)v15 + 4) = v19;
    *a5 = v15[3];
    *a4 = v19;
  }
  else
  {
LABEL_11:
    if ( a3 )
    {
      if ( Pool2 )
      {
        *Pool2 = v14;
        *(_QWORD *)(v12 + 24) = Pool2;
        Pool2[1] = a2;
        *((_DWORD *)Pool2 + 4) = 1;
        Pool2[3] = v6;
        *(_QWORD *)(v6 + 24) = a2;
        *(_QWORD *)(v6 + 40) = a1;
        v17 = 0;
        if ( (*(_DWORD *)(a1 + 80) & 0x20000000) != 0 )
        {
          v16 = *(_DWORD **)(a1 + 208);
          if ( !v16 || (*v16 & 8) == 0 )
            v17 = 1;
        }
        Pool2 = 0LL;
        *(_BYTE *)(v6 + 18) = v17;
        *a5 = v6;
        v6 = 0LL;
        *a4 = 1;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    else
    {
      v11 = -1073741811;
    }
  }
  KxReleaseSpinLock(v27);
  if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
  {
    v21 = v28;
    if ( v28 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (v28 + 1));
      v25 = (v24 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v21 = v28;
  }
  __writecr8(v21);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0);
  return v11;
}
