/*
 * XREFs of VfGetPristineDriverInit @ 0x140ACE24C
 * Callers:
 *     VfPnpVerifyIrpStackDownward @ 0x140AE7FB0 (VfPnpVerifyIrpStackDownward.c)
 *     VfPowerVerifyIrpStackDownward @ 0x140AE87C0 (VfPowerVerifyIrpStackDownward.c)
 *     VfWmiVerifyIrpStackDownward @ 0x140AE89F0 (VfWmiVerifyIrpStackDownward.c)
 * Callees:
 *     MmIsDriverVerifying @ 0x14020A590 (MmIsDriverVerifying.c)
 */

PDRIVER_INITIALIZE __fastcall VfGetPristineDriverInit(struct _DRIVER_OBJECT *a1)
{
  PDRIVER_INITIALIZE *v2; // rax
  PDRIVER_INITIALIZE result; // rax

  if ( !MmIsDriverVerifying(a1) )
    return a1->DriverInit;
  v2 = *(PDRIVER_INITIALIZE **)&a1->DriverExtension[1].ServiceKeyName.Length;
  if ( !v2 )
    return a1->DriverInit;
  result = *v2;
  if ( !result )
    return a1->DriverInit;
  return result;
}
