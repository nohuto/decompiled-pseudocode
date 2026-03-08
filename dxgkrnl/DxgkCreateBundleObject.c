/*
 * XREFs of DxgkCreateBundleObject @ 0x1C0322540
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DxgkCreateBundleObjectInternal @ 0x1C03225D0 (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DxgkCreateBundleObject(__int64 a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 2449LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      2449LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v4) = 1;
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkCreateBundleObjectInternal(v3, v2, v4, 0, a1, 0LL);
}
