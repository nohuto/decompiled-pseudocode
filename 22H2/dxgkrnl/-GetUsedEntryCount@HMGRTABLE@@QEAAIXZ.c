/*
 * XREFs of ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x1C005AF34
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C03658D4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C03668B4 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall HMGRTABLE::GetUsedEntryCount(HMGRTABLE *this)
{
  int v2; // edx
  int v3; // r8d

  if ( *((_DWORD *)this + 4) < *((_DWORD *)this + 5) )
  {
    WdLogSingleEntry1(1LL, 157LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v2,
          v3,
          0LL,
          2,
          -1,
          L"m_TableSize >= m_FreeCount",
          157LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 5));
}
