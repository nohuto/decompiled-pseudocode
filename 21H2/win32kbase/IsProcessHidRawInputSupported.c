/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C005670C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C020EF90 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C029CC28 )
    return qword_1C029CC28();
  else
    return 3221225659LL;
}
