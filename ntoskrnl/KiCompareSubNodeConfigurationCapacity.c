/*
 * XREFs of KiCompareSubNodeConfigurationCapacity @ 0x140B321E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCompareSubNodeConfigurationCapacity(const void *a1, const void *a2)
{
  return *(unsigned __int8 *)(*(_QWORD *)a2 + 4LL) - (unsigned int)*(unsigned __int8 *)(*(_QWORD *)a1 + 4LL);
}
