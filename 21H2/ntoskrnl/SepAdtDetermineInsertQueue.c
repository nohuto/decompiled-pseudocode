/*
 * XREFs of SepAdtDetermineInsertQueue @ 0x1403CB9D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     SepAdtGenerateDiscardAudit @ 0x14091F0E0 (SepAdtGenerateDiscardAudit.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall SepAdtDetermineInsertQueue(__int64 a1)
{
  char v1; // bl
  _QWORD *PoolWithTag; // rax
  _QWORD *v4; // rcx
  int v5; // eax
  _OWORD P[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( !SepCrashOnAuditFail && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) != 4612 )
  {
    if ( SepAdtDiscardingAudits )
    {
      if ( dword_140C54750 >= (unsigned int)SepAdtMinListLength )
      {
        ++SepAdtCountEventsDiscarded;
        return v1;
      }
      SepAdtDiscardingAudits = 0;
      if ( KeGetCurrentIrql() >= 2u )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x20206553u);
        v4 = PoolWithTag;
        if ( PoolWithTag )
        {
          PoolWithTag[3] = PoolWithTag;
          PoolWithTag[2] = SepAdtGenerateDiscardAudit;
          v5 = SepAdtCountEventsDiscarded;
          *v4 = 0LL;
          *((_DWORD *)v4 + 8) = v5;
          *((_BYTE *)v4 + 36) = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)v4, DelayedWorkQueue);
        }
      }
      else
      {
        v7 = (unsigned int)SepAdtCountEventsDiscarded;
        memset(P, 0, sizeof(P));
        SepAdtGenerateDiscardAudit(P);
      }
      SepAdtCountEventsDiscarded = 0;
    }
    if ( dword_140C54750 >= (unsigned int)SepAdtMaxListLength )
    {
      SepAdtDiscardingAudits = 1;
      SepAdtCountEventsDiscarded = 1;
      return v1;
    }
  }
  return 1;
}
