__int64 __fastcall MmManageFaultRange(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 a3, char a4)
{
  ULONG_PTR v4; // r14
  unsigned int v5; // edi
  int v8; // ebx
  unsigned int v9; // edx
  volatile signed __int64 *v10; // rcx
  volatile signed __int64 *v11; // rsi
  unsigned __int64 v12; // r15
  _QWORD *v13; // rdx
  bool v14; // r8
  _QWORD *v15; // rax
  unsigned __int64 *v16; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf
  __int128 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h]
  ULONG_PTR v25; // [rsp+50h] [rbp-28h]

  v4 = BugCheckParameter4 + BugCheckParameter3 - 1;
  v5 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v9 = 0;
    v10 = (volatile signed __int64 *)&unk_140C65158;
    while ( 1 )
    {
      v11 = v10 - 3;
      if ( !*v10 && !_InterlockedCompareExchange64(v10, BugCheckParameter3, 0LL) )
        break;
      ++v9;
      v10 += 5;
      if ( v9 >= 2 )
        goto LABEL_6;
    }
    *((_QWORD *)v11 + 4) = v4;
LABEL_6:
    if ( v9 == 2 )
    {
      result = (__int64)MiAllocatePool(64, 0x28uLL, 0x7641694Du);
      v11 = (volatile signed __int64 *)result;
      if ( !result )
        return result;
      *(_QWORD *)(result + 24) = BugCheckParameter3;
      *(_QWORD *)(result + 32) = v4;
    }
  }
  else
  {
    *((_QWORD *)&v24 + 1) = BugCheckParameter3;
    v11 = (volatile signed __int64 *)&v23;
    v25 = BugCheckParameter4 + BugCheckParameter3 - 1;
  }
  v12 = ExAcquireSpinLockExclusive(&dword_140C65130);
  if ( !v8 )
  {
    v16 = (unsigned __int64 *)BugCheckParameter2;
    if ( BugCheckParameter2 )
    {
      do
      {
        if ( *((_QWORD *)v11 + 3) <= v16[4] )
        {
          if ( *((_QWORD *)v11 + 4) >= v16[3] )
            break;
          v16 = (unsigned __int64 *)*v16;
        }
        else
        {
          v16 = (unsigned __int64 *)v16[1];
        }
      }
      while ( v16 );
    }
    if ( v16[3] != BugCheckParameter3 || v16[4] != v4 )
      KeBugCheckEx(0x1Au, 0x5231uLL, (ULONG_PTR)v16, BugCheckParameter3, BugCheckParameter4);
    RtlAvlRemoveNode(&BugCheckParameter2, v16);
    goto LABEL_17;
  }
  v13 = (_QWORD *)BugCheckParameter2;
  v14 = 0;
  if ( !BugCheckParameter2 )
    goto LABEL_16;
  while ( *((_QWORD *)v11 + 3) > v13[4] || *((_QWORD *)v11 + 4) >= v13[3] )
  {
    v15 = (_QWORD *)v13[1];
    if ( !v15 )
    {
      v14 = 1;
      goto LABEL_16;
    }
LABEL_14:
    v13 = v15;
  }
  v15 = (_QWORD *)*v13;
  if ( *v13 )
    goto LABEL_14;
  v14 = 0;
LABEL_16:
  RtlAvlInsertNodeEx(&BugCheckParameter2, (unsigned __int64)v13, v14, (unsigned __int64)v11);
  v16 = 0LL;
LABEL_17:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C65130);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  if ( v16 )
  {
    while ( v16 != (unsigned __int64 *)((char *)&unk_140C65140 + 40 * v5) )
    {
      if ( ++v5 >= 2 )
      {
        ExFreePoolWithTag(v16, 0);
        return 1LL;
      }
    }
  }
  return 1LL;
}
