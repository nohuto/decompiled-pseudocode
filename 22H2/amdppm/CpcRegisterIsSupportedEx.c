/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C0003E0C
 * Callers:
 *     InitAcpiCpc @ 0x1C0021EB8 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002A984 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C002D198 (InitCpcStatesInternal.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0003DF4 (CpcRegisterIsSupported.c)
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  return CpcRegisterIsSupported(a1);
}
