unsigned __int64 __fastcall MiGetPageForWriteCluster(
        __int64 a1,
        ULONG_PTR a2,
        unsigned __int64 a3,
        int *a4,
        _DWORD *a5)
{
  int v6; // esi
  unsigned __int64 v7; // rbx
  ULONG_PTR v9; // rax
  __int64 v10; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v13; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  char v18[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  v7 = a3;
  v18[0] = 0;
  *a5 = 1;
  v9 = MiCheckPteForWriteCluster(a1, a2, a3, v18);
  v10 = v9;
  if ( v9 )
  {
    *a5 = MiReferencePageForModifiedWrite(v9, 0);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (CurrentIrql = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && CurrentIrql <= 0xFu )
    {
      v13 = v18[0];
      if ( v18[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = v18[0];
        v16 = ~(unsigned __int16)(-1LL << (v18[0] + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v13 = v18[0];
    }
    __writecr8(v13);
    if ( *a5 )
      goto LABEL_8;
  }
  else if ( (unsigned int)*a4 <= 0x1F )
  {
    if ( qword_140C657C0 )
    {
      if ( (v7 & 0x10) == 0 )
        v7 &= ~qword_140C657C0;
    }
    if ( !_bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(v7)) )
    {
      v10 = qword_140C69370;
      v6 = *a4 + 1;
LABEL_8:
      *a4 = v6;
      return 0xAAAAAAAAAAAAAAABuLL * ((v10 + 0x220000000000LL) >> 4);
    }
  }
  return -1LL;
}
