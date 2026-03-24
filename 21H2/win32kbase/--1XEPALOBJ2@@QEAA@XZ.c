/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00C9218
 * Callers:
 *     bDeletePalette @ 0x1C0082990 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CBDF4 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C002E0A0 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(unsigned int **this)
{
  unsigned int *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 1);
}
