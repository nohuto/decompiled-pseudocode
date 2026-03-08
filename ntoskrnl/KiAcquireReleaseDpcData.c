/*
 * XREFs of KiAcquireReleaseDpcData @ 0x14057A058
 * Callers:
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAcquireReleaseDpcData(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  __int64 result; // rax
  __int16 v3; // bx
  volatile signed __int32 *SchedulerAssist; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v6; // r8
  int v7; // ett
  signed __int32 v8[8]; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+20h] [rbp-8h]

  _InterlockedOr(v8, 0);
  v1 = (volatile signed __int64 *)(a1 + 16);
  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    v3 = v9;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 16));
    result = KxReleaseSpinLock(v1);
    if ( (v3 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 )
      {
        _m_prefetchw(v6);
        LODWORD(result) = *v6;
        do
        {
          v7 = result;
          result = (unsigned int)_InterlockedCompareExchange(v6, result & 0xFFDFFFFF, result);
        }
        while ( v7 != (_DWORD)result );
        if ( (result & 0x200000) != 0 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}
