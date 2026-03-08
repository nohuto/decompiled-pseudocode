/*
 * XREFs of ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C02B8374
 * Callers:
 *     DxgkGetSharedPrimaryHandle @ 0x1C02CD270 (DxgkGetSharedPrimaryHandle.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C033A3A4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 1321LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < m_NumVidPnSources",
      1321LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 2)) )
  {
    WdLogSingleEntry1(1LL, 1322LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1322LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = *(_QWORD *)(4000 * v3 + *((_QWORD *)this + 16) + 88);
  if ( !v4 || (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 4LL) & 0x10) != 0 )
    return 0LL;
  else
    return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 56LL) + 24LL);
}
