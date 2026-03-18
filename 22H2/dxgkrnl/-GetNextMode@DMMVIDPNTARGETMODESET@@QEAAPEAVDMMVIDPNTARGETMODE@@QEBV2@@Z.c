/*
 * XREFs of ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C0002B60
 * Callers:
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C006A36C (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     BmlGetNextBestTargetMode @ 0x1C0177670 (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03BE48C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNTARGETMODE *__fastcall DMMVIDPNTARGETMODESET::GetNextMode(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODE *const a2)
{
  DMMVIDPNTARGETMODESET *v4; // rdx
  struct DMMVIDPNTARGETMODE *result; // rax

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = (DMMVIDPNTARGETMODESET *)*((_QWORD *)a2 + 1);
  result = (DMMVIDPNTARGETMODESET *)((char *)v4 - 8);
  if ( v4 == (DMMVIDPNTARGETMODESET *)((char *)this + 48) )
    return 0LL;
  return result;
}
