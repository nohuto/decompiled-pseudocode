__int64 __fastcall MiTradeBootImagePage(unsigned __int64 a1, ULONG_PTR a2)
{
  __int64 v4; // rsi
  unsigned __int64 v5; // r13
  __int64 v6; // r14
  unsigned __int64 v7; // r12
  unsigned int v8; // r8d
  unsigned __int64 v9; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v13; // zf
  __int64 v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h]
  __int64 *v16; // [rsp+40h] [rbp-C0h]
  __int128 v17; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[24]; // [rsp+60h] [rbp-A0h] BYREF

  v16 = (__int64 *)a1;
  memset(v18, 0, 0xB8uLL);
  v18[3] = 0LL;
  LODWORD(v18[1]) = 20;
  v14 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v14;
  v15 = (__int64)(a1 << 25) >> 16;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v14) >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  v7 = (unsigned __int8)MiLockPageInline(v6);
  MiLockNestedPageAtDpcInline(48 * a2 - 0x220000000000LL);
  MiCopyPfnEntryEx(48 * a2 - 0x220000000000LL, (__int128 *)v6);
  v8 = ((unsigned int)MiFlags >> 14) & 1;
  if ( !v8 || ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
  {
    MiCopyPage(a2, v5, 2 * v8 + 4);
  }
  else
  {
    v17 = (unsigned __int64)v15;
    KeCopyPrivilegedPage(a2, &v17, v5, &v17, 0LL, 1);
  }
  v14 = v4 ^ (v4 ^ (a2 << 12)) & 0xFFFFFFFFFF000LL;
  MiWriteValidPteNewPage(v16, v14, 0);
  _InterlockedAnd64((volatile signed __int64 *)(48 * a2 - 0x220000000000LL + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v9 = v15;
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  MiInsertTbFlushEntry((__int64)v18, v9, 1LL, 0);
  MiFlushTbList((int *)v18);
  if ( (MiFlags & 0x4000) == 0 && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
    MiClearPfnImageVerified(48 * v5 - 0x220000000000LL, 12);
  *(_BYTE *)(v6 + 35) &= ~8u;
  result = MiDecrementShareCount(48 * v5 - 0x220000000000LL);
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v13 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v13 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
