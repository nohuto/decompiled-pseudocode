/*
 * XREFs of ViSpecialFreeCommonBuffer @ 0x140AC6FA8
 * Callers:
 *     VfFreeCommonBuffer @ 0x140AC3280 (VfFreeCommonBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140AC132C (DECREMENT_COMMON_BUFFERS.c)
 *     VF_FIND_BUFFER @ 0x140AC17A8 (VF_FIND_BUFFER.c)
 *     ViCheckPadding @ 0x140AC5364 (ViCheckPadding.c)
 */

unsigned __int16 *__fastcall ViSpecialFreeCommonBuffer(
        void (__fastcall *a1)(_QWORD, _QWORD, _QWORD, _QWORD, char),
        __int64 a2,
        void *a3,
        char a4)
{
  unsigned __int16 *result; // rax
  unsigned __int16 *v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  unsigned __int16 **v12; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  char v18; // [rsp+20h] [rbp-28h]

  result = VF_FIND_BUFFER(a2 + 112, (__int64)a3);
  v9 = result;
  if ( result )
  {
    ViCheckPadding(*((_QWORD *)result + 2), *((_DWORD *)result + 1), *((_QWORD *)result + 3), *((_DWORD *)result + 2));
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 128));
    v11 = *((_QWORD *)v9 + 6);
    v12 = (unsigned __int16 **)*((_QWORD *)v9 + 7);
    if ( *(unsigned __int16 **)(v11 + 8) != v9 + 24 || *v12 != v9 + 24 )
      __fastfail(3u);
    *v12 = (unsigned __int16 *)v11;
    *(_QWORD *)(v11 + 8) = v12;
    KxReleaseSpinLock((volatile signed __int64 *)(a2 + 128));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
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
    __writecr8(v10);
    memset(a3, 0, *((unsigned int *)v9 + 2));
    v18 = a4;
    a1(*(_QWORD *)(a2 + 40), *((unsigned int *)v9 + 1), *((_QWORD *)v9 + 4), *((_QWORD *)v9 + 2), v18);
    DECREMENT_COMMON_BUFFERS(a2);
    ExFreePoolWithTag(v9, 0);
    return (unsigned __int16 *)1;
  }
  return result;
}
