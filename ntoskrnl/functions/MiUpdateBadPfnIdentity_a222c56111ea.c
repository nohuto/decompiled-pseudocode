__int64 __fastcall MiUpdateBadPfnIdentity(unsigned __int64 a1, unsigned __int64 *a2)
{
  unsigned int v3; // r14d
  int v5; // eax
  __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // edx
  bool v16; // zf
  __int64 result; // rax
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  LOBYTE(v5) = MiIsPageInHugePfn(a1);
  if ( v5 )
  {
    v18 = 0;
    v3 = 0;
    v6 = qword_140C67A70 + 8 * ((a1 >> 18) & 0x3FFFFF);
    v7 = MiLockHugePfn(v6);
    if ( (unsigned int)MiGetPageInHugePageBadStatus(a1, 1LL, &v18) == 259 )
    {
      v8 = *a2;
      if ( v18 )
        v9 = v8 | 0x80;
      else
        v9 = v8 & 0xFFFFFFFFFFFFFF7FuLL;
      *a2 = v9;
      v3 = 1;
    }
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140C67A78 + 4 * ((((v6 - qword_140C67A70) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((v6 - qword_140C67A70) >> 3) & 0x1F)));
  }
  else
  {
    v10 = 48 * a1 - 0x220000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v10);
    if ( (*(_BYTE *)(v10 + 35) & 0x40) != 0 )
    {
      MiIdentifyPfn(a1, a2);
      v11 = *a2 | 0x80;
      if ( *(char *)(v10 + 35) >= 0 )
        v11 = *a2 & 0xFFFFFFFFFFFFFF7FuLL;
      *a2 = v11;
    }
    else
    {
      v3 = 0;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = v3;
  __writecr8(v7);
  return result;
}
