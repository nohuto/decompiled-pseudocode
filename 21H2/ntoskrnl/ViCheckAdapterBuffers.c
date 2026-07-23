/*
 * XREFs of ViCheckAdapterBuffers @ 0x1409CEB2C
 * Callers:
 *     VfMapTransfer @ 0x1409CD870 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1409CDA30 (VfMapTransferEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ViCheckTag @ 0x1409CEE50 (ViCheckTag.c)
 */

__int64 __fastcall ViCheckAdapterBuffers(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v2; // rbx
  __int16 v3; // bp
  KSPIN_LOCK *v4; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r10
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  __int16 v9; // r9
  unsigned __int64 v10; // rax
  _QWORD *v11; // r10
  _QWORD *v12; // r14
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = (_QWORD *)(a1 + 80);
  v3 = 0;
  if ( (_QWORD *)*v2 != v2 )
  {
    v4 = (KSPIN_LOCK *)(a1 + 96);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v6 = (_QWORD *)*v2;
    v7 = v5;
    while ( 1 )
    {
      v11 = v6 - 6;
      v12 = v11 + 6;
      if ( v2 == v11 + 6 )
        break;
      v8 = *((unsigned int *)v11 + 2);
      v9 = v3 | 1;
      v10 = v11[3] - v11[2];
      if ( v10 < 8 )
        v9 = v3;
      v3 = v9 | 2;
      if ( v8 + v10 + 8 > *((unsigned int *)v11 + 1) )
        v3 = v9;
      ViCheckTag(v11[3], v8);
      v6 = (_QWORD *)*v12;
    }
    KxReleaseSpinLock(v4);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v15 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
  }
  return result;
}
