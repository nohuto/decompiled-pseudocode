/*
 * XREFs of ?GetNextMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00027F0
 * Callers:
 *     ?FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@EEE@Z @ 0x1C006973C (-FindClosestTargetMode@DMMVIDPNTARGETMODESET@@QEAAPEBVDMMVIDPNTARGETMODE@@IIU_D3DDDI_RATIONAL@@W.c)
 *     BmlGetNextBestTargetMode @ 0x1C016E26C (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
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
