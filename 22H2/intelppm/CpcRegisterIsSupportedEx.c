/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1C000901C
 * Callers:
 *     InitAcpiCpc @ 0x1C00220D8 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x1C002F0D8 (ValidateAcpiCPC.c)
 *     InitCpcStatesInternal @ 0x1C0035000 (InitCpcStatesInternal.c)
 * Callees:
 *     CpcRegisterIsSupported @ 0x1C0009004 (CpcRegisterIsSupported.c)
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  return CpcRegisterIsSupported(a1);
}
