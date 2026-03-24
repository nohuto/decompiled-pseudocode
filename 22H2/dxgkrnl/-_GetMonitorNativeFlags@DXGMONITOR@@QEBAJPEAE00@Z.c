/*
 * XREFs of ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C0009E24
 * Callers:
 *     MonitorGetNativeFlags @ 0x1C0133A54 (MonitorGetNativeFlags.c)
 * Callees:
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0133DD0 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 *     ?_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z @ 0x1C016377C (-_GetDisplayIDBlob@DXGMONITOR@@QEBAJIPEAIPEAE@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetMonitorNativeFlags(DXGMONITOR *this, unsigned __int8 *a2, bool *a3, bool *a4)
{
  int v8; // eax
  const void *EdidBaseBlockPtr; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *((_DWORD *)this + 10);
  *a3 = (v8 & 0x200) != 0;
  *a2 = BYTE1(v8) & 1;
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(this);
  *a4 = EdidBaseBlockPtr == 0LL;
  if ( !EdidBaseBlockPtr )
    *a4 = DXGMONITOR::_GetDisplayIDBlob(this, 0, &v14, 0LL) == -1071841279;
  return 0LL;
}
