/*
 * XREFs of KxReenterRetpolinedCode @ 0x140571938
 * Callers:
 *     ExpWorkerThread @ 0x140352200 (ExpWorkerThread.c)
 *     KeReenterRetpolinedCode @ 0x14040ACB0 (KeReenterRetpolinedCode.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KxReenterRetpolinedCode()
{
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v3; // r8
  int v4; // ett
  __int16 v5; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  result = (__int64)KeGetCurrentPrcb();
  *(_BYTE *)(result + 1750) &= ~1u;
  if ( (v5 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = CurrentPrcb->SchedulerAssist;
    if ( v3 )
    {
      _m_prefetchw(v3);
      LODWORD(result) = *v3;
      do
      {
        v4 = result;
        result = (unsigned int)_InterlockedCompareExchange(v3, result & 0xFFDFFFFF, result);
      }
      while ( v4 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
