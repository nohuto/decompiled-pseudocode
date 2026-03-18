/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00D24A8
 * Callers:
 *     bDeletePalette @ 0x1C008B2F0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D3170 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0042440 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(struct OBJECT **this)
{
  struct OBJECT *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 1);
}
