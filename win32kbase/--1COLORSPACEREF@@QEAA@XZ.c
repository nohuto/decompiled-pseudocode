/*
 * XREFs of ??1COLORSPACEREF@@QEAA@XZ @ 0x1C00DEE88
 * Callers:
 *     ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEB84 (--$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00DEC7C (--$vGarbageCollectObject@VCOLORSPACEGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0049850 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall COLORSPACEREF::~COLORSPACEREF(struct OBJECT **this)
{
  struct OBJECT *v1; // rcx

  v1 = *this;
  if ( v1 )
    DEC_SHARE_REF_CNT(v1);
}
