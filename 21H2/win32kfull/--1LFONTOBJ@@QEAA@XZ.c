/*
 * XREFs of ??1LFONTOBJ@@QEAA@XZ @ 0x1C028B1B8
 * Callers:
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A79B8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LFONTOBJ::~LFONTOBJ(struct LFONT **this)
{
  struct LFONT *v1; // rcx

  v1 = *this;
  if ( v1 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v1);
}
