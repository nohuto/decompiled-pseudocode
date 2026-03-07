__int64 __fastcall IopMcCreateBufferEntry(__int64 a1, unsigned int a2, char a3, __int64 *a4)
{
  unsigned __int64 v7; // rdi
  __int64 Pool2; // rax
  __int64 v10; // rbx
  _DWORD *v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf

  v7 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
  Pool2 = ExAllocatePool2(65LL, (unsigned int)(32 * (v7 + 3)), 1698849613LL);
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 4) = 32 * (v7 + 3);
  *(_WORD *)Pool2 = 3074;
  *(_DWORD *)(Pool2 + 8) = 1;
  *(_QWORD *)(Pool2 + 32) = a1;
  *(_DWORD *)(Pool2 + 40) = a2;
  *(_BYTE *)(Pool2 + 44) = a3;
  *(_WORD *)(Pool2 + 64) = 0;
  *(_DWORD *)(Pool2 + 68) = 0;
  *(_BYTE *)(Pool2 + 66) = 6;
  *(_QWORD *)(Pool2 + 80) = Pool2 + 72;
  *(_QWORD *)(Pool2 + 72) = Pool2 + 72;
  if ( (_DWORD)v7 )
  {
    v12 = (_DWORD *)(Pool2 + 120);
    v13 = (unsigned int)v7;
    do
    {
      *v12 = -1;
      v12 += 8;
      --v13;
    }
    while ( v13 );
  }
  v14 = KeAcquireSpinLockRaiseToDpc(&qword_140C5D2C8);
  v15 = (_QWORD *)qword_140C5D2D8;
  v16 = (_QWORD *)(v10 + 16);
  if ( *(__int64 **)qword_140C5D2D8 != &qword_140C5D2D0 )
    __fastfail(3u);
  *v16 = &qword_140C5D2D0;
  *(_QWORD *)(v10 + 24) = v15;
  *v15 = v16;
  qword_140C5D2D8 = v10 + 16;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C5D2C8);
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
  *a4 = v10;
  return 0LL;
}
