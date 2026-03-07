__int64 __fastcall PdcPoResiliencyClient(int a1, char a2, unsigned int a3)
{
  int v4; // ecx
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v4 = a1 - 1;
  if ( !v4 )
    PopPdcIdleResiliencyCallback(a3);
  v5 = v4 - 1;
  if ( !v5 )
  {
    PopAcquirePolicyLock(0);
    if ( !PopDeepIoCoalescingEnabled )
    {
LABEL_7:
      PopPdcIoCoalescing = a2;
      PopCheckResiliencyScenarios();
    }
LABEL_8:
    PopReleasePolicyLock(v7, v6, v8);
    return 0LL;
  }
  if ( v5 == 1 )
  {
    PopAcquirePolicyLock(1);
    if ( PopDeepIoCoalescingEnabled )
      goto LABEL_7;
    goto LABEL_8;
  }
  return 0LL;
}
