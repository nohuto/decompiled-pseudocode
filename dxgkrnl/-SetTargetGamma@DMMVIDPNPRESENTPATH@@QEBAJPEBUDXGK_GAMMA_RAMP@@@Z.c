/*
 * XREFs of ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017AC38
 * Callers:
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017ABB4 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00034A0 (-IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z @ 0x1C017AD28 (-DdiSetTargetGamma@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETTARGETGAMMA@@@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::SetTargetGamma(DMMVIDPNPRESENTPATH *this, const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rbx
  DXGADAPTER **v6; // rbx
  __int64 v7; // r8
  D3DDDI_GAMMA_RAMP_RGB256x3x16 *v8; // xmm1_8
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // ebx
  _DXGKARG_SETTARGETGAMMA v13; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  if ( !*(_QWORD *)(v4 + 40) )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 88LL);
  if ( !*(_QWORD *)(v5 + 8) )
    WdLogSingleEntry0(1LL);
  v6 = *(DXGADAPTER ***)(v5 + 8);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v6[2]) )
    WdLogSingleEntry0(1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6[2] + 27) + 64LL) + 40LL) + 28LL) < 0x700Au )
    WdLogSingleEntry0(1LL);
  if ( !a2 || !DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL)) )
    return 0LL;
  v8 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)*((_QWORD *)a2 + 4);
  memset(&v13, 0, sizeof(v13));
  v9 = *((_OWORD *)a2 + 1);
  v13.TargetId = *(_DWORD *)(v7 + 24);
  v13.GammaRamp.Data.pRgb256x3x16 = v8;
  *(_OWORD *)&v13.GammaRamp.Type = v9;
  v10 = ADAPTER_DISPLAY::DdiSetTargetGamma((ADAPTER_DISPLAY *)v6, &v13);
  v11 = v10;
  if ( v10 == -1073741637 )
  {
    WdLogSingleEntry2(3LL, this, -1073741637LL);
    return 3221225659LL;
  }
  else
  {
    if ( v10 >= 0 )
      return 0LL;
    WdLogSingleEntry2(2LL, this, v10);
    return v11;
  }
}
