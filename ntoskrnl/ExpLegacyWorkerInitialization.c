/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x14039F874
 * Callers:
 *     ExpWorkerInitialization @ 0x140B6383C (ExpWorkerInitialization.c)
 * Callees:
 *     <none>
 */

__int64 ExpLegacyWorkerInitialization()
{
  int v0; // ecx
  int v1; // edx
  int v2; // eax
  unsigned __int16 *v3; // rax
  ULONG_PTR v4; // rax
  unsigned __int16 *v5; // rax
  __int64 result; // rax

  v0 = ExpAdditionalCriticalWorkerThreads;
  if ( (unsigned int)ExpAdditionalCriticalWorkerThreads > 0x64 )
  {
    v0 = 100;
    ExpAdditionalCriticalWorkerThreads = 100;
  }
  v1 = ExpAdditionalDelayedWorkerThreads;
  if ( (unsigned int)ExpAdditionalDelayedWorkerThreads > 0x64 )
  {
    v1 = 100;
    ExpAdditionalDelayedWorkerThreads = 100;
  }
  v2 = 5;
  if ( (_BYTE)dword_140D1D1EC )
    v2 = 10;
  ExCriticalWorkerThreads = v0 + v2;
  ExDelayedWorkerThreads = v1 + 7;
  v3 = 0LL;
  if ( (_UNKNOWN *)KeNodeBlock[0] != &KiNodeInit )
    v3 = (unsigned __int16 *)KeNodeBlock[0];
  v4 = **(_QWORD **)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8LL * *v3);
  if ( (v4 & 1) != 0 )
    v4 = 0LL;
  ExWorkerQueue = v4;
  v5 = 0LL;
  if ( (_UNKNOWN *)KeNodeBlock[0] != &KiNodeInit )
    v5 = (unsigned __int16 *)KeNodeBlock[0];
  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8LL * *v5) + 8LL);
  if ( (result & 1) != 0 )
    result = 0LL;
  IoWorkerQueue = result;
  return result;
}
