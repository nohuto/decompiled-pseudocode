/*
 * XREFs of ?put@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAPEAPEAUDXGK_GAMMA_RAMP@@XZ @ 0x1C0004914
 * Callers:
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C0179D7C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C0180E6C (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

_QWORD *__fastcall auto_rc<DXGK_GAMMA_RAMP>::put(_QWORD *a1)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( *a1 )
  {
    WdLogSingleEntry1(1LL, 202LL);
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
          (__int64)L"An auto_rc must be empty before calling put()",
          202LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return a1;
}
