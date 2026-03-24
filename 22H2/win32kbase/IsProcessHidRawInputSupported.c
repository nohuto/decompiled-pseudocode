/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C00B6B68
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016740C (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C01D01D0 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C0257008 )
    return qword_1C0257008();
  else
    return 3221225659LL;
}
