/*
 * XREFs of DxgkShareObjects @ 0x1C01861C0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DxgkShareObjectsInternal @ 0x1C0186240 (DxgkShareObjectsInternal.c)
 */

__int64 __fastcall DxgkShareObjects(int a1, void *Src, __int64 a3, ACCESS_MASK DesiredAccess, __int64 a5)
{
  int v9; // edx
  int v10; // ecx

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 982LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      982LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  LOBYTE(v9) = 1;
  LOBYTE(v10) = 1;
  return DxgkShareObjectsInternal(v10, v9, 0, a1, Src, a3, DesiredAccess, a5, 0LL);
}
