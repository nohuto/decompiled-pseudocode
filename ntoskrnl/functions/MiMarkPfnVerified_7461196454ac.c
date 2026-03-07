char __fastcall MiMarkPfnVerified(ULONG_PTR BugCheckParameter2, char a2)
{
  char v2; // bl
  ULONG_PTR v4; // rbp
  unsigned __int8 v5; // si
  __int64 v6; // rax
  int v7; // r8d
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v2 = a2;
  v15 = 0LL;
  v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4);
  if ( (a2 & 4) != 0 )
    v5 = 17;
  else
    v5 = MiLockPageInline();
  if ( (v2 & 2) != 0 )
  {
    if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
      v2 &= ~2u;
    if ( (v2 & 2) != 0 && (MiFlags & 0x8000) != 0 )
    {
      if ( *(__int64 *)(BugCheckParameter2 + 40) >= 0 && (MiFlags & 0x4000) != 0 )
        *(_QWORD *)&v15 = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) << 25) >> 16;
      v7 = v2 & 1;
      if ( (v2 & 1) != 0 )
        v2 &= ~1u;
      v8 = (unsigned int)(4 * v7 + 2);
      if ( (v2 & 0x20) != 0 )
      {
        v8 = (unsigned int)v8 | 0x40;
        if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) == 0 && (*(_DWORD *)(BugCheckParameter2 + 16) & 4) == 0 )
          LODWORD(v8) = v8 | 0x800;
      }
      if ( (int)KeSetPagePrivilege(v4, &v15, v8) < 0 )
        KeBugCheckEx(0x1Au, 0x5150CuLL, v4, 0LL, 0LL);
    }
  }
  LOBYTE(v6) = (*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7;
  if ( (_BYTE)v6 != 3 )
  {
    MiSetPfnIdentity(BugCheckParameter2, 3LL);
    v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  }
  if ( (v2 & 1) != 0 && (MiFlags & 0x8000) != 0 )
  {
    MiGetPagePrivilege(BugCheckParameter2);
    LOBYTE(v6) = KeSetPagePrivilege(v4, &v15, 4LL);
  }
  if ( v5 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (v5 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    LOBYTE(v6) = v5;
    __writecr8(v5);
  }
  return v6;
}
