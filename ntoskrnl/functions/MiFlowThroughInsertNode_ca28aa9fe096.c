_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v2; // bx
  _QWORD *result; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  unsigned int PagingFileOffset; // eax
  __int64 v9; // rbx
  KIRQL v10; // al
  _QWORD *v11; // rdx
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v22 = a2[2];
  v2 = v22;
  if ( (v22 & 0x400) != 0 )
  {
    *(_QWORD *)(a1 + 336) = 0LL;
  }
  else
  {
    PagingFileOffset = MiGetPagingFileOffset(&v22);
    v9 = *(_QWORD *)(*(_QWORD *)(qword_140C67048 + 8 * ((a2[5] >> 43) & 0x3FFLL)) + 8LL * (v2 >> 12) + 17056);
    *(_QWORD *)(a1 + 336) = v9;
    *(_QWORD *)(a1 + 344) = PagingFileOffset;
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v9 + 232));
    v11 = *(_QWORD **)(v9 + 240);
    v12 = a1 + 352;
    LOBYTE(v13) = 0;
    v14 = v10;
    if ( v11 )
    {
      v15 = *(_QWORD *)(a1 + 344);
      while ( 1 )
      {
        if ( v15 > *(v11 - 1) || v15 >= *(v11 - 1) && v12 > (unsigned __int64)v11 )
        {
          v16 = (_QWORD *)v11[1];
          if ( !v16 )
          {
            LOBYTE(v13) = 1;
            break;
          }
        }
        else
        {
          v16 = (_QWORD *)*v11;
          if ( !*v11 )
            break;
        }
        v11 = v16;
      }
    }
    RtlAvlInsertNodeEx(v9 + 240, v11, v13, v12);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 232));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v14);
  }
  *(_DWORD *)(a1 + 192) |= 0x10u;
  result = (_QWORD *)(a1 + 16);
  v6 = *a2 - 32LL;
  v7 = *(_QWORD **)(v6 + 24);
  if ( *v7 != v6 + 16 )
    __fastfail(3u);
  *result = v6 + 16;
  *(_QWORD *)(a1 + 24) = v7;
  *v7 = result;
  *(_QWORD *)(v6 + 24) = result;
  *(_QWORD *)(a1 + 328) = v6;
  return result;
}
