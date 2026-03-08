/*
 * XREFs of ?_GetMostCapableColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C01810AC
 * Callers:
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C0179D7C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEAA_NXZ @ 0x1C0180360 (-_IsTargetMatrix_3x4Supported@MonitorGammaState@DxgMonitor@@AEAA_NXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C0180E6C (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C018110C (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgMonitor::MonitorGammaState::_GetMostCapableColorSpaceTransform(
        DxgMonitor::MonitorGammaState *this,
        enum _D3DDDI_GAMMARAMP_TYPE *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // ecx
  enum _D3DDDI_GAMMARAMP_TYPE v6; // eax

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
  *a2 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v5 = *(_DWORD *)(v4 + 48);
  v6 = D3DDDI_GAMMARAMP_MATRIX_3x4;
  if ( (v5 & 4) != 0 )
    goto LABEL_4;
  if ( (v5 & 1) != 0 )
  {
    v6 = D3DDDI_GAMMARAMP_RGB256x3x16;
LABEL_4:
    *a2 = v6;
    return 0LL;
  }
  return 3221225659LL;
}
