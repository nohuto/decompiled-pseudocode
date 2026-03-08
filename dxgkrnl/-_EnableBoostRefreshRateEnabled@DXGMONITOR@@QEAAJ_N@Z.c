/*
 * XREFs of ?_EnableBoostRefreshRateEnabled@DXGMONITOR@@QEAAJ_N@Z @ 0x1C03C4D50
 * Callers:
 *     MonitorEnableBoostRefreshRateEnabledByDefault @ 0x1C03BF704 (MonitorEnableBoostRefreshRateEnabledByDefault.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C03CAB00 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_EnableBoostRefreshRateEnabled(DXGMONITOR *this, unsigned __int8 a2)
{
  unsigned int v2; // edi
  int v5; // ebp
  int updated; // esi
  char v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+60h] [rbp+18h]

  v2 = a2;
  if ( a2
    && (*(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 21) + 40LL))(
                     *((_QWORD *)this + 21),
                     &v7) & 0x20) == 0 )
  {
    return 3221225659LL;
  }
  v5 = *((_DWORD *)this + 88);
  *((_DWORD *)this + 88) = v2;
  updated = DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, 2u);
  if ( updated < 0 )
    *((_DWORD *)this + 88) = v5;
  v8 = 0LL;
  DxgkLogCodePointPacket(0x79u, *((_DWORD *)this + 45), v2, 0, 0LL);
  return (unsigned int)updated;
}
