/*
 * XREFs of xxxSetCapture @ 0x1C0011784
 * Callers:
 *     NtUserSetCapture @ 0x1C00116E0 (NtUserSetCapture.c)
 *     xxxRealDefWindowProc @ 0x1C0108B10 (xxxRealDefWindowProc.c)
 *     xxxDCETrackCaptionButton @ 0x1C01BA87C (xxxDCETrackCaptionButton.c)
 *     xxxTrackCaptionButton @ 0x1C022C718 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F868 (xxxDragObject.c)
 *     xxxIsDragging @ 0x1C022FF38 (xxxIsDragging.c)
 * Callees:
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall xxxSetCapture(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx

  v1 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( (*(_DWORD *)(v1 + 396) & 0x100000) != 0 || a1 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 432LL) != v1 )
    return 0LL;
  v2 = *(_QWORD *)(v1 + 112);
  v3 = v2 ? *(_QWORD *)v2 : 0LL;
  xxxCapture(gptiCurrent, a1, 2LL);
  if ( !v3 )
    return 0LL;
  LOBYTE(v4) = 1;
  return v2 & -(__int64)(HMValidateHandleNoSecure(v3, v4) != 0);
}
