/*
 * XREFs of HalpFirmwareInitSystem @ 0x140A8E380
 * Callers:
 *     <none>
 * Callees:
 *     HalpFirmwareInitDiscard @ 0x140B68B70 (HalpFirmwareInitDiscard.c)
 */

__int64 __fastcall HalpFirmwareInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 7 )
    HalpFirmwareInitDiscard(a3);
  return 0LL;
}
