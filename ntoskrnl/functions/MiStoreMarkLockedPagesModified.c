void __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // r14
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  __int64 v5; // rax
  char v6; // cl
  unsigned __int64 v7; // rbx
  __int64 v8; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  v1 = a1 + 12;
  v2 = (unsigned __int64)&a1[2 * (((unsigned int)a1[10] + 4095LL + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12)
                           + 12];
  while ( (unsigned __int64)v1 < v2 )
  {
    v3 = 48LL * *v1 - 0x220000000000LL;
    v4 = (unsigned __int8)MiLockPageInline(v3);
    v5 = MiCapturePageFileInfoInline((unsigned __int64 *)(v3 + 16), 1, 0);
    v6 = *(_BYTE *)(v3 + 34);
    v7 = v5;
    if ( (v6 & 0x10) == 0 )
      *(_BYTE *)(v3 + 34) = v6 | 0x10;
    v8 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
    if ( v7 )
      MiReleasePageFileInfo(v8, v7, 0);
    ++v1;
  }
}
