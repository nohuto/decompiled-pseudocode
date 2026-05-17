/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800D7570
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8BA0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85D0 (RtlpChangeQueryDebugBufferTarget.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection();
  return 0LL;
}
