/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x1408E7CF8
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     PopThermalWriteShutdownToRegistry @ 0x14056FC18 (PopThermalWriteShutdownToRegistry.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x1408EBE40 (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x1408EBF2C (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x1408F9EF4 (PopSqmThermalUsermodeEvent.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopThermalProcessUsermodeEvent(__int64 a1)
{
  __int64 v2; // r9
  __int16 v3; // ax
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _WORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+34h] [rbp-14h]
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9 = 0;
  PopDiagTraceUsermodeThermalEvent();
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      PopAcquirePolicyLock(v4);
      PopThermalHibernateInitiated = 1;
      PopReleasePolicyLock(v6, v5);
    }
  }
  else
  {
    LOBYTE(v2) = 1;
    PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), v2);
    PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    v3 = 2 * *(_WORD *)(a1 + 12);
    v10 = a1 + 14;
    v8[0] = v3;
    v8[1] = v3;
    PopThermalWriteShutdownToRegistry((__int64)v8, (void *)(a1 + 4));
  }
  return 0LL;
}
