/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140B93B30
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14031F8FC (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
