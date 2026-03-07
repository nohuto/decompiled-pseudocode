char __fastcall SepAdtDetermineInsertQueue(__int64 a1)
{
  char v1; // bl
  __int64 Pool2; // rax
  __int64 v4; // rcx
  int v5; // eax
  _OWORD P[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]

  v1 = 0;
  if ( !SepCrashOnAuditFail && *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL) != 4612 )
  {
    if ( SepAdtDiscardingAudits )
    {
      if ( dword_140C70CD0 >= (unsigned int)SepAdtMinListLength )
      {
        ++SepAdtCountEventsDiscarded;
        return v1;
      }
      SepAdtDiscardingAudits = 0;
      if ( KeGetCurrentIrql() >= 2u )
      {
        Pool2 = ExAllocatePool2(64LL, 40LL, 538994003LL);
        v4 = Pool2;
        if ( Pool2 )
        {
          *(_QWORD *)(Pool2 + 24) = Pool2;
          *(_QWORD *)(Pool2 + 16) = SepAdtGenerateDiscardAudit;
          v5 = SepAdtCountEventsDiscarded;
          *(_QWORD *)v4 = 0LL;
          *(_DWORD *)(v4 + 32) = v5;
          *(_BYTE *)(v4 + 36) = 1;
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
    if ( dword_140C70CD0 >= (unsigned int)SepAdtMaxListLength )
    {
      SepAdtDiscardingAudits = 1;
      SepAdtCountEventsDiscarded = 1;
      return v1;
    }
  }
  return 1;
}
