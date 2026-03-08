/*
 * XREFs of EtwpDisableStackWalkApc @ 0x140300D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 EtwpDisableStackWalkApc()
{
  struct _KTHREAD *CurrentThread; // r8
  unsigned __int32 v1; // edx

  CurrentThread = KeGetCurrentThread();
  _m_prefetchw((char *)&CurrentThread->116 + 4);
  do
    v1 = *(&CurrentThread->MiscFlags + 1);
  while ( v1 != _InterlockedCompareExchange((volatile signed __int32 *)&CurrentThread->116 + 1, v1 | 0xFF800000, v1) );
  return v1 >> 23;
}
