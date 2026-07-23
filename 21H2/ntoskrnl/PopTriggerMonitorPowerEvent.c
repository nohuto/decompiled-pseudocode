/*
 * XREFs of PopTriggerMonitorPowerEvent @ 0x1408F0D84
 * Callers:
 *     PoTtmInitiatePowerStateTransition @ 0x1408EFCD8 (PoTtmInitiatePowerStateTransition.c)
 *     PopProcessSessionDisplayStateChange @ 0x1408F0388 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopDiagTracePowerStateEvent @ 0x1408EB284 (PopDiagTracePowerStateEvent.c)
 *     PopPowerAggregatorHandleIntent @ 0x1408EE468 (PopPowerAggregatorHandleIntent.c)
 */

__int64 __fastcall PopTriggerMonitorPowerEvent(char a1, int a2)
{
  int v3; // edi
  __int64 v4; // rax
  _DWORD *i; // rcx
  int v6; // esi
  __int64 v7; // rax
  _DWORD *j; // rcx
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // edx
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0;
  if ( PopPlatformAoAc )
  {
    v4 = 0LL;
    for ( i = &PopMonitorEventMapping; *i != a2; i += 2 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 0x33 )
        return (unsigned int)-1073741811;
    }
    v6 = *((_DWORD *)&PopMonitorEventMapping + 2 * v4 + 1);
    if ( !v6 )
      return (unsigned int)-1073741811;
    v7 = 0LL;
    for ( j = &PopPowerEventTable; *j != v6; j += 12 )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= 0x30 )
        return (unsigned int)-1073741823;
    }
    v9 = (char *)&PopPowerEventTable + 48 * v7;
    if ( !v9 )
      return (unsigned int)-1073741823;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
    LOBYTE(v10) = a1;
    v3 = (*((__int64 (__fastcall **)(__int64, unsigned int *))v9 + 3))(v10, &v16);
    v11 = MEMORY[0xFFFFF78000000008];
    v12 = (unsigned int)PopPowerEventTraceCount;
    ++*((_QWORD *)v9 + 4);
    *((_QWORD *)v9 + 5) = v11;
    v13 = 3 * v12;
    *((_DWORD *)&PopPowerEventTrace + 2 * v13) = v6;
    PopPowerEventTraceCount = ((_BYTE)v12 + 1) & 0x1F;
    v14 = v16;
    *((_DWORD *)&PopPowerEventTrace + 2 * v13 + 2) = v16;
    *((_DWORD *)&PopPowerEventTrace + 2 * v13 + 1) = v3;
    *((_QWORD *)&PopPowerEventTrace + v13 + 2) = v11;
    if ( v3 >= 0 )
    {
      PopDiagTracePowerStateEvent(v6, v14);
      if ( v16 )
        v3 = PopPowerAggregatorHandleIntent(v16, *((_DWORD *)v9 + 4), *(_DWORD *)v9);
    }
    PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
