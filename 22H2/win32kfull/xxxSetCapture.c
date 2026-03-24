/*
 * XREFs of xxxSetCapture @ 0x1C00DAC30
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0049E28 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C00D79AC (xxxDCETrackCaptionButton.c)
 *     NtUserSetCapture @ 0x1C00DAB60 (NtUserSetCapture.c)
 *     xxxTrackCaptionButton @ 0x1C0247450 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02480D4 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C02487D8 (xxxIsDragging.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     xxxCapture @ 0x1C00C02CC (xxxCapture.c)
 */

unsigned __int64 *__fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 *v2; // rbx
  unsigned __int64 v3; // rdi

  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v1 + 388) & 0x100000) == 0
    && (!a1 || *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) == v1)
    && ((v2 = *(unsigned __int64 **)(v1 + 104)) != 0LL ? (v3 = *v2) : (v3 = 0LL),
        (xxxCapture(gptiCurrent, a1, 2), v3) && HMValidateHandleNoSecure(v3, 1)) )
  {
    return v2;
  }
  else
  {
    return 0LL;
  }
}
