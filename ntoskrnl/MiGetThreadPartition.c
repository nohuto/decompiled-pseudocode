/*
 * XREFs of MiGetThreadPartition @ 0x14036CC9C
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1407F7D00 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
