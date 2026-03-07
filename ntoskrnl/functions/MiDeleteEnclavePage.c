__int64 __fastcall MiDeleteEnclavePage(unsigned __int64 a1, int a2)
{
  unsigned __int64 v4; // rbx
  ULONG_PTR v5; // r14
  int v6; // esi
  __int64 v7; // r8
  bool v8; // zf
  __int64 v9; // rbx
  unsigned __int8 v10; // al
  char v11; // dl
  unsigned __int64 v12; // rdi
  __int64 v13; // r8
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = ZeroPte;
  v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17) >> 12) & 0xFFFFFFFFFFLL;
  v6 = 0;
  if ( MiPteInShadowRange(a1) )
  {
    if ( MiPteHasShadow() )
    {
      v6 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v8 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v8 = (ZeroPte & 1) == 0;
    }
    if ( !v8 )
      v4 = ZeroPte | 0x8000000000000000uLL;
  }
LABEL_9:
  *(_QWORD *)a1 = v4;
  if ( v6 )
    MiWritePteShadow(a1, v4, v7);
  if ( a2 )
    MiUpdateAwePageTable(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, -1LL, 0xFFFFFFFFLL);
  v9 = 48 * v5 - 0x220000000000LL;
  v10 = MiLockPageInline(v9);
  v11 = *(_BYTE *)(v9 + 34) & 0xEF;
  v12 = v10;
  *(_QWORD *)(v9 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(v9 + 34) = v11;
  v13 = *(_QWORD *)(v9 + 24);
  *(_WORD *)(v9 + 32) = 0;
  *(_QWORD *)(v9 + 24) = v13 ^ ((v13 - 1) ^ v13) & 0x3FFFFFFFFFFFFFFFLL;
  MiInsertPageInFreeOrZeroedList(v5, 256);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v12 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v12);
  return result;
}
