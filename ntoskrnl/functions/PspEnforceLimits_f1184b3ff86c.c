__int64 __fastcall PspEnforceLimits(char a1)
{
  void *i; // rcx
  __int64 result; // rax
  void *v4; // rbx
  _DWORD v5[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v6[8]; // [rsp+50h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 && PspNoWakeChargeReferencedProcess )
  {
    v5[0] = 0;
    ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)v5);
    ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  for ( i = 0LL; ; i = v4 )
  {
    result = PspGetNextJob(i);
    v4 = (void *)result;
    if ( !result )
      break;
    if ( !*(_QWORD *)(result + 1288) && (!a1 || (*(_DWORD *)(result + 1536) & 0x100000) != 0) )
    {
      _InterlockedAnd((volatile signed __int32 *)(result + 1536), 0xFFEFFFFF);
      memset(v6, 0, sizeof(v6));
      PspEnumJobsAndProcessesInJobHierarchy(v4, (__int64)v6, 6);
    }
  }
  return result;
}
