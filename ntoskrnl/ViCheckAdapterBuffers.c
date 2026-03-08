/*
 * XREFs of ViCheckAdapterBuffers @ 0x140AC51E4
 * Callers:
 *     VfMapTransfer @ 0x140AC3F00 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140AC40B0 (VfMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ViCheckTag @ 0x140AC5514 (ViCheckTag.c)
 */

__int64 __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  __int64 result; // rax
  _QWORD **v2; // rbx
  __int16 v3; // bp
  volatile signed __int64 *v4; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r14
  unsigned __int64 v7; // rdi
  __int64 i; // r10
  __int64 v9; // rdx
  __int16 v10; // r9
  unsigned __int64 v11; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v14; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = (_QWORD **)(a1 + 112);
  v3 = 0;
  if ( *v2 != v2 )
  {
    v4 = (volatile signed __int64 *)(a1 + 128);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
    v6 = *v2;
    v7 = v5;
    for ( i = (__int64)(*v2 - 6); v2 != v6; v6 = (_QWORD *)*v6 )
    {
      v9 = *(unsigned int *)(i + 8);
      v10 = v3 | 1;
      v11 = *(_QWORD *)(i + 24) - *(_QWORD *)(i + 16);
      if ( v11 < 8 )
        v10 = v3;
      v3 = v10 | 2;
      if ( v9 + v11 + 8 > *(unsigned int *)(i + 4) )
        v3 = v10;
      ViCheckTag(*(_QWORD *)(i + 24), v9);
      i = *v6 - 48LL;
    }
    result = KxReleaseSpinLock(v4);
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
        v14 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v14 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
  }
  return result;
}
