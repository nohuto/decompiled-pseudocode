/*
 * XREFs of ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C02B5B30
 * Callers:
 *     DxgkUnmapFrameBufferPointerCB @ 0x1C0052540 (DxgkUnmapFrameBufferPointerCB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGADAPTER::UnmapFrameBufferPointer(DXGADAPTER *this, unsigned int a2, void *a3)
{
  __int64 v3; // rbx

  if ( a2 < *((_DWORD *)this + 72) )
  {
    MmUnmapViewInSystemSpace(a3);
    return 0LL;
  }
  else
  {
    v3 = a2;
    WdLogSingleEntry1(2LL, a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"UnmapFrameBufferPointer Invalid physical adapter index. Index=%u",
      v3,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
