/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C0031CA4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C00F626A (ApiSetProcessHidRawInput.c)
 *     RIMIDECreateHIDDesc @ 0x1C01C16CC (RIMIDECreateHIDDesc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C02D7410 )
    return qword_1C02D7410();
  else
    return 3221225659LL;
}
