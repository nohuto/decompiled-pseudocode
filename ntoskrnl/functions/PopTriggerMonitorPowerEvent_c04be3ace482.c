__int64 __fastcall PopTriggerMonitorPowerEvent(char a1, int a2)
{
  _DWORD *v3; // r8
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rax
  _DWORD *i; // rcx
  __int64 (__fastcall **v8)(__int64, unsigned int *, int *); // rbx
  __int64 v9; // rcx
  int v10; // edi
  __int64 (__fastcall *v11)(__int64, unsigned int *, int *); // r10
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+48h] [rbp+20h] BYREF

  v15 = 0;
  v16 = 0;
  v3 = &PopMonitorEventMapping;
  v4 = 0LL;
  while ( *v3 != a2 )
  {
    v4 = (unsigned int)(v4 + 1);
    v3 += 2;
    if ( (unsigned int)v4 >= 0x37 )
      return (unsigned int)-1073741811;
  }
  v5 = *((_DWORD *)&PopMonitorEventMapping + 2 * v4 + 1);
  if ( !v5 )
    return (unsigned int)-1073741811;
  v6 = 0LL;
  for ( i = &PopPowerEventTable; *i != v5; i += 12 )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= 0x34 )
      return (unsigned int)-1073741823;
  }
  v8 = (__int64 (__fastcall **)(__int64, unsigned int *, int *))((char *)&PopPowerEventTable + 48 * v6);
  if ( !v8 )
    return (unsigned int)-1073741823;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerEventLock);
  LOBYTE(v9) = a1;
  v10 = v8[3](v9, &v15, &v16);
  v11 = (__int64 (__fastcall *)(__int64, unsigned int *, int *))MEMORY[0xFFFFF78000000008];
  v12 = (unsigned int)PopPowerEventTraceCount;
  v8[4] = (__int64 (__fastcall *)(__int64, unsigned int *, int *))((char *)v8[4] + 1);
  v8[5] = v11;
  v13 = 3 * v12;
  *((_DWORD *)&PopPowerEventTrace + 2 * v13) = v5;
  PopPowerEventTraceCount = ((_BYTE)v12 + 1) & 0x1F;
  *((_DWORD *)&PopPowerEventTrace + 2 * v13 + 2) = v15;
  *((_DWORD *)&PopPowerEventTrace + 2 * v13 + 1) = v10;
  *((_QWORD *)&PopPowerEventTrace + v13 + 2) = v11;
  if ( v10 >= 0 )
  {
    PopDiagTracePowerStateEvent(v5);
    if ( v15 )
      v10 = PopPowerAggregatorHandleIntent(v15, &v16, *((unsigned int *)v8 + 4), *(unsigned int *)v8);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerEventLock);
  return (unsigned int)v10;
}
