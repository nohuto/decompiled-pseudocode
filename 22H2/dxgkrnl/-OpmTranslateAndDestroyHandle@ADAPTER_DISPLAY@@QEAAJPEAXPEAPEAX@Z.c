/*
 * XREFs of ?OpmTranslateAndDestroyHandle@ADAPTER_DISPLAY@@QEAAJPEAXPEAPEAX@Z @ 0x1C02BE3E0
 * Callers:
 *     DxgkOpmTranslateAndDestroyHandle @ 0x1C02C2E58 (DxgkOpmTranslateAndDestroyHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z @ 0x1C02BE6D0 (-OpmValidateAdapterHandle@ADAPTER_DISPLAY@@AEAAEPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::OpmTranslateAndDestroyHandle(DXGADAPTER **this, _QWORD *a2, void **a3)
{
  _QWORD **v7; // rcx
  void **v8; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6742LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 6742LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( this[49] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6743LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OpmI2CMutex.IsOwner()", 6743LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( ADAPTER_DISPLAY::OpmValidateAdapterHandle((ADAPTER_DISPLAY *)this, a2) )
  {
    v7 = (_QWORD **)*a2;
    *a3 = (void *)a2[2];
    if ( v7[1] != a2 || (v8 = (void **)a2[1], *v8 != a2) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    operator delete(a2);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(1LL, 6751LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"OPM passed in an invalid hOpmAdapterHandle!",
      6751LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223192844LL;
  }
}
