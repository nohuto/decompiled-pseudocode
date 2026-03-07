int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  bool v2; // r14
  const GUID *RelatedActivityId; // rsi
  const EVENT_DESCRIPTOR *v4; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  GUID *Flink; // rbx
  bool IsActivityTracingEventEnabled; // al
  __int64 v8; // rcx
  _WORD *v9; // rax
  char v11; // [rsp+40h] [rbp-68h]
  GUID ActivityId; // [rsp+60h] [rbp-48h] BYREF
  __m128i v13; // [rsp+70h] [rbp-38h] BYREF

  ActivityId = 0LL;
  v13 = 0LL;
  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    Flink = (GUID *)CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
    {
      IsActivityTracingEventEnabled = IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp);
      if ( IsActivityTracingEventEnabled )
        RelatedActivityId = Flink;
      else
        ActivityId = *Flink;
      v2 = !IsActivityTracingEventEnabled;
      v4 = (const EVENT_DESCRIPTOR *)((unsigned __int64)&IoTrace_KernelIo_AllocateIrp & -(__int64)IsActivityTracingEventEnabled);
    }
    else if ( PnpIsSafeToExamineUserModeTeb() && (*(_BYTE *)(a1 + 71) & 0x21) != 0x21 )
    {
      v11 = 0;
      if ( KeGetPcr()->NtTib.$5C14B8504E5BBEA9C78932444904D36F::$B3978927B1617B2B8454E8E478E76600::Self )
      {
        v13 = *(__m128i *)&KeGetPcr()->NtTib.$5C14B8504E5BBEA9C78932444904D36F::$B3978927B1617B2B8454E8E478E76600::Self[105].SubSystemTib;
        v11 = 1;
      }
      if ( v11 )
      {
        v8 = *(_QWORD *)&NullGuid.Data1 - v13.m128i_i64[0];
        if ( *(_QWORD *)&NullGuid.Data1 == v13.m128i_i64[0] )
          v8 = *(_QWORD *)NullGuid.Data4 - _mm_srli_si128(v13, 8).m128i_u64[0];
        if ( v8 )
        {
          if ( IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            RelatedActivityId = (const GUID *)&v13;
            v4 = &IoTrace_UserInitiatedIo;
          }
          else
          {
            ActivityId = (GUID)v13;
            v2 = 1;
          }
        }
      }
    }
  }
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v9) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v9 >= 0 )
  {
    v9 = *(_WORD **)(a1 + 200);
    *v9 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v9) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v9;
}
