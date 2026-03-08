/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C01D7C20
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x1C0360E44 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C0361E04 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry1(1LL, 201LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 201LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) >> 7) & 0x3F | (((*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 19) ^ ((unsigned int)v3 ^ (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) << 19)) & 0xFFFFFF) << 6);
}
