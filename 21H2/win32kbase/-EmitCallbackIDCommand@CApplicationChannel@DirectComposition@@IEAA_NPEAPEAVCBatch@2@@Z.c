/*
 * XREFs of ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00138E8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x1C00B518C (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::EmitCallbackIDCommand(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // di

  if ( *((char *)this + 240) < 0 && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, a2, 0) )
    *((_BYTE *)this + 240) &= ~0x80u;
  v4 = 1;
  if ( (*((_BYTE *)this + 241) & 1) != 0 && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, a2, 1) )
    *((_BYTE *)this + 241) &= ~1u;
  if ( *((char *)this + 240) < 0 || (*((_BYTE *)this + 241) & 1) != 0 )
    return 0;
  return v4;
}
