/*
 * XREFs of DxgkCaptureQueryInterface @ 0x1C02D93FC
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01D6220 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DxgkCaptureQueryInterface(unsigned __int16 *a1, _DWORD *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *a1;
  if ( __PAIR32__(a1[1], v3) == 65584 )
  {
    *((_QWORD *)a1 + 1) = 0LL;
    *((_QWORD *)a1 + 2) = W32kStub_DCompositionNotifyCompositionTokenPresent;
    *((_QWORD *)a1 + 3) = W32kStub_DCompositionNotifyCompositionTokenPresent;
    *((_QWORD *)a1 + 4) = DxgkCaptureAcquireSynchronization;
    *((_QWORD *)a1 + 5) = DxgkCaptureReleaseSynchronization;
    result = 0LL;
    *a2 = 48;
  }
  else
  {
    WdLogSingleEntry5(2LL, -1073741811LL, v3, 528LL, a1[1], 1LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid DXGCAPTURE_INTERFACE Mismatch 0x%I64x 0x%I64x version 0x%I64x 0x%I64x",
      -1073741811LL,
      *a1,
      528LL,
      a1[1],
      1LL);
    return 3221225485LL;
  }
  return result;
}
