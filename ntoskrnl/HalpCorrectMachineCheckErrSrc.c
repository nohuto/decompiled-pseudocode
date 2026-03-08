/*
 * XREFs of HalpCorrectMachineCheckErrSrc @ 0x140A8E8A4
 * Callers:
 *     HalpCorrectErrSrc @ 0x140A8E860 (HalpCorrectErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     HalpIsCmciImplemented @ 0x140A8E988 (HalpIsCmciImplemented.c)
 */

__int64 __fastcall HalpCorrectMachineCheckErrSrc(_DWORD *a1, _DWORD *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax

  if ( !a1[2] || (unsigned __int8)HalpIsCmciImplemented() )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( a1[5] < ActiveProcessorCount )
      a1[5] = ActiveProcessorCount;
  }
  if ( a1[6] < 5u )
    a1[6] = 5;
  result = 0LL;
  *a2 = 372;
  return result;
}
