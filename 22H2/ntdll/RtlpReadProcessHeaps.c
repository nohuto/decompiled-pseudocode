/*
 * XREFs of RtlpReadProcessHeaps @ 0x1800F82C0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180061760 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180074FA0 (RtlQueryHeapInformation.c)
 *     RtlpPushPageDescriptor @ 0x1800F8158 (RtlpPushPageDescriptor.c)
 */

char RtlpReadProcessHeaps()
{
  char result; // al
  _QWORD v1[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  v1[0] = -1LL;
  v1[1] = 0LL;
  v4 = 0LL;
  v3 = RtlpLeakCallbackRoutine;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v1, 0x58uLL, 0LL);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
  RtlpLDPreviousPage = 0LL;
  RtlpLDNumBlocks = 0;
  return result;
}
