/*
 * XREFs of NVMeHwResetBus @ 0x1C0017C60
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 */

char __fastcall NVMeHwResetBus(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 20) )
    return 1;
  else
    return NVMeControllerReset(a1);
}
