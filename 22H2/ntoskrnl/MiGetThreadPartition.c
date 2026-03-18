/*
 * XREFs of MiGetThreadPartition @ 0x14036EBC8
 * Callers:
 *     NtSetSystemInformation @ 0x14075F340 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1407EBA10 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C674C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
