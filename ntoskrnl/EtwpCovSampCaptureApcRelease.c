/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x1406009D4
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x1409EDB90 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461C2A (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140C31888;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, (struct _SLIST_ENTRY *)a1);
}
