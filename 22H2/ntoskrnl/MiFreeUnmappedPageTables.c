/*
 * XREFs of MiFreeUnmappedPageTables @ 0x140311338
 * Callers:
 *     MiDeleteSystemPageTableTail @ 0x140311190 (MiDeleteSystemPageTableTail.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUnmappedPageTables(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 result; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  struct _KPRCB *CurrentPrcb; // r10
  bool v11; // zf
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = 0LL;
  v6 = (_QWORD *)a2;
  v7 = a1;
  if ( a1 )
  {
    do
    {
      v8 = *(_QWORD *)v7;
      v9 = (unsigned __int8)MiLockPageInline(v7, a2, a3, SchedulerAssist);
      *(_BYTE *)(v7 + 34) = *(_BYTE *)(v7 + 34) & 0xF8 | 6;
      if ( (unsigned int)MiDecrementShareCount(v7) == 3 )
        ++v6[1];
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      result = (unsigned int)KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            a2 = -1LL << ((unsigned __int8)v9 + 1);
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            result = ~(unsigned __int16)a2;
            v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
            a3 = (unsigned int)result & SchedulerAssist[5];
            SchedulerAssist[5] = a3;
            if ( v11 )
              result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
      ++v5;
      v7 = v8;
    }
    while ( v8 );
  }
  v6[3] += v5;
  *v6 += v5;
  return result;
}
