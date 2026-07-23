/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x1409D08A8
 * Callers:
 *     VfFreeCommonBuffer @ 0x1409CCB90 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1409CAD6C (DECREMENT_COMMON_BUFFERS.c)
 *     VF_FIND_BUFFER @ 0x1409CB1E8 (VF_FIND_BUFFER.c)
 *     ViCheckPadding @ 0x1409CECA0 (ViCheckPadding.c)
 */

unsigned __int16 *__fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        _QWORD *a2,
        void *a3,
        char a4)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int16 **v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  char v18; // [rsp+20h] [rbp-28h]

  result = VF_FIND_BUFFER(a2 + 10, (__int64)a3);
  v9 = result;
  if ( result )
  {
    ViCheckPadding(*((_QWORD *)result + 2), *((_DWORD *)result + 1), *((_QWORD *)result + 3), *((_DWORD *)result + 2));
    v10 = KeAcquireSpinLockRaiseToDpc(a2 + 12);
    v11 = *((_QWORD *)v9 + 6);
    v12 = (unsigned __int16 **)*((_QWORD *)v9 + 7);
    if ( *(unsigned __int16 **)(v11 + 8) != v9 + 24 || *v12 != v9 + 24 )
      __fastfail(3u);
    *v12 = (unsigned __int16 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    KxReleaseSpinLock(a2 + 12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v10);
    memset(a3, 0, *((unsigned int *)v9 + 2));
    v18 = a4;
    a1(a2[2], *((unsigned int *)v9 + 1), *((_QWORD *)v9 + 4), *((_QWORD *)v9 + 2), v18);
    DECREMENT_COMMON_BUFFERS((__int64)a2);
    ExFreePoolWithTag(v9, 0);
    return (unsigned __int16 *)1;
  }
  return result;
}
