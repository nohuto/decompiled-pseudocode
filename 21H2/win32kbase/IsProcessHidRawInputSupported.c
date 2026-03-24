/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C00B6828
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00572E8 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C01674DC (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C01D02A0 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C0258008 )
    return qword_1C0258008();
  else
    return 3221225659LL;
}
