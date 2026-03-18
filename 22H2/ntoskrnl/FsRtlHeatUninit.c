/*
 * XREFs of FsRtlHeatUninit @ 0x14093FBB0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpHeatUnregisterVolume @ 0x14093FD74 (FsRtlpHeatUnregisterVolume.c)
 */

__int64 __fastcall FsRtlHeatUninit(__int64 a1, __int64 a2)
{
  return FsRtlpHeatUnregisterVolume(a2);
}
