/*
 * XREFs of ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x1C0004938
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C0168AEC (MonitorSetLastWireformatAndColorspace.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C0179D7C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C0180E6C (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C018110C (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     MonitorSetLastWireformat @ 0x1C03C072C (MonitorSetLastWireformat.c)
 *     ??1MonitorGammaState@DxgMonitor@@QEAA@XZ @ 0x1C03C7968 (--1MonitorGammaState@DxgMonitor@@QEAA@XZ.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall auto_rc<DXGK_GAMMA_RAMP>::reset(ReferenceCounted **a1, ReferenceCounted *a2)
{
  ReferenceCounted *v4; // rcx
  unsigned __int64 result; // rax

  v4 = *a1;
  if ( v4 && a2 != v4 )
    result = ReferenceCounted::Release(v4);
  *a1 = a2;
  return result;
}
