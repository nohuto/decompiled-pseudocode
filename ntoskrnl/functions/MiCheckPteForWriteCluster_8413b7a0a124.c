__int64 __fastcall MiCheckPteForWriteCluster(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, _BYTE *a4)
{
  __int64 result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v12; // eax
  bool v13; // zf

  result = MiLockTransitionLeafPageEx(a2, a4, 0);
  if ( !result )
    return 0LL;
  if ( (*(_BYTE *)(result + 34) & 7) != 3
    || *(_WORD *)(result + 32)
    || (*(_QWORD *)(result + 16) & 0xFFFFFFFFFC00FC1FuLL) != a3 )
  {
    goto LABEL_10;
  }
  if ( qword_140C657C0 && (a3 & 0x10) == 0 )
    a3 &= ~qword_140C657C0;
  if ( _bittest64(*(const signed __int64 **)(a1 + 8), HIDWORD(a3)) )
  {
LABEL_10:
    v8 = (unsigned __int8)*a4;
    _InterlockedAnd64((volatile signed __int64 *)(result + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    return 0LL;
  }
  return result;
}
