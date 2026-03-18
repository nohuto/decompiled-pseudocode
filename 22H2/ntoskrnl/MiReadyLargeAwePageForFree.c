/*
 * XREFs of MiReadyLargeAwePageForFree @ 0x14064BCC8
 * Callers:
 *     MiFreeAwePagesFromMdl @ 0x140649D80 (MiFreeAwePagesFromMdl.c)
 *     MiFreePhysicalPageChain @ 0x14064A1E0 (MiFreePhysicalPageChain.c)
 * Callees:
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiClearAweLargePageMetadata @ 0x140649658 (MiClearAweLargePageMetadata.c)
 */

__int64 __fastcall MiReadyLargeAwePageForFree(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = (unsigned __int8)MiLockPageInline(a1);
  MiClearAweLargePageMetadata(a1);
  v3 = *(_QWORD *)(a1 + 24);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = v3 ^ ((v3 + 1) ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
