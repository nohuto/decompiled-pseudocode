__int64 __fastcall PopPolicyWorkerActionPromote(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  char v4; // bl
  int v5; // ecx

  PopAcquirePolicyLock(a1);
  qword_140C3CF20 = (__int64)KeGetCurrentThread();
  if ( (_BYTE)PopAction )
  {
    v4 = PopAction;
    if ( !byte_140C3CD61 )
    {
      if ( (PopAction & 2) == 0 )
        goto LABEL_11;
      PopSetPowerActionState(1);
      v5 = 2;
      goto LABEL_10;
    }
    if ( byte_140C3CD61 != 2 )
      goto LABEL_11;
    if ( (int)PopIssueActionRequest(1, qword_140C3CD64, SHIDWORD(qword_140C3CD64), dword_140C3CD6C) >= 0 )
    {
      LOBYTE(PopAction) = ~v4 & PopAction;
      goto LABEL_11;
    }
    if ( byte_140C3CD61 != 2 )
    {
      v5 = 1;
LABEL_10:
      PopGetPolicyWorker(v5);
    }
  }
LABEL_11:
  qword_140C3CF20 = 0LL;
  PopReleasePolicyLock(v2, v1, v3);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
