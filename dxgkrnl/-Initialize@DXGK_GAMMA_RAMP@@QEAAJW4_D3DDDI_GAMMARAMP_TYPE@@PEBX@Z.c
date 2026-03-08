/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0004868
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0179B90 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0179EC4 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z @ 0x1C0180E6C (-_SetColorSpaceTransform@MonitorGammaState@DxgMonitor@@AEAAJKPEAX@Z.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C018110C (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 *     ?GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01D491C (-GetDxgiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     DxgkSetGammaRamp @ 0x1C02EDBA0 (DxgkSetGammaRamp.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C030E51C (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0004A10 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, enum _D3DDDI_GAMMARAMP_TYPE a2, const void *a3)
{
  __int64 v3; // rsi
  unsigned __int64 SizeFromGammaRampType; // rax
  void *v7; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d

  v3 = a2;
  if ( (unsigned int)(a2 - 1) > 4 )
  {
    WdLogSingleEntry1(2LL, a2);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v10,
        v9,
        v11,
        0,
        0,
        -1,
        (__int64)L"Caller specified gamma ramp type 0x%I64x is not valid.",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  else
  {
    SizeFromGammaRampType = GetSizeFromGammaRampType(a2);
    *((_QWORD *)this + 3) = SizeFromGammaRampType;
    if ( !SizeFromGammaRampType )
    {
LABEL_6:
      *((_DWORD *)this + 4) = v3;
      return 0LL;
    }
    v7 = (void *)operator new[](SizeFromGammaRampType, 1265072196LL, 256LL);
    *((_QWORD *)this + 4) = v7;
    if ( v7 )
    {
      if ( a3 )
        memmove(v7, a3, *((_QWORD *)this + 3));
      goto LABEL_6;
    }
    WdLogSingleEntry1(6LL, *((_QWORD *)this + 3));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v13,
        v12,
        v14,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate 0x%I64x byte memory for GAMMA RAMP.",
        *((_QWORD *)this + 3),
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225495LL;
  }
}
