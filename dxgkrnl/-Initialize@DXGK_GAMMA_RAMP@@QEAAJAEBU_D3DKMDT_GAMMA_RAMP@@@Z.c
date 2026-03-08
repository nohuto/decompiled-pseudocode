/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0004974
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0069938 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ @ 0x1C0179D7C (-OnDxgiGammaRampChange@MonitorGammaState@DxgMonitor@@QEAAJXZ.c)
 *     ?_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z @ 0x1C018110C (-_CombineDXGIGammaRamp@MonitorGammaState@DxgMonitor@@AEAAJPEBUDXGK_GAMMA_RAMP@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0004A10 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(DXGK_GAMMA_RAMP *this, const struct _D3DKMDT_GAMMA_RAMP *a2)
{
  unsigned __int64 SizeFromGammaRampType; // rax
  SIZE_T DataSize; // r8
  void *v6; // rax
  size_t v7; // r8
  int v9; // edx
  D3DDDI_GAMMARAMP_TYPE v10; // ecx
  int v11; // r8d
  const wchar_t *v12; // rax
  int v13; // edx
  int v14; // r8d
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  __int64 Type; // [rsp+38h] [rbp-30h]
  SIZE_T v19; // [rsp+40h] [rbp-28h]
  __int64 v20; // [rsp+48h] [rbp-20h]

  if ( (unsigned int)(a2->Type - 1) > 4 )
  {
    WdLogSingleEntry1(2LL, a2->Type);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return 3221225485LL;
    v20 = 0LL;
    v19 = 0LL;
    Type = a2->Type;
    v12 = L"Caller specified gamma ramp has invalid gamma type 0x%I64x.";
    goto LABEL_11;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(a2->Type);
  *((_QWORD *)this + 3) = SizeFromGammaRampType;
  DataSize = a2->DataSize;
  if ( SizeFromGammaRampType != DataSize )
  {
    WdLogSingleEntry3(2LL, a2->Type, DataSize, -1073741811LL);
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) == 0 )
      return 3221225485LL;
    v10 = a2->Type;
    v20 = -1073741811LL;
    v19 = a2->DataSize;
    v12 = L"GammaRamp size 0x%I64x does not match the gamma ramp type 0x%I64x, returning 0x%I64x";
    Type = a2->Type;
LABEL_11:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v10, v9, v11, 0, 0, -1, (__int64)v12, Type, v19, v20, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( !SizeFromGammaRampType )
  {
LABEL_7:
    *((_DWORD *)this + 4) = a2->Type;
    return 0LL;
  }
  if ( !a2->Data.pRgb256x3x16 )
  {
    WdLogSingleEntry1(2LL, 177LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"Caller specified gamma ramp does not have the gamma table it should have.",
        v13,
        v14,
        0,
        0,
        -1,
        (__int64)L"Caller specified gamma ramp does not have the gamma table it should have.",
        177LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
  v6 = (void *)operator new[](SizeFromGammaRampType, 1265072196LL, 256LL);
  v7 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 4) = v6;
  if ( v6 )
  {
    memmove(v6, a2->Data.pRgb256x3x16, v7);
    goto LABEL_7;
  }
  WdLogSingleEntry1(6LL, v7);
  if ( bTracingEnabled )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v16,
        v15,
        v17,
        0,
        1,
        -1,
        (__int64)L"Failed to allocate 0x%I64x byte memory for GAMMA RAMP.",
        *((_QWORD *)this + 3),
        0LL,
        0LL,
        0LL,
        0LL);
  }
  return 3221225495LL;
}
