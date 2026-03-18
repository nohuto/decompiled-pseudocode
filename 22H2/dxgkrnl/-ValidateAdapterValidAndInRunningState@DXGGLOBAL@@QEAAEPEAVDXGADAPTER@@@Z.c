/*
 * XREFs of ?ValidateAdapterValidAndInRunningState@DXGGLOBAL@@QEAAEPEAVDXGADAPTER@@@Z @ 0x1C0315E08
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C00520C0 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C031562C (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0315CAC (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 */

bool __fastcall DXGGLOBAL::ValidateAdapterValidAndInRunningState(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  char v2; // bl
  struct DXGADAPTER *i; // rax

  v2 = 0;
  if ( this[87] != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 6503LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_AdapterListMutex.IsOwner()", 6503LL, 0LL, 0LL, 0LL, 0LL);
  }
  for ( i = this[96]; i != (struct DXGADAPTER *)(this + 96) && i; i = *(struct DXGADAPTER **)i )
  {
    if ( i == a2 )
      return *((_DWORD *)a2 + 50) == 1;
  }
  return v2;
}
