__int64 __fastcall KiTpCompletion(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  struct _KPRCB *CurrentPrcb; // rax
  _KPRCB_TRACEPOINT_LOG *TracepointLog; // rdx
  unsigned int LogIndex; // ecx
  _KPRCB_TRACEPOINT_LOG_ENTRY *v9; // rbx
  __int64 result; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[2] = a4;
  v11[0] = a2;
  v11[1] = a3;
  CurrentPrcb = KeGetCurrentPrcb();
  TracepointLog = CurrentPrcb->TracepointLog;
  if ( !TracepointLog || CurrentPrcb->IpiFrozen || (KiBugCheckActive & 3) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    LogIndex = TracepointLog->LogIndex;
    v9 = &TracepointLog->Entries[(unsigned __int8)LogIndex];
    TracepointLog->LogIndex = LogIndex + 1;
    v9->OldPc = *(_QWORD *)(a3 + 248);
    v9->OldSp = *(_QWORD *)(a3 + 152);
  }
  result = KiTpEmulateInstruction(a1, v11);
  if ( v9 )
  {
    v9->NewPc = *(_QWORD *)(a3 + 248);
    v9->NewSp = *(_QWORD *)(a3 + 152);
  }
  return result;
}
