/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800D7570
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8BA0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DA20 (NtUnmapViewOfSection.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85D0 (RtlpChangeQueryDebugBufferTarget.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
