/*
 * XREFs of ??0VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAA@PEAU_VIDSCH_INDEPENDENT_FLIP_STATE@@@Z @ 0x1C003D3F0
 * Callers:
 *     VidSchCancelPresentAtFlips @ 0x1C003E410 (VidSchCancelPresentAtFlips.c)
 *     VidSchEnterIndependentFlip @ 0x1C003F270 (VidSchEnterIndependentFlip.c)
 *     VidSchExitIndependentFlipInternal @ 0x1C003FABC (VidSchExitIndependentFlipInternal.c)
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x1C004A1C4 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 * Callees:
 *     <none>
 */

VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *__fastcall VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR(
        VIDSCH_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this,
        struct _VIDSCH_INDEPENDENT_FLIP_STATE *a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  bool v4; // zf

  v2 = *((_DWORD *)a2 + 4);
  *((_QWORD *)this + 2) = (char *)a2 + 20;
  v3 = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  v4 = v2 == 0;
  while ( 1 )
  {
    *(_DWORD *)this = v2;
    if ( v4 || (v2 & 1) != 0 )
      break;
    ++v3;
    v2 >>= 1;
    v4 = v2 == 0;
    *((_DWORD *)this + 1) = v3;
  }
  return this;
}
