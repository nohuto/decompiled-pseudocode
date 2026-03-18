/*
 * XREFs of PfSnEndProcessTrace @ 0x1407E58A0
 * Callers:
 *     PfProcessExitNotification @ 0x1407612C4 (PfProcessExitNotification.c)
 *     PfSnFailProcessTrace @ 0x14097F8B4 (PfSnFailProcessTrace.c)
 *     PfSnOperationProcess @ 0x14097F8F0 (PfSnOperationProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PfSnReferenceProcessTrace @ 0x1402E25B4 (PfSnReferenceProcessTrace.c)
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

__int64 __fastcall PfSnEndProcessTrace(__int64 a1, signed __int32 a2, const void *a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rdi

  v5 = PfSnReferenceProcessTrace(a1);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    if ( !a3 || !memcmp(a3, (const void *)(v5 + 24), 0x40uLL) )
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 400), a2, 0) )
        v6 = -1073741431;
      else
        ExQueueWorkItem((PWORK_QUEUE_ITEM)(v7 + 368), DelayedWorkQueue);
    }
    else
    {
      v6 = -1073741198;
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 360));
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v6;
}
