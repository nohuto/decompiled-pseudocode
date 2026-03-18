/*
 * XREFs of RtlIsCloudFilesPlaceholder @ 0x140463D30
 * Callers:
 *     CmpAdjustFileCFSafety @ 0x140419130 (CmpAdjustFileCFSafety.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsCloudFilesPlaceholder(__int16 a1, int a2)
{
  return (a1 & 0x400) != 0 && (a2 & 0xFFFF0FFF) == 0x9000001A;
}
