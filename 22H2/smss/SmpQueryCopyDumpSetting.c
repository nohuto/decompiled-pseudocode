/*
 * XREFs of SmpQueryCopyDumpSetting @ 0x14000ECE0
 * Callers:
 *     SmpPagefileInitialize @ 0x140008088 (SmpPagefileInitialize.c)
 * Callees:
 *     <none>
 */

bool SmpQueryCopyDumpSetting()
{
  return (SmpSystemWriteConstraintInfo & 4) != 0;
}
