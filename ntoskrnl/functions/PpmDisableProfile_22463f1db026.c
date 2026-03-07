void __fastcall PpmDisableProfile(__int64 a1)
{
  char v2; // r14
  char v3; // bp
  __int64 **v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  *(_DWORD *)(a1 + 28) &= ~1u;
  v2 = *(_BYTE *)(a1 + 8);
  v3 = 1;
  PpmResetProfileSettings(a1);
  v4 = &off_140C07388;
  v5 = 6LL;
  do
  {
    v6 = *(v4 - 1);
    v7 = *(_QWORD *)(a1 + 12) - *v6;
    if ( !v7 )
      v7 = *(_QWORD *)(a1 + 20) - v6[1];
    if ( !v7 )
    {
      **v4 = 0LL;
      v8 = *(_QWORD *)(a1 + 12) - *(_QWORD *)&GUID_POWER_POLICY_PROFILE_LOW_POWER.Data1;
      if ( !v8 )
        v8 = *(_QWORD *)(a1 + 20) - *(_QWORD *)GUID_POWER_POLICY_PROFILE_LOW_POWER.Data4;
      if ( v8 )
      {
        PpmReinitializeHeteroEngine(1, 0);
        v3 = 0;
      }
    }
    v4 += 2;
    --v5;
  }
  while ( v5 );
  PpmEventTraceProfileEnable(v2, 0);
  if ( v3 )
    PpmReleaseLock(&PpmPerfPolicyLock);
}
