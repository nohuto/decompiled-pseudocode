/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x140A423B8
 * Callers:
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(ULONG_PTR a1, ULONG_PTR a2, int a3, int a4, __int16 a5)
{
  int v6; // r8d
  unsigned int v7; // edi
  __int64 result; // rax

  if ( a3 == 3 )
    v6 = a4 != 0 ? 66080 : 65568;
  else
    v6 = 2097184;
  v7 = v6 | 0x100000;
  if ( (a5 & 0x400) == 0 )
    v7 = v6;
  result = MiRemovePhysicalMemory(a1, a2, v7);
  if ( (int)result >= 0 && (v7 & 0x100000) == 0 )
    _InterlockedExchangeAdd64(&qword_140C69630, -(__int64)a2);
  return result;
}
