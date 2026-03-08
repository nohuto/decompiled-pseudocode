/*
 * XREFs of ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C030E394
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C01A6DD8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C0216A04 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C030E1D8 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *v9; // rax
  unsigned int v10; // ebx
  _BYTE v12[16]; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF

  v13 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, &v13);
  if ( Entry )
    goto LABEL_6;
  v9 = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, 0LL);
  if ( !v9 )
  {
    WdLogSingleEntry2(1LL, a2->HighPart, a2->LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Could not find existing entry for adapter luid 0x%lx, 0x%lx",
      a2->HighPart,
      a2->LowPart,
      0LL,
      0LL,
      0LL);
    v10 = -1073741811;
    goto LABEL_7;
  }
  Entry = DXGADAPTERSOURCEHASH::AddEntry(this, a2, a3, (*((_DWORD *)v9 + 3) & 2) != 0);
  if ( Entry )
  {
LABEL_6:
    *a4 = ((__int64)Entry - *((_QWORD *)this + 6)) >> 4;
    v10 = 0;
  }
  else
  {
    v10 = -1073741801;
  }
LABEL_7:
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
  return v10;
}
