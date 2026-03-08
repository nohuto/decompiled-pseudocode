/*
 * XREFs of ?UpdateGammaRampOnVidPnTarget@KernelDriver@@UEAAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017AA20
 * Callers:
 *     <none>
 * Callees:
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C017AA4C (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

int __fastcall KernelDriver::UpdateGammaRampOnVidPnTarget(KernelDriver *this, const struct DXGK_GAMMA_RAMP *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    return DmmUpdateGammaRampOnVidPnTarget(*(void *const *)(v2 + 16), *((_DWORD *)this + 8), a2);
  WdLogSingleEntry1(2LL, -1073741632LL);
  return -1073741632;
}
