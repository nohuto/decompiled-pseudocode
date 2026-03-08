/*
 * XREFs of ?GetDriverIgnoreCCDDatabase@ADAPTER_DISPLAY@@QEBAHXZ @ 0x1C000AC48
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C01C11E4 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ @ 0x1C03C2BA0 (-IsCcdDatabaseIgnored@MONITOR_MGR@@UEBA_NXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDriverIgnoreCCDDatabase(ADAPTER_DISPLAY *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( !*(_QWORD *)(*((_QWORD *)this + 2) + 2920LL) )
  {
    WdLogSingleEntry1(1LL, 6851LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v4,
          v3,
          v5,
          0,
          2,
          -1,
          (__int64)L"GetAdapter()->IsDisplayAdapter()",
          6851LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *((unsigned int *)this + 110);
}
