/*
 * XREFs of MiUnlockStoreLockedPages @ 0x140318E70
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x14030EE40 (MmStoreProbeAndLockPages.c)
 *     SmKmUnlockMdl @ 0x14032989C (SmKmUnlockMdl.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiWriteCompletePfn @ 0x1402A6310 (MiWriteCompletePfn.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockStoreLockedPages(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 *v4; // r14
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rbp
  unsigned __int8 v11; // al
  __int64 v12; // r8
  unsigned int v13; // ecx
  unsigned __int64 v14; // r15
  __int64 v15; // rdi
  __int64 v16; // r12
  struct _KPRCB *CurrentPrcb; // r10
  bool v18; // zf

  v4 = (__int64 *)(a1 + 48);
  v6 = (*(unsigned int *)(a1 + 40) + 4095LL + (unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF)) >> 12;
  v7 = 0;
  v8 = a1 + 48 + 8 * v6;
  do
  {
    result = *v4;
    if ( *v4 == -1 )
      break;
    v10 = 48 * result - 0x58000000000LL;
    v11 = MiLockPageInline(v10, v6, a3, SchedulerAssist);
    v13 = v7 & 0xFFFFFFFD;
    v14 = v11;
    v7 |= 2u;
    if ( (*(_BYTE *)(v10 + 34) & 0x10) == 0 )
      v7 = v13;
    v15 = MiWriteCompletePfn(v10, v7, v12);
    if ( v15 )
      v16 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v10 + 40) >> 39) & 0x3FFLL));
    else
      v16 = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = -1LL << ((unsigned __int8)v14 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)v6;
          v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v14);
    if ( v15 )
      result = MiReleasePageFileInfo(v16, v15, 0LL);
    ++v4;
  }
  while ( (unsigned __int64)v4 < v8 );
  *(_WORD *)(a1 + 10) &= ~2u;
  return result;
}
