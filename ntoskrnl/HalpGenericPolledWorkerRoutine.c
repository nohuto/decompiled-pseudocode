/*
 * XREFs of HalpGenericPolledWorkerRoutine @ 0x14029A9C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpCheckAndReportGhes @ 0x14029AA2C (HalpCheckAndReportGhes.c)
 */

__int64 __fastcall HalpGenericPolledWorkerRoutine(__int64 a1)
{
  __int64 result; // rax
  __int64 *i; // rdi

  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 244), 1, 0);
  if ( !(_DWORD)result )
  {
    for ( i = (__int64 *)HalpGenericPolledErrorSourceListHead; i != &HalpGenericPolledErrorSourceListHead; i = (__int64 *)*i )
      HalpCheckAndReportGhes(i);
    result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 240), 0);
    _InterlockedExchange((volatile __int32 *)(a1 + 244), 0);
  }
  return result;
}
