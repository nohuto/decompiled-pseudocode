/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x14034591C
 * Callers:
 *     MiAssignNonPagedPoolPte @ 0x140345570 (MiAssignNonPagedPoolPte.c)
 *     MiFindContiguousPagesEx @ 0x1403B5CF8 (MiFindContiguousPagesEx.c)
 *     MiFindLargeNodePage @ 0x14061B228 (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x140A2B84C (MiRemoveMdlPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int8 v9; // al
  __int64 v10; // r9
  unsigned int v11; // edx
  unsigned __int64 v12; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf

  v9 = MiLockPageInline(a1);
  v11 = *(unsigned __int8 *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  v12 = v9;
  if ( v11 >> 6 != a4 )
  {
    MiChangePageAttribute(a1, a4, 1LL, v10);
    LOBYTE(v11) = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  result = a5;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v11 & 0xF8 | 6;
  if ( (a2 & 3) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    *(_QWORD *)(a1 + 16) = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    result = 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v12 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
      v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v16 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v12);
  return result;
}
