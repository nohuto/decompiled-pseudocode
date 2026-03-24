/*
 * XREFs of MiStoreMarkLockedPagesModified @ 0x14030EFB0
 * Callers:
 *     MmStoreProbeAndLockPages @ 0x14030EE40 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402804B0 (MiLockPageInline.c)
 *     MiCapturePageFileInfoInline @ 0x1402FB540 (MiCapturePageFileInfoInline.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiStoreMarkLockedPagesModified(_DWORD *a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  _QWORD *v4; // rdi
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rbx
  __int64 v13; // r15
  struct _KPRCB *CurrentPrcb; // r10
  bool v15; // zf

  v4 = a1 + 12;
  result = (unsigned int)a1[10] + 4095LL;
  v6 = (result + (unsigned __int64)((a1[8] + a1[11]) & 0xFFF)) >> 12;
  v7 = (unsigned __int64)&a1[2 * v6 + 12];
  while ( (unsigned __int64)v4 < v7 )
  {
    v8 = 48LL * *v4 - 0x58000000000LL;
    v9 = (unsigned __int8)MiLockPageInline(v8, v6, a3, SchedulerAssist);
    v10 = MiCapturePageFileInfoInline((unsigned __int64 *)(v8 + 16), 1, 0);
    v11 = *(_BYTE *)(v8 + 34);
    v12 = v10;
    if ( (v11 & 0x10) == 0 )
      *(_BYTE *)(v8 + 34) = v11 | 0x10;
    v13 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v8 + 40) >> 39) & 0x3FFLL));
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = -1LL << ((unsigned __int8)v9 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)v6;
          v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          a3 = (unsigned int)result & SchedulerAssist[5];
          SchedulerAssist[5] = a3;
          if ( v15 )
            result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v9);
    if ( v12 )
      result = MiReleasePageFileInfo(v13, v12, 0LL);
    ++v4;
  }
  return result;
}
